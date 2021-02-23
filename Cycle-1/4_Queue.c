#include <stdio.h>
#define MAXSIZE 100

int queue[MAXSIZE];
int front=-1,rear=-1,item,n;

void Enqueue(int x);
void Dequeue();
void Display();


int main()
{
    int ch=0;
    printf("Enter the size of Queue:");
    scanf("%d", &n);
    do {
        printf("\n----Menu----\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter a choice :");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                printf("\nEnter item to Enqueue :");
                scanf("%d",&item);
                Enqueue(item);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                break;
            default:
                printf("\n Enter correct choice !");
        }

    }while (ch!=4);
}

void Enqueue(int x)
{
    if (rear>=n-1)
    {
        printf("\n Error Queue Is Full");
    }
    else if(front==-1 && rear==-1)//queue is empty
    {
        front=rear=0;//codition when queue has one element
    }
    else//queue has some element
    {
        rear++;
    }
    queue[rear]=x;

}

void Dequeue()
{
    int item;
    if(front==-1 && rear==-1)//queue empty
    {
        printf("\n Error Queue Is Empty");
    }
    else if(front==rear)//queue has only one element 
    {
        item = queue[front];
        front=rear=-1;//setting queue to empty
        printf("\nDeleted Element : %d",item);

    }
    else//queue has more than one element
    {
        item= queue[front];
        front++;
        printf("\nDeleted Element : %d",item);

    }
}
void Display(){
    printf("\nQueue is : \n");
    for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);
}
