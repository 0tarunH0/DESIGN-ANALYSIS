#include <stdio.h>
#include <stdlib.h>

int count;
void bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count=count+1;
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }


}
int main()
{
    int A[10],n,i;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter array elements :\n");
    for(i=0;i<n;i++)
        scanf(" %d",&A[i]);
    bubble_sort(A,n);
    printf("\nSorted Array : \n ");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nTime complexity/ Total no. of comparision : %d",count);
    return 0;
}
