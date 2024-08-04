#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int x = 1;
    while (x)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
         printf("Wnat to add elements(0,1) :- ");
        scanf("%d", &x);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    return 0;
}