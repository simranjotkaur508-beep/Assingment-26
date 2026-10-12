#include <stdio.h>
void octal(int n)
{
    if(n>7)
    {
        octal(n/8);
    }
    printf("%d", n%8);
}
int main()
{
    int n;
    printf("enter a decimal number");
    scanf("%d",&n);
    octal(n);
    return 0;
}