#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int lenght = strlen(str);
    int i;
    char newstr[lenght];
    for (i = 0; i < lenght; i++) newstr[i] = str[lenght - 1 - i];
    for (i = 0; i < lenght; i++) str[i] = newstr[i];
}