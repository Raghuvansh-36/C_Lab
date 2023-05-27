//STACK IMPLEMENTATION USING ARRAY
#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
int isFull();
void Push(int);
int Traverse();
int Pop();
int isEmpty();
int isFull()
{
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Push(int ele)
{
	if(isFull())
	{
		printf("Stack is OVERFLOW");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d is successfully push",ele);
	}
}
int Traverse()
{
	int i;
	for(i=top;i>=0;--i)
	{
		printf("%d\t",stack[i]);
	}
}
int Pop()
{
	int ele;
	if(isEmpty())
	{
		printf("Stack is UNDERFLOW");
	}
	else
	{
		ele=stack[top];
		top--;
        printf("%d is successfully pop",ele);
		return top;
	}
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
    int opt,ele,con=1;
    while(con)
    {
	printf("\n*MENU*\n\n");
	printf("1.PUSH\n2.POP\n3.TRAVERSE\n");
	printf("\nWhat you want to do ?\n");
	scanf("%d",&opt);
	switch (opt)
	{
    case 1:
        {
            printf("Enter the element you want to push:");
            scanf("%d",&ele);
            Push(ele);
            break;
        }
    case 2:
        {
          Pop();
          break;
        }
	case 3:
        {
           Traverse();
           break;
        }
    default:
        {
            printf("INVALID CHOICE");
        }
	}
    printf("\nPress 0 for exit ,1 for continue");
    scanf("%d",&con);
}
}
