#include<stdio.h>
#define MAXPROCESS 10
#define MAXRESOURCE 10

int np,nr;
int process[MAXPROCESS],resource[MAXRESOURCE];
int max[MAXPROCESS][MAXRESOURCE];
int alloted[MAXPROCESS][MAXRESOURCE];
int need[MAXPROCESS][MAXRESOURCE];


int main()
{
    printf("enter the number of process:");
    scanf("%d",&np);
    printf("enter the number of reosurces:");
    scanf("%d",&nr);
    printf("enter the available resources:\n");
    for(int i=0;i<nr;i++)
    {
        printf("available resource of resouce%d:",(i+1));
        scanf("%d",&resource[i]);
    }
    printf("enter the maximum resource of each process:\n");
    for(int i=0;i<np;i++)
    {
        printf("process%d\n",(i+1));
        for(int j=0;j<nr;j++)
        {
            
            printf("resource%d : ",(j+1));
            scanf("%d",&max[i][j]);
        }
    }
    printf("enter the allocation of resources:");
    for(int i=0;i<np;i++)
    {
        printf("process%d",(i+1));
        for(int j=0;j<nr;j++)
        {
            scanf("resource%d",&alloted[i][j]);
            need[i][j]=max[i][j]-alloted[i][j];
        }
    }
    printf("processes\tresources\tallocation\n");
    for(int i=0;i<np;i++)
    {
        printf("%d\t\t",(i+1));
        for(int j=0;j<nr;j++)
        {
            printf("%d \t%d",max[i][j],alloted[i][j]);
        }
        printf("\n");
    }
    printf("available:");
    for(int i=0;i<nr;i++)
    {
        scanf("%d\t",&resource[i]);
    }



;}