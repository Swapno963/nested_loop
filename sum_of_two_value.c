#include<stdio.h>
int main()
{
    int n,sum_amount;
    scanf("%d",&n);
    int arr[n];

    // taking input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // takingn our desire sum
    scanf("%d",&sum_amount);
    // printing arr
    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == sum_amount)
            {
                printf("%d %d \n",arr[i],arr[j]);
                break;
            }
            else{
                continue;
            }
        }
        //printf("%d",arr[i]);
    }
    return 0;
}