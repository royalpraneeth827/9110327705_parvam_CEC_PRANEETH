/*sum of array*/
#include<stdio.h>
int main()
{
    int a,i,sum = 0;
   
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    
    {
        scanf("%d",&arr[i]);
        sum=sum +arr[i];
    
    }