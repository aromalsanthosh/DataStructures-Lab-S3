#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node* link;
}node;

node* front=NULL;
node* rear=NULL;
node* temp;

void enqueue(int data){
  node* newnode=(node*)malloc(sizeof(node));
  newnode->data=data;
  newnode->link=NULL;
  if(front==NULL || rear==NULL){
    front=newnode;
    rear=newnode;
    return;
  }
  else{
    rear->link=newnode;
    rear=newnode;
  }
}

void dequeue(){

  if(front==NULL || rear==NULL){
    printf("EMPTY QUEUE!");
    return;
  }
  else{
    int val=front->data;
    printf("\nDeleted Value is %d",val);
    temp=front;
    front=front->link;
    free(temp);
  }
}

void display(){
  if(front==NULL || rear==NULL){
    printf("EMPTY QUEUE!");
    return;
  }
  else{
    temp=front;
    printf("\nElements in Queue :\n");
    while(temp!=NULL){
      printf("%d\t",temp->data);
      temp=temp->link;
    }
  }
}

int main()
{
    int ch=0,item;
    do {
        printf("\n----Menu----\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter a choice :");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                printf("\nEnter item to Enqueue :");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n Enter correct choice !");
        }

    }while (ch!=4);
}
