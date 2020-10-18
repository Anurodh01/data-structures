#include<stdio.h>
int main()
{
    int i, n;
    printf("enter the number for printing table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d",n,i,n*i);
        printf("\n");
    }
    return 0;

}
