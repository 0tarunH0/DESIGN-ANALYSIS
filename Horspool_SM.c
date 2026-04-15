#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256
int Table[SIZE];
void shifttable(char p[10])
{
    int i,m;
    m=strlen(p);
    for(i=0;i<SIZE;i++)
        Table[i]=m;
    for(i=0;i<m-2;i++)
        Table[p[i]]=m-1-i;
}
int Horspool(char T[50],char p[10])
{
    int i,k,n,m;
    n=strlen(T);
    m=strlen(p);
    shifttable(p);
    i=m-1;
    while(i<=n-1)
    {
        k=0;
        while(k<m && T[i-k]==p[m-1-k])
            k=k+1;
        if(k==m)
            return i-m+1;
        else
            i=i+Table[T[i]];
    }
    return -1;
}
int main()
{
    char T[50],p[10];
    int pos=-1;
    printf("\nRead text :\n");
    scanf("%s",T);
    printf("\nRead pattern :\n");
    scanf("%s",p);
    pos=Horspool(T,p);
    if(pos==-1)
        printf("\nPattern not found");
    else
        printf("\nPattern found at location %d\n",pos);
    return 0;

}
