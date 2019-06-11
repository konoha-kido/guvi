#include<stdio.h>
int main()
{
int m,n;
scanf("%d %d",&m,&n);
int matrix[10][10],newmatrix[10][10],i,j,k,l;
for( i=0;i<m;i++)
{
    for( j=0;j<n;j++)
    {
        scanf("%d",&matrix[i][j]);
        newmatrix[i][j]=1;
    }
}

for( i=0;i<m;i++)
{
    for( j=0;j<n;j++)
    {
       if(matrix[i][j]==0)
       {
        newmatrix[i][j]=0;
        
        for( k=0;k<m;k++)
        newmatrix[k][j]=0;
        //printf("new %d %d\n",k,j);
        for( l=0;l<n;l++)
        newmatrix[i][l]=0;
        //printf("new %d %d\n",i,l);
       }
    }
}

for( i=0;i<m;i++)
{
    for( j=0;j<n;j++)
    {
       printf("%d ",newmatrix[i][j]);
    }
    printf("\n");
}
}
