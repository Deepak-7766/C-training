#include <stdio.h>
void main()
{

    int a[10], i, j, choice, index, value, flag = 0, len,min,max;  

    printf("\n Enter the 10 values of array: \n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\nEnter 1 for insert element at specific index: ");
        printf("\nEnter 2 for insert element at End of array: ");
        printf("\nEnter 3 for insert element at start of array: ");
        printf("\nEnter 4 for delete element at specific index: ");
        printf("\nEnter 5 for delete element at End of array: ");
        printf("\nEnter 6 for delete element at start of array: ");
        printf("\nEnter 7 search specific element by value: ");
        printf("\nEnter 8 show element at specific index: ");
        printf("\nEnter 9 find max value from array: ");
        printf("\nEnter 10 find min value from array: ");

        printf("\n\nEnter choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the index: \n");
            scanf("%d", &index);
            printf("\nEnter value: \n");
            scanf("%d", &value);

            for (i = 9; i >= index; i--)
            {
                a[i + 1] = a[i];
            }
            a[index] = value;

            printf("\nDisplay after operation:\n");
            for (i = 0; i < 9; i++)
            {
                printf("\t%d", a[i]);
            }

            break;

        case 2:
            printf("\nEnter the value\n");
            scanf("%d", &value);
            a[8] = value;

            for (i = 0; i < 9; i++)
            {
                printf("%d\t", a[i]);
            }

            break;

        case 3:

            printf("\nEnter the value\n");
            scanf("%d", &value);
            for (i = 8; i >= 0; i--)
            {
                a[i + 1] = a[i];
            }
            a[0] = value;

            for (i = 0; i < 9; i++)
            {
                printf("%d\t", a[i]);
            }

            break;

        case 4:

            printf("\nEnter the index: \n");
            scanf("%d",&index);

            for (i = 0; i < 10; i++)
            {
                if (i == index)
                {
                    flag = 1;

                     printf("\nAfter deleting value\n");
                    break;
                }
            }
            if (flag = 1)
            {
                for (i = index; i < 9; i++)
                {
                    a[i] = a[i + 1];
                }
            }
            else
            {
                printf("index not found");
            }

            for (i = 0; i < 9; i++)
            {
                printf("%d\t", a[i]);
            }
            break;

        case 5:
            printf("\nI did not write logic for that because how we declare last array element\n");
            break;

        case 6:

            for (i = 0; i < 9; i++)
            {
                a[i] = a[i + 1];
            }
            printf("\n After deleting element at the start of the array:\n");
            for (i = 0; i < 9; i++)
            {
                printf("%d\t", a[i]);
            }

            break;

        case 7:
            printf("\nEnter the value: ");
            scanf("%d", &value);

            for (i = 0; i < 9; i++)
            {
                if (a[i] == value)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag = 1)
            {
                printf("\nValue found");
            }
            else
            {
                printf("\nValue not found\n");
            }
            break;

        case 8:
            printf("\nI don't know what to do in this case");
            break;

        case 9:
            
            max = a[0];
            for (i = 1; i < 9; i++)
            {
                if (max < a[i])
                {
                    max = a[i];
                }
            }
            printf("\nMaximum value is : %d\n", max);

            break;

        case 10:
            
            min = a[0];
            for (i = 1; i < 9; i++)
            {
                if (min > a[i])
                {
                    min = a[i];
                }
            }
            printf("\nMinimum value is: %d\n", min);
            break;

        default:
            printf("\nInvalid choice\n");
            break;
        }

    } while (choice <= 10 && choice >= 1);
}