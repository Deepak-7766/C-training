#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 5; i >=1; i--)
    {
        for ( j = 5; j >=i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
}
// 5
// 44
// 333
// 2222
// 11111