#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
Node* next;
};
Node* Insert(Node* head,int a)
{
    struct Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=a;
    temp->next=NULL;
    if(head!=NULL)
        temp->next=head;
    head=temp;
    return head;
}
Node* InsertAtEnd(Node* head,int a)
{
    Node* ptr=head;
    struct Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=a;
    temp->next=NULL;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return head;
}
void printNode(Node* head)
{
struct Node* temp=head;
    printf("List: ");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
   Node* head=NULL;
   int n,i,x;
   printf("Enter no of elements");
   scanf("%d",&n);
   for(i=0;i<1;i++)
   {
       scanf("%d",&x);
       head=Insert(head,x);
       printNode(head);
   }
   for(i=1;i<n;i++)
   {
       scanf("%d",&x);
       head=InsertAtEnd(head,x);
       printNode(head);
   }

}
