#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    string name = get_string();

    //to get first name initial
    printf("%c", toupper(name[0]));

    //get initials of middlename/surname, separate by space
    for (int i = 0, len = strlen(name); i < len; i++) {
        if (name[i] == ' ') {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");

return 0;
}