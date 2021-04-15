#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
node* next;
};
node* Insert(node* head,int a)
{
    node* ptr=head;
    node* temp=(node*)malloc(sizeof(node));
    temp->data=a;
    temp->next=NULL;
    if(head!=NULL)

    {
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=temp;
        return head;
    }
    else
        head=temp;
    return head;
}
void printshow(node* head)
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
    node* head=NULL;
    int i,x,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",x);
        Insert(head,x);
        printshow(head);
    }
}
