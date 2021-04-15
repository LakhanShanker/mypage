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
void printhead(Node* head)
{
    printf("The List is:\n");
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}
int main()
{
    Node* head=NULL;
    int i,x,a;
    printf("Enter number of elements\n");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a);
        head=Insert(head,a);
        printhead(head);
    }
    return 0;
}
