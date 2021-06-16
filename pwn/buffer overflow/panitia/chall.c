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
    int repo = 1;
    char buff[20];
    printf("masukin : ");
    gets(buff);
    if (repo != 1)
    {
        win();
    }

    return 0;
}