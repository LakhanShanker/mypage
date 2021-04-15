#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
Node *next;
};
Node* InsertFirst(Node* head,int a){
    Node *temp=(Node*)malloc(sizeof(Node));
    Node *ptr=head;
    temp->data=a;
    temp->next=NULL;
    if(head!=NULL)
        temp->next=head;
       head=temp;
return head;
}
Node* InsertLast(Node* head,int a){
    Node *temp=(Node*)malloc(sizeof(Node));
    Node *ptr=head;
    temp->data=a;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
        ptr->next=temp;
    }
return head;
}
Node* deleteData(Node* head,int a){
    Node *ptr=head;
    Node *ptr1=head->next;
    if(ptr->data==a)
        head=ptr1;
    else{
    while(ptr1->data==a||ptr1->next!=NULL){
    if(ptr1->data==a){
        ptr->next=ptr1->next;
        return head;
    }
    else{
        ptr=ptr->next;
        ptr1=ptr1->next;
        }
     }
   }
}
void printHead(Node* head){
    Node* ptr=head;
printf("The list is:");
while(ptr!=NULL){
    printf("%d\t",ptr->data);
    ptr=ptr->next;
}
}
int main()
{
    Node *head=NULL;
    int n,a;
    printf("Enter number of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            printf("\nEnter %d element to be entered at last: ",i+1);
            scanf("%d",&a);
            head=InsertLast(head,a);
           // head=InsertFirst(head,a);

    }
    printHead(head);
   // int x;
   // printf("\nEnter data to be deleted: ");
   // scanf("%d",&x);
   // head=deleteData(head,x);
   // printHead(head);

    return 0;
}
