#include<stdio.h>
void main()
{
    int i,j,a[3][3];
    printf("\nEnter the array value: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    // Showing the 2 dimensional array\


    printf("\nDisplay the 2 Dimensional array: \n");
    for ( i = 0; i <5; i++)
    {
        for ( j = 0; j <5; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    
}