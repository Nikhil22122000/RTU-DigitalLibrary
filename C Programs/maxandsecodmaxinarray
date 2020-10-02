#include<stdio.h>
int main()
{
    int a[20],max,max1,x,i,n;
    printf("enter the no. of elements:\n");
    scanf("%d",&n);
    printf("start entering the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
    }
    printf("the max element of array is %d\n",max);
    for(i=x;i<n;i++)
    {
        a[i]=a[i+1];
    }
    max1=a[0];
    for(i=0;i<n-1;i++)
    {
        if(a[i]>max1)
            max1=a[i];
    }
    printf("the second highest element is %d\n",max1);
    return 0;
}
