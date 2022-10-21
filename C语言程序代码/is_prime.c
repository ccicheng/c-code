#include <stdio.h>
  
int is_prime(int n)
{
    int i;
    for(i = 2; i*i <= n; i ++)
        if(n%i == 0) return 0;
    return 1;
}
  
int main()
{
    int i,a[20],n;
    for(i = 0,n=2; i<20; n++)
    {
        if(is_prime(n))a[i++] = n;
    }
    for(i = 0; i<20; i++)
        printf("%d,",a[i]);
    return 0;
}
