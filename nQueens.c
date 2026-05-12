#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int x[10],count=1;

void Print(int n)
{
    int i=1,j=1;
    printf("\nSolution = %d\n",count++);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]!=j)
                printf("\t-");
            else
                printf("\tQ");

        }
        printf("\n");

    }
}
int place(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
        if(x[j]==i||abs(x[j]-i)==abs(j-k))
            return 0;
    return 1;
}
void nqueens(int k,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                Print(n);
            }
            else
                nqueens(k+1,n);
        }
    }
}
int main()
{
    int n;
    printf("\nRead no.of queens : ");
    scanf("%d",&n);
    if (n==1||n==2||n==3)
        printf("\nNo solution for n = %d",n);
    else
        nqueens(1,n);
    return 0;
}
