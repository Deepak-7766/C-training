// 1   2  3  4 
// 5   6  7  8 
// 9  10  11  12
// 13 14  15  16

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=1;
    for ( i = 1; i <=4; i++)
    {
        for ( j = 1; j <=4; j++)
        {
            printf("%d ",k++);
            
        }
        printf("\n");
    }
    
}