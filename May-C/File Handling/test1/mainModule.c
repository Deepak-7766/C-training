#include <stdio.h>
#include "insertpro.h"
#include <stdlib.h>
struct product *p1;
int size, i;
int choice;
void main()
{

    do
    {
        printf("\n1:Insert");
        printf("\n2:View");
        printf("\n3:Search");
        printf("\n\n Enter choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter how many items you want to add: ");
            scanf("%d", &size);
            p1=(struct product*)malloc(sizeof(struct product)*size);
            for (int i = 0; i < size; i++)
            {
                printf("\nEnter item name, id and weight: ");
                _flushall();
                gets(p1[i].name);
                scanf("%d%d", &p1[i].id, &p1[i].price);
                addproduct (p1[i]);
            }

            break;
        case 2:

            break;
        default:
            break;
        }
    } while (choice < 4);
}
