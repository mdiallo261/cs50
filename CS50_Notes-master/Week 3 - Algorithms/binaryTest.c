#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        return 1;
    }

    else if (argc == 2)
    {
        string word = argv[1];
        int len = strlen(word);
        int start = 0;
        int end = (len - 1);
        // char letter;
        int mid = 0;

        while (mid > 0)
        {
            char letter;
            mid = (start + end) / 2;
            if (letter == word[mid])
            {
                printf("Found: %c!\n", word[mid]);
            }
            else if (letter > word[mid])
            {
                start = mid + 1;
            }
            else if (letter < word[mid])
            {
                end = mid - 1;
            }
            else
            {
                printf("Not found!\n");
            }
        }
    }

return 0;
}
