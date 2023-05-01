#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s = n-1;
    k = 1;
    for(int i=1; i<=n; i++){
        // for space
        for(int j=s; j>=1; j--){
            printf(" ");
        }
        // for star
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k+=2;
    }
    return 0;
}