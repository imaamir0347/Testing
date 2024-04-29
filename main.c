#include <stdio.h>
#include <stdlib.h>
void getMatrixElements(int matrix[][10],int row,int col)
{
    printf("Enter Elements:\n");
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Enter a%d%d:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void displayMatrix(int result[][10],int row,int col)
{
    printf("\nThe Output Matrix:\n");

    for(int i=0; i<row; i++)

    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}
void multiplyMatrices(int first[][10],int second[][10],int result[][10],int row1,int col1,int row2,int col2)
{
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            result[i][j]=0;
        }
    }
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {

            for(int k=0; k<col1; k++)
            {
                result[i][j]+=first[i][k]*second[k][j];
            }
        }
    }
}
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,c1,r2,c2;
    printf("Enter row and column for first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for second matrix:");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Enter row and column for first matrix:");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and column for second matrix:");
        scanf("%d %d",&r2,&c2);
    }
    getMatrixElements(first,r1,c1);
    getMatrixElements(second,r2,c2);
    multiplyMatrices(first,second,result,r1,c1,r2,c2);
    displayMatrix(result,r1,c2);
    return 0;
}
