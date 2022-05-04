#include<stdio.h>
int main()
{
    int n,i,j,t,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int e;
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
     t=a[0];
    for(i=0;i<n;i++)
    {
        if(e+a[i]>=t)
        printf("True ");
        else
        printf("False ");
    }
    return 0;
}