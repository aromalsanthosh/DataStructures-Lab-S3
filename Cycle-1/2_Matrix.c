#include<stdio.h>
#define MAX 50

void displayMatrix(int arr[MAX][MAX],int m,int n);
void readMatrix(int arr[MAX][MAX],int m,int n);
void tupleOf(int arr[MAX][MAX],int m,int n);
void transposeOf(int arr[MAX][MAX],int m,int n);
void sumOf(int arr1[MAX][MAX],int arr2[MAX][MAX],int m,int n);

int main()
{
    int arr1[MAX][MAX],arr2[MAX][MAX];
    int r1,r2,c1,c2;

    printf("\nEnter number of rows of Matrix 1 :");
    scanf("%d",&r1);
    printf("Enter number of columns of Matrix 1 :");
    scanf("%d",&c1);
    printf("\nEnter Elements of Matrix 1 :");
    readMatrix(arr1,r1,c1);

    printf("\nEnter number of rows of Matrix 2 :");
    scanf("%d",&r2);
    printf("Enter number of columns of Matrix 2 :");
    scanf("%d",&c2);
    printf("\nEnter Elements of Matrix 2 :");
    readMatrix(arr2,r2,c2);	

    printf("\nMatrix 1 Normal Form:\n");
    displayMatrix(arr1,r1,c1);
    printf("\nMatrix 1 Tuple Form:\n");
    tupleOf(arr1,c1,r1);
    printf("\nTranspose Of Matrix 1 in tuple form:\n");
    transposeOf(arr1,c1,r1);



    printf("\nMatrix 2 Normal Form:\n");
    displayMatrix(arr2,r2,c2);
    printf("\nMatrix 2 Tuple Form:\n");
    tupleOf(arr2,c2,r2);
    printf("\nTranspose Of Matrix 2 in tuple form:\n");
    transposeOf(arr2,c2,r2);

    if (r1==r2 && c1==c2)
    {
    	printf("\nTuple form of Matrix1 + Matrix2 : \n");
    	sumOf(arr1,arr2,r1,c1);
    }
    else
    {
    	printf("Error ! Cannot add given matrices\n");
    }
}

void readMatrix(int arr[MAX][MAX],int m,int n)
{
    
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void displayMatrix(int arr[MAX][MAX],int m,int n)
{
    

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("  %d  ", arr[i][j]);
        }
        printf("\n");
    }
}

void tupleOf(int arr[MAX][MAX],int m,int n)
{
for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("  (%d,%d,%d)  ",i,j ,arr[i][j]);
        }
        printf("\n");
    }
}

void transposeOf(int arr[MAX][MAX],int m,int n)
{	
	int transpose[MAX][MAX];
	for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            transpose[j][i]=arr[i][j];
        }
    }
    tupleOf(transpose,m,n);
}

void sumOf(int arr1[MAX][MAX],int arr2[MAX][MAX],int m,int n)
{
	int sum[MAX][MAX];

	for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
    		sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    tupleOf(sum,m,n);
}
