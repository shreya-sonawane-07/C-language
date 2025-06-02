#include <stdio.h>
long long int factorial(int);
void main()
{
    int rows;
    printf("Enter the Number of Rows in the Pascal Triangle::\t");
    scanf("%d",&rows);
    int arr[rows][rows];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
                arr[i][j]=(factorial(i)/(factorial(i-j)*factorial(j)));
                
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int k = rows -  i-1 ; k > 0; k--)
        {
               
                printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%-5d", arr[i][j]);
            
        }
        printf("\n");
    }
    return ;
}
long long int factorial(int num)
{
    long long int j=1;
    while(num>0)
    {
        j=j*num;
        num--;
    }
    return j;
}