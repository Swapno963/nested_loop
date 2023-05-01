#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        // space
        for(int j=n-i; j>0; j--){
            printf(" ");
        }
        // star
        for(int j = i*2 -1; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}