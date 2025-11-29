
// week1-2opdra2.c (versie voor opdracht 2)

#include <stdio.h>

void print_function(char letter);

int main(void)
{
    char star = '*';
    char dash = '-';
    int row;

    for (row = 0; row < 10; row++)
    {
        print_function(star);
        printf(" ");
        print_function(dash);
        printf("\n");
    }

    return 0;
}

void print_function(char letter)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        printf("%c", letter);
    }
}
```

Sources
