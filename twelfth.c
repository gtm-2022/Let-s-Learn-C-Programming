#include<stdio.h>
int main () {
    int r,c,mat1[100][100],mat2[100][100],sum[100][100],i,j;
    printf("\nEnter the number of rows and columns :");
    scanf("%d %d",&r,&c);
    printf("\nInput matrix 1 element :");
    for (i=0; i<r; ++i)
    for (j=0; j<c; ++j)
    {
        scanf("%d", &mat1[i][j]);
    }
printf("\nMatrix1\n");
for (i=0;i<r; i++)
{
    for (j=0; j<c; j++)
    {
        printf("%d", mat1[i][j]);
    }
printf("\n");
}
printf("\nInput matrix 2 elemment :");
for (i=0; i<r; ++i)
for (j=0; j<c; ++j)
{
    scanf("%d", &mat2[i][j]);
}
printf("\nMatrix 2\n");
for (i=0;i<r; i++)
{
    for (j=0; j<c; j++)
    {
        printf("%d",mat1[i][j]);
    }
printf("\n");
}
printf("\nAdded matrix\n");
for (i=0; i<r; ++i)
for (j=0; j<c; ++j)
{
    sum[i][j]= mat1[i][j]+mat2[i][j];
}
for (i=0; i<r; ++i)
for ( j=0; j<c; ++j)
{
    printf("%d", sum[i][j]);
    if (j==c-1)
    {
        printf("\n");
    }
}return 0;
}



    
