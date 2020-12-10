#include <stdio.h>
#include <stdlib.h>

void create();
void insert_at_begin();
void insert_at_end();
void delete_from_begin();
void delete_from_end();
void display();

struct linked_list
{
    int data;
    struct linked_list *next;
};
struct linked_list *head = NULL;

int main()
{
    int choice, limit;
    if (head == NULL)
    {
        while (1)
        {
            printf("\nMenu\n");
            printf("1.Create\n");
            printf("2.Display\n");
            printf("3.Exit\n");
            printf("\nEnter Your Choice :");

            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                // printf("Enter Number Elements to you want to input:");
                // scanf("%d", &limit);
                create();
                return main();
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvaid Choice\n\n");
                break;
            }
        }
    }
    else
    {
        while (1)
        {
            printf("\nMenu\n");
            printf("1.Display\n");
            printf("2.Insert at Begin\n");
            printf("3.Insert at end\n");
            printf("4.Delete from Begin\n");
            printf("5.Delete from End\n");
            printf("6.Exit\n");
            printf("\nEnter Your Choice :");

            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                display();
                break;
            case 2:
                // printf("Enter Number Elements to you want to input:");
                // scanf("%d", &limit);
                insert_at_begin();
                break;
            case 3:
                // printf("Enter Number Elements to you want to input:");
                // scanf("%d", &limit);
                insert_at_end();
                break;
            case 4:
                delete_from_begin();
                return main();
            case 5:
                delete_from_end();
                return main();
            case 6:
                exit(0);
            default:
                printf("\nInvaid Choice\n\n");
                break;
            }
        }
    }
}

void create()
{
    int i;
    struct linked_list *temp, *ptr;
    temp = (struct linked_list *)malloc(sizeof(struct linked_list));
    if (head == NULL)
    {
        printf("\nEnter data into List:");
        // for (i = 0; i < limit; i++)
        // {
        scanf("%d", &temp->data);
        // temp->next = NULL;
        // if (head == NULL)
        // {
        head = temp;
        ptr = head;
        // }
        // else
        // {
        //     ptr->next = temp;
        //     ptr = ptr->next;
        // }
        // temp++;
        // }
    }
    else
    {
    }
}

void display()
{
    struct linked_list *start;
    if (head == NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    else
    {
        start = head;
        printf("\nList: ");
        while (start != NULL)
        {
            printf("%d  ", start->data);
            start = start->next;
        }
        printf("\n");
    }
}

void insert_at_begin()
{
    int i;
    struct linked_list *temp;
    temp = (struct linked_list *)malloc(sizeof(struct linked_list));
    //ptr = head;
    printf("\nEnter data into List:");
    // while(i<3){
    scanf("%d", &temp->data);
    printf("\n");
    temp->next = head;
    head = temp;
    //temp++;
    //     i++;
    // }
}

void insert_at_end()
{
    struct linked_list *temp, *ptr;
    temp = (struct linked_list *)malloc(sizeof(struct linked_list));
    printf("\nEnter data into List:");
    scanf("%d", &temp->data);
    printf("\n");
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}
void delete_from_begin()
{
    printf("\nDeleted Element is %d\n\n", head->data);
    head = head->next;
}

void delete_from_end()
{
    struct linked_list *temp, *ptr;
    temp = head;
    if (head->next == NULL)
    {
        head = NULL;
        printf("\nDeleted Element is %d\n", temp->data);
    }
    else
    {
        while (temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        printf("\nDeleted Element is %d\n", temp->data);
        ptr->next = NULL;
    }
}