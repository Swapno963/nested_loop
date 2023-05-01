#include<stdio.h>
int main()
{
    int n,s,sp;
     scanf("%d",&n);
     s=1;
     sp = n-1;
     for(int row = 2*n-1; row >=1; row--)
     {
        // space
        for(int s = 1; s <=sp; s++)
        {
            printf(" ");
        }
        //star
        for(int st = 1; st <=s; st++)
        {
            printf("*");
        }
        if(row >=n+1){
             s+=2;
            sp--;
        }
        else
        {
            sp++;
            s-=2;
        }
       
          printf("\n");
     }
    return 0;
}