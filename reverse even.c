#include <stdio.h>
void evennumber(int n)
{
    if(n>=1)
    return ;
  printf("%d",n*2);
  evennumber(n-1);
}

int main()
{
    evennumber(1);
    return 0;
}