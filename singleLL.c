#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list
{
	int data;
	struct linked_list *next;
}node;

void print(node *q)
{
	node *ptr;
	ptr=q;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("\n%d\t",ptr->data);
		ptr=ptr->next;
	}
}

void insbeg(node **q,int no)
{
	node *temp , *ptr;
	temp=*q;
	ptr=(*node)malloc(sizeof(node));
	ptr->data=no;
	if(temp=NULL)
		ptr->next=temp;
	else
		ptr->next=temp;
	*q=ptr;
	printf("\n ELEMENT OF LINKLIST AFTER INSERTION \n");
	printf(*q);
}

void insend(node **q,int no)
{
	node *ptr,*temp;
	ptr=(*node)malloc(sizeof(node));
	ptr->data=no;
	ptr->next=NULL;
	temp=*q;
	if(temp==NULL)
		*q=ptr;
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=ptr;
	}
	printf("\n ELEMENT OF LINKLIST AFTER INSERTION \n");
	printf(*q);
}

void insafter(node *q, int no)
{
	int loc,k;
	node *temp,*ptr,*old;
	temp=q;
	ptr=(*node)malloc(sizeof(node*));
	ptr->data=no;
	printf("\n enter location where the no.is to be inserted: \n");
	scanf("%d",&loc);
	if(loc==1)
	{
		printf("\n PLease Enter no at Begining  \n");
	}
	for(k=1;k<loc;k++)
	{
		if(temp==NULL)
			printf("\n ELEMENT ARE LESS THAN PROVIDED LOCATION \n");
		else
		{
			old=temp;
			temp=temp->next;
		}
	}
	ptr->next=temp;
	old->next=ptr;
	printf("\n ELEMENT OF LINKLIST AFTER INSERTION \n");
	printf(q);
}

void del(node **q,int no)
{
	int f=0;
	node *old,*temp;
	temp=*q;
	
	while(temp!=NULL)
	{
	     if(temp->data==no)
	     {
			 f=1;
			 if(temp==*q)
			     *q=temp->next;
			  else
			     old->next=temp->next;
			  free(temp);
			  break;
		  }
		  else
		  {
			  old=temp;
			  temp=temp->next;
		  }
	}
	
	if(f==0)
		printf("\n THE GIVEN NUMBER IS NOT FOUND \n");
		
	printf("\n ELEMENT OF LINKLIST AFTER DELETION \n");
	printf(*q);
}

void traverse (node*q)
{
	printf("\n TRAVERSING LINKLIST  \n");
	printf(q);
	printf("\n END OF LINKLIST  \n");
}

int main()
{
	node *start,*ptr,*temp;
	int i,j,n,c;
	printf("\n Enter Number Of Nodes:\t");
	scanf("%d",&n);
	printf("\n Enter Node Number 1:\t");
	start=(*node)malloc=(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	for(i=1;i<n;i++)
	{
		ptr=(*node)malloc(sizeof(node));
		printf("\n Enter Node Number  %d:\t",i++);
	
	scanf("%d",&ptr->data);
	temp->next=ptr;
	temp=ptr;
	}
	temp->next=NULL;
	do
	{
		printf("\nENTER YOUR CHOICE:  \n");
		printf("\n 1-INSERTION  \n");
		printf("\n 2-DELETION \n");
		printf("\n 3-TRAVERSE \n");
		printf("\n 4-EXIT \n");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
			printf("\nENTER THE NUMBER TO BE INSERTED:  \n");
			scanf("%d",&n);
			printf("\n ENTER 1 TO INSERT AT THE BEGINING \n");
			printf("\n ENTER 2 TO INSERT AT THE END \n");
			printf("\n ENTER 3 TO INSERT AT A SPECIFIED LOCATION \n");
			scanf("%d",&c);
			switch(c)
			{
				case 1: 
					insbeg(&start,n);
					break;
				case 2:
					insend(&start,n);
					break;
				case 3:
					insafter(start,n);
					break;
				default:
					printf("\n INVALID CHOICE. \n");
			}
			break;
			case 2:
				printf("\n ENTER THE NUMBER TO BE DELETED \n");
				scanf("%d",&n);
				del(&start,n);
				break;
			case 3:
				traverse(start); // start is same as HEAD
				break;
			case 4:
				exit(0);
			default:
				printf("\n INVALID INPUT \n");
		}
	}while(1);

	return 0;
}
