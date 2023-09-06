#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start=NULL;
struct node * create_ll(struct node *);
struct node * display(struct node *);
void traverse_ll(struct node *);
void empty_list(struct node *);
struct node * insert_beg(struct node *);
struct node * insert_end(struct node *);
struct node * delete_beg(struct node *);
struct node * delete_end(struct node *);
int count(struct node *);
void search(struct node *);
struct node * insert_any(struct node *, int, int);
struct node * delete_any(struct node *, int, int);
void delete_List(struct node *);

void main()
{
 int option,x,element,pos;

 do
 {
        printf("\n****MAIN MENU****");
        printf("\n 1. create link list");
        printf("\n 2. Display link list");
        printf("\n 3. Traverse link list");
        printf("\n 4. check for empty link list");
        printf("\n 5. insert node at start");
        printf("\n 6. insert node at end");
        printf("\n 7. delete node at start");
        printf("\n 8. delete node at end");
        printf("\n 9. Count the number of nodes");
        printf("\n 10. search for given element");
        printf("\n 11. insert at any position");
        printf("\n 12. delete at any position");
        printf("\n 13. Delete the entire link list");

        printf("\n Enter your option: ");
        scanf("%d",&option);

        switch(option)
        {

           case 1:
  
               start=create_ll(start);
               printf("\n link list created");
               break;


           case 2:
        
               start=display(start);
           
               break;
           case 3:

                traverse_ll(start);
           case 4:

                empty_list(start);

           case 5:

               start=insert_beg(start);
               break;
           case 6:

               start=insert_end(start);
               break;
           case 7:

               start=delete_beg(start);
               break;
           case 8:
               start=delete_end(start);
               break;
           case 9:
               x=count(start);
               printf("\nNumber of nodes are %d",x);
               break;
           case 10:
                search(start);
                break;
           case 11:
                
                printf("\nEnter data element: ");
                scanf("%d",&element);
                printf("\nEnter position of element: ");
                scanf("%d",&pos);
                start=insert_any(start,element,pos);
                break;
           case 12:
                
                printf("\nEnter data element: ");
                scanf("%d",&element);
                printf("\nEnter position of element: ");
                scanf("%d",&pos);
                start=delete_any(start,element,pos);
                break;
           case 13:
                delete_List(start);
                break;
        }
    
    }while(option !=13);

}

// Create Link list

struct node * create_ll(struct node *start)
{

  struct node *new_node,*ptr;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data :");
  scanf("%d",&num);

  while(num != -1)
  {

   new_node=(struct node *)malloc(sizeof(struct node));
   new_node->data=num;

   if(start==NULL)
   {
     new_node->next=NULL;
     start=new_node;
   }
   else
   {

     ptr=start;

     while(ptr->next != NULL)
        ptr=ptr->next;

     ptr->next=new_node;
     new_node->next=NULL;
    }
    printf("\n Enter the data :");
    scanf("%d",&num);
   }
 return start;
}

// Display the Link list

struct node * display(struct node *start)
{
  struct node *ptr;
  ptr=start;

  while(ptr != NULL)
  {

    printf("\t %d",ptr->data);
    ptr=ptr->next;
  }
  return start;
}

// Traverse the Link List

void traverse_ll(struct node *start)
{
        struct node* current = start;


    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Check for empty link list

void empty_list(struct node *start)
{
    if(start==NULL)
    {
        printf("\nIts an empty Link List\n");
    }
    else{
        printf("\nLink List is not empty\n");
    }
}

// Insert node at the Beginning

struct node * insert_beg(struct node *start)
{

  struct node *new_node;
  int num;

  printf("\n Enter the data :");
    scanf("%d",&num);

  new_node=(struct node *)malloc(sizeof(struct node));
   
     new_node->data=num;
     new_node->next=start;
     start=new_node;

 return start;
}

// Insert node at the End

struct node * insert_end(struct node *start)
{

  struct node *new_node,*ptr;
  int num;

  printf("\n Enter the data :");
    scanf("%d",&num);

  new_node=(struct node *)malloc(sizeof(struct node));
   
     new_node->data=num;
     new_node->next=NULL;
     ptr=start;

     while(ptr->next != NULL)
        ptr=ptr->next;

     ptr->next=new_node;

 return start;
}

// Delete node at beginning 

struct node * delete_beg(struct node *start)
{

  struct node *ptr;

     ptr=start;
     start=start->next;
     free(ptr);

 return start;
}

// Delete node at end

struct node * delete_end(struct node *start)
{

  struct node *ptr,*preptr;

     ptr=start;

     while(ptr->next != NULL)
     {
      
       preptr=ptr;
       ptr=ptr->next;

     }
     preptr->next=NULL;
     free(ptr);

 return start;
}

// Count the nodes

int count(struct node * start)
{
  struct node *ptr;
  ptr=start;
  int flag=0;

  while(ptr != NULL)
  {

    flag++;
    ptr=ptr->next;
  }
  return flag;
}

// Search element

void search(struct node * start)
{
  struct node *ptr;
  int num,flag=0;
  ptr=start;
  printf("\n Enter element to be searched: ");
  scanf("%d",&num);
  while(ptr != NULL)
  {
    
    if(ptr->data==num)
    {
      printf("\nElement found in link list\n");
      flag++;
      break;
    }
    else
    {
      ptr=ptr->next;
    }
  }if(flag==0){printf("\nNo such element found");}
  
}

// insert at any position

struct node * insert_any(struct node * start, int data, int pos)
{
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

  if (pos == 1) {
        newNode->next = start;
        return newNode;
    }
  struct node* ptr = start;
    int currentPos = 1;

  while (ptr != NULL && currentPos < pos - 1) {
        ptr = ptr->next;
        currentPos++;
    }

    if (ptr == NULL) {
       
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
    }
 
    newNode->next = ptr->next;
    ptr->next = newNode;

    return start;
}

// delete at any position

struct node * delete_any(struct node * start, int data, int pos)
{
    if (start == NULL) {
        return NULL;
    }

    if (pos == 1) {
        struct node* temp = start;
        start = start->next;
        free(temp);
        return start;
    }

    struct node* current = start;
    int currentPos = 1;

    while (current != NULL && currentPos < pos - 1) {
        current = current->next;
        currentPos++;
    }

    if (current == NULL || current->next == NULL) {
        return start;
    }

    struct node* temp = current->next;
    current->next = temp->next;
    free(temp);

    return start;
}

// Delete the entire link list

void delete_List(struct node* start) {
    struct node* current = start;
    struct node* next;

    while (current != NULL) {
        next = current->next;  
        free(current);        
        current = next;       
    }
    printf("\nLinked List deleted completely & Memory Freed\nHurrayyyy!!!\nProgram Exited Successfully\n");
}
