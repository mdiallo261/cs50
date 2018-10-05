#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {

        //checks if argv[1] has only alphabetical characters
        for (int i = 0, n = strlen(argv[1]); i < n; i++) {
            if (!isalpha(argv[1][i])) {
                printf("Please enter a word\n");
                return 1;
            }
        }

        string key = argv[1];
        int keylen = strlen(key);

        printf("plaintext: ");
        string plaintext = get_string();

        printf("ciphertext: ");
        string ciphertext = "";

        //counter used when iterating over the length of only alphabetical characters in the plaintext, starts at 0
        int l = 0;

        for (int i = 0, n = strlen(plaintext); i < n; i++) {

            //this formula makes sure value of j and the position of the index in the key are of the same value, using l to check for the index in the alpha chars
            int j = l % keylen;

            //alphabet counter iterating by 1
            l++;

            ciphertext = plaintext;

            //converts all keys to uppercase so alpha-index conversion is done only once
            key[i] = toupper(key[i]);
            key[i] -= 65;

            if(isupper(plaintext[i])) {
                plaintext[i] -= 65;
                ciphertext[i] = (plaintext[i] + key[j]) % 26;
                ciphertext[i] += 65;
            }
            else if(islower(plaintext[i])) {
                plaintext[i] -= 97;
                ciphertext[i] = (plaintext[i] + key[j]) % 26;
                ciphertext[i] += 97;
            }
            else if(!isalpha(plaintext[i])) {
                //it decrements by 1 for all non-alpha chars
                l--;
            }
        }
        printf("%s\n", ciphertext);

    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}


