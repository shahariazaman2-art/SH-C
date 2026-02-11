#include<stdio.h>
int main()
{
    int a[200],i;
    printf("Enter arrays values:");
    for(i=0; i<200; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("values at even indexes:");
    for(i=0; i<200; i=i+2)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
