#include <stdio.h>

enum COLOR
{
    red,
    yellow,
    green
};

void f(enum COLOR c);

int main(int argc, char const *argv[])
{
    enum COLOR t = red;
    scanf("%d", &t);
    f(t);

    return 0;
}

void f(enum COLOR c)
{
    printf("%d\n", c);
}
