#include <stdio.h>

void init()
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}
void win()
{
    system("cat flag.txt");
}

int main()
{
    init();
    int anu = 1;
    char buff[100];
    printf("Input : ");
    gets(buff);
    if (anu != 1)
    {
        win();
    }

    return 0;
}