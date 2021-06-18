#include <stdio.h>
#include <string.h>

void init()
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main()
{
    int apaini = 100;
    unsigned int yes = 10003434;
    char pass[100];
    init();
    printf("password : ");
    scanf("%s", pass);
    if (strcmp(pass, "pforpass") == 0)
    {
        system("cat flag.txt");
    }
}