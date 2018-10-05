#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {
        int key = atoi(argv[1]);

        //user submits plaintext message here
        printf("plaintext: ");
        string plaintext = get_string();


        printf("ciphertext: ");

        //ciphertext is processed through this loop
        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            int ciphertext = plaintext[i];
            if (isalpha(ciphertext)) {
                if (islower(ciphertext)) {
                    //subtract 97 for alphabet ([0] - [25]) index
                    ciphertext -= 97;
                    ciphertext = (ciphertext + key) % 26;
                    ciphertext +=  97;
                }
                else {
                    //subtract 65 for alphabet ([0] - [25]) index
                    ciphertext -= 65;
                    ciphertext = (ciphertext + key) % 26;
                    ciphertext +=  65;
                }
            }
            printf("%c", (char)ciphertext);
        }
        printf("\n");
    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
