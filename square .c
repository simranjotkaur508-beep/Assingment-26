#include <stdio.h>
void evennumber(int n)
{
    if(n>3)
    return ;
  printf("%d",n);
  evennumber(n*n);
}

int main()
{
    evennumber(1);
    return 0;
}