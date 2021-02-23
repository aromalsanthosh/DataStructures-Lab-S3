#include<stdio.h>
#define SIZE 25

void push(int item );
void pop();
void display();
int isEmpty();
int isFull();

int stack[SIZE], top=-1, i;
int n;

void main ()
{   
    int ch;
    printf("Enter Size of Stack : ");
    scanf("%d",&n);

    do
    {
        printf("\n----Menu----\n\n1.Push\n2.Pop\n3.Display\n4.Exit ");
        printf("\nEnter the choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        	printf("\nEnter element to insert :");
        	int data;
        	scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
    }
    } while (ch!=4);
    

}

int isEmpty(){
    if (top==-1)
    {
        return 1;
    }
    else
        return 0;
}

int isFull()
{
    if (top==n-1   )
    {
        return 1;
    }
    else
        return 0;
}

void push( int item)
{
    if (isFull())
    {
        printf("\nStack Overflow !!");
    }
    else
    {   
        
        top++;
        stack[top]=item;
    }
    
}

void pop()
{
    int data;
    if (isEmpty())
    {
        printf("\nStack Underflow !!");
    }
    else
    {
        data=stack[top];
        top--;
        printf("\nPopped Element : %d",data );
    }

    
    
}


void display()
{
    if (isEmpty())
    {
        printf("\nStack Empty !!");
    }
    
    else 
    {
        printf("\nElements of stack are :\n");
        for ( i = top ; i >=0; i--)           
        {
            
            printf("%d\n",stack[i]);
        }
    }
        
}
