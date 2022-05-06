#include<stdio.h>
int main()
{
    char c;
    int i;
    scanf("%c",&c);
    for (i=65;i<=127;i++)
    {
    if(char(c)==i)
    {
        printf("%d",i);
    }
    }
    return 0;
}