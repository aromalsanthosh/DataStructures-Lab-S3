//Operations On Stack
#include <stdio.h>
int top = -1, Ar[20], i, item; 
void push(int n);
void view();
void pop();

void main()
{
  int n, ch;
  printf("Enter the size of Stack:");
  scanf("%d", &n);
  while (ch != 3)
  {
    printf("\n----Menu----\n\n1.Push\n2.Pop\n3.Exit ");
    printf("\nEnter the choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      push(n);
      break;
    case 2:
      pop(n);
      break;
    default:
      break;
    }
  }
}

void push(int n)
{
  if (top == n - 1)
  {
    printf("\nOverflow!!!\n");
  }
  else
  { 
    printf("\nEnter the item:");
    scanf("%d", &item);
    // Increment top and then insert
    top++; 
    Ar[top] = item;
    printf("\nAfter Pushing\nThe Stack becomes\n\n");
    view();
  }
}

void pop()
{
  if (top <= -1)
  {
    printf("\nUnderflow!!!\n");
  }
  else
  {
    item = Ar[top];
    printf("The element popped is %d", Ar[top]);
    top--; 
    printf("\nAfter popping\nThe stack becomes\n\n");
    view();
  }
}

void view()
{
  for (i = top; i >= 0; --i)
  {
    printf("%d\n", Ar[i]);
  }
}
