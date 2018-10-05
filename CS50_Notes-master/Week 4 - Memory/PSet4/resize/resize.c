/**
 * Copies a BMP piece by piece, just because.
 */

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: ./resize n infile outfile\n");
        return 1;
    }

    // remember filenames
    int n = atoi(argv[1]);
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    if (n < 1 || n > 100)
    {
        printf("Please enter a value between 1 and 100\n");
    }

    //variables for headers changed by n, the outfile
    BITMAPFILEHEADER newFile = bf;
    BITMAPINFOHEADER newInfo = bi;

    //only affects outfile
    newInfo.biWidth = bi.biWidth * n;
    newInfo.biHeight = bi.biHeight * n;
    int newPadding = (4 - (newInfo.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    newInfo.biSizeImage = ((sizeof(RGBTRIPLE) * newInfo.biWidth) + newPadding) * abs(newInfo.biHeight);
    newFile.bfSize = newInfo.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

    // write outfile's BITMAPFILEHEADER
    fwrite(&newFile, sizeof(BITMAPFILEHEADER), 1, outptr); //writes to variable created above

    // write outfile's BITMAPINFOHEADER
    fwrite(&newInfo, sizeof(BITMAPINFOHEADER), 1, outptr); //writes to variable created above

    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {

        //vertically reading into pixels
        for (int vert = 0; vert < n; vert++)
        {

            // iterate over pixels in scanline
            for (int j = 0; j < bi.biWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                //write pixel n times horizontally
                for (int horiz = 0; horiz < n; horiz++)
                {
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }

            }

            // then add it back (to demonstrate how)
            for (int k = 0; k < newPadding; k++)
            {
                fputc(0x00, outptr);
            }

            // skip over padding, if any
            fseek(inptr, padding, SEEK_CUR);

            if (vert < n-1)
            {
                //go back to beginning of fread
                fseek(inptr, -((sizeof(RGBTRIPLE) * bi.biWidth) + padding), SEEK_CUR);
            }

        }


    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}
