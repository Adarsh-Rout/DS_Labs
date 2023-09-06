
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

void create(Node **head)
{
    int i,n;
    Node *temp,*newnode;
    temp=*head;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=malloc(sizeof(Node));
        newnode->next=NULL;
        printf("Enter value for node %d: ",i+1);
        scanf("%d", &newnode->data);
        temp->next = newnode;
        temp = temp->next;
    }
}
void display(Node *head){
    Node *temp=head->next;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            printf("%d",temp->data);
        }
        else
        {
            printf("%d->",temp->data);
        }temp=temp->next;
    }
}

int main()
{   
    Node *head = malloc(sizeof(Node));
    head->next = NULL;
    create(&head);
    display(head);
    return 0;
}