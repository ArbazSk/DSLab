#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

int isfull(){
if(MAX_SIZE==top){
return 1;
}
else{
return-1;
}
}

int isempty(){
if(MAX_SIZE==top){
return 1;
}
else{
return -1;
}
}

int peek(){
return stack[top];
}

void push(int e)
 int e;
	if(!isfull())
	{
	top++;
	stack[top]=e;
	printf("%d is successfully insrted",e);
	}
	else
	{
		printf("stack overflow");
	}
}

void pop()
{
	int d;
	if(!isempty())
	{
		d=top;
		top--;
		printf("%d is successfully deleted",d);
	}
	else
	{
	printf("stack underflow");
	}
}

int main()	
{
	int choice,e;
	do{
		printf(" enter your choice:\n 1.peek\n 2.push\n 3.pop\n 4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 	e=peek();
						printf("\nElement at the top of stack is : %d",e);
					break;
			case 2:
					printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				push(e);//call push function
					push();
					break;
			case 3:
					pop();
					break;
			case 4:
					exit(0);
					break;
			default:
					printf("invalid choice");
					break;
		}
	}while(1);
	return 0;
}
					
