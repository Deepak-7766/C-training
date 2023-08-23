#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct jewellery
{
    int id;
    char item[20];
    float weight;
};

struct jewellery jew;
void Insert();
void View();
void Search();
void arrange();
int choice, count;
FILE *fptr;
void main()
{

    do
    {
        printf("\n1:Insert");
        printf("\n2:View with price");
        printf("\n3:Search");
        printf("\n4:arrange");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            View();
            break;

        case 3:
            Search();
            break;

        case 4:
            arrange();
            break;

        default:
            printf("\nInvalid Input\n");
            break;
        }
    } while (choice < 5);
}

void Insert()
{
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "a");
    printf("\nEnter how many items you want to add: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("\nEnter item name, id and weight: ");
        _flushall();
        gets(jew.item);
        scanf("%d %f", &jew.id, &jew.weight);
        fprintf(fptr, "%s\t%d\t%f\n", jew.item, jew.id, jew.weight);
        printf("\n%d:-Data save...", i + 1);
    }
    fclose(fptr);
}

void View()
{
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r");
    if (fscanf(fptr, "%s%d%f", &jew.item, &jew.id, &jew.weight) == EOF)
    {
        printf("\nThere is no data\n");
    }
    else
    {
        while (fscanf(fptr, "%s%d%f", &jew.item, &jew.id, &jew.weight) != EOF)
        {
            printf("%s\t%d\t%f\n", jew.item, jew.id, jew.weight);
        }
    }

    fclose(fptr);
}

void Search()
{
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r");
    union searchitem
    {
        int sid;
        char sitem[20];
    };
    int flag = 0;
    union searchitem uni;

    int choi;
    printf("\n1:search by id");
    printf("\n2:search by name");

    printf("\nEnter choice: \n");
    scanf("%d", &choi);
    switch (choi)
    {
    case 1:
        printf("\nEnter id\n");
        scanf("%d", &uni.sid);
        break;

    case 2:

        printf("\nEnter item name\n");
        _flushall();
        gets(uni.sitem);
        break;
    default:
        printf("\nInvalid Input");
        break;
    }

    // scanf("%d%s",&data.sid,&data.sitem);
    while (fscanf(fptr, "%s%d%f", &jew.item, &jew.id, &jew.weight) != EOF)
    {
        if (uni.sid == jew.id)
        {
            flag = 1;
            break;
        }
        else if (strcmp(uni.sitem, jew.item) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\n%s\t%d\t%f", jew.item, jew.id, jew.weight);
        printf("\nValue found\n");
    }
    else
    {
        printf("\nValue not found");
    }
    fclose(fptr);
}

void arrange()
{
    int count = 0, i = 0;
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r");
    while (fscanf(fptr, "%s%d%f", &jew.item, &jew.id, &jew.weight) != EOF)
    {
        count++;
    }
    fclose(fptr);

    struct jewellery *d1;
    d1 = (struct jewellery *)malloc(sizeof(struct jewellery) * count);
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r");
    while (fscanf(fptr, "%s%d%f", &d1[i].item, &d1[i].id, &d1[i].weight) != EOF)
    {
        i++;
    }
    fclose(fptr);

    struct jewellery temp;
    for (i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            if (d1[i].weight < d1[j].weight)
            {
                temp = d1[i];
                d1[i] = d1[j];
                d1[j] = temp;
            }
        }
    }
    
    printf("\nDisplay values in file\n");
    for (i = 0; i < count; i++)
    {
        printf("\n%s\t%d\t%f", d1[i].item, d1[i].id, d1[i].weight);
    }
}