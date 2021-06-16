#include <stdio.h>
#include <string.h>

int main()
{
    int apaini = 100;
    unsigned int yes = 10003434;
    char pass[100];

    printf("password : ");
    scanf("%s", pass);
    if (strcmp(pass, "hmmFlagNyaAph") == 0)
    {
        system("cat flag.txt");
    }
}