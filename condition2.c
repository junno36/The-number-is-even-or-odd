#include<stdio.h>
int main()
{
    int a,res;
    scanf("%d",&a);
    res= a%2;
    if (res==0)
    {
        printf("%d is an even number.", a);
    }
    else
    {
        printf("%d is an odd number.", a);
    }

    return 0;

}
