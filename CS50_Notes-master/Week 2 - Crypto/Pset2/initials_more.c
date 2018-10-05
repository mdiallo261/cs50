#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    string name = get_string();

    //get initials of middlename/surname, separate by space
    for (int i = 0, len = strlen(name); i < len; i++)
    {
        if (((name[i] != ' ') && (name[i] == name[0])) || ((name[i] != ' ') && (name[i - 1] == ' ')))
        {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");

return 0;
}