#include<stdio.h>
#include<stdlib.h>

int count;
void merge(int a[10],int l,int m,int r)
{
    int i,j,k,b[10];
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=r)
    {

        count=count+1;
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=m)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=b[i];
}

void merge_sort(int a[10],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main()
{

    int i,n,a[10];
    printf("\nRead the size of the array : ");
    scanf("%d",&n);
    printf("\nRead array elments\n");
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
    merge_sort(a,0,n-1);
    printf("\nSorted elements are :\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nTime complexity/Total no. of comparision = %d",count);
    return 0;
}
