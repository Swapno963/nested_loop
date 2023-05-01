#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    // taking arr as input
       for(int i=0; i<n-1; i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]>arr[j]){
                int x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
            else
            {
                continue;
            }
        }
    }
     // taking arr as input
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}