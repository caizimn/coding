#include<stdlib.h>
#include<stdio.h>

unsigned long minComMultiple(unsigned int a, unsigned int b);

void main()
{
    printf("gcc ready!\n");
    printf("%u\n",minComMultiple(1,117));
    system("pause");
}

unsigned long minComMultiple(unsigned int a, unsigned int b)
{
    unsigned int i = 0;
    unsigned long s = 1;
    for (i = 2; i <= a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            a = a / i;
            b = b / i;
            s = s * i;
        }
    }
    return s*a*b;
}
    