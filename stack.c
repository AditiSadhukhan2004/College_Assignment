#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1;//global variable(Scope:Entire Program)
void push(int data)
{
	if(top==size-1)
	printf("Stack is full");
	else{
	//	top=top+1;
		stack[++top]=data;
		printf("Successfully inserted. ");
	}
}
void pop()
{
	if(top==-1)
	printf("stack is empty");
	else
	printf("Poped element is %d",stack[top--]);
	
}
void disp()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
}
void main()
{
	int ch,data;
	do{
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\nEnter the choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the data: ");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:
			disp();
			break;
		case 4:
			exit(0);
		default:
			printf("Enter the right choice");
	}
}while(1);
}
