/*
 * 
 * 
 * 
 * */


#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isfull()
{
	if((rear==MAX_SIZE-1 && front==0) || (rear+=front))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(front==-1 && rear==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void display()
{
	int i=front;
	printf("\nThe Element of the Queue are :\n");
	while (i!=rear)
	{
	printf("\n%d",queue[i]);
	i=(i+1)%(MAX_SIZE);
	}
	
}

void insert(int d )
{
	if (!isfull())
	{
		if (isempty())
			front++;
		rear=(rear+1)%(MAX_SIZE);
		queue[rear]=d;
		printf("\n%d is successfully inserted\n",d);
	}
	else 
	{
		printf("\nElement is full cannot be inserted\n");
	}
}



void  delete ()
{
	int d;
	if(!isempty())
	{
		d=queue[front];
		if (front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%(MAX_SIZE);
		}
		printf("\nThe Element Deleted is %d ",d);
	}
	else
	{
		printf("\nThe Queue id Empty");	
	}
}


int main()
{
	int choice,e;
	do{
		printf("\nEnter your choice:\n 1.Display\n 2.Insert\n 3.Delete\n 4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 	
					if(!isempty())
						display();
					else
						printf("\n queue is empty:");
					break;
			case 2:
					printf("\nEnter the elment to be inserted: ");
					scanf("%d",&e);
					insert(e);//call insert function
					break;
			case 3:
					delete();
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


