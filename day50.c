// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    if (scanf("%s", date) != 1) return 0;
    date[2] = '-';
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';
    date[6] = '-';
    printf("%s\n", date);
    return 0;
}

// Q100: // Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i, j, k, n;
scanf("%s", str);
n = strlen(str);
for(i = 0; i < n; i++)
{
for(j = i; j < n; j++)
{
for(k = i; k <= j; k++)
{
printf("%c", str[k]);
}
printf("\n");
}
}
return 0;
}
