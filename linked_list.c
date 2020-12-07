#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
static struct linknode *list;
struct linknode{
	int data;
	void *next;
};
int insertDataToTail(int value)
{
	struct linknode *nodePtr;
	struct linknode *srchPtr;
	
	nodePtr=create_node(value);
	if(nodePtr==NULL)
	{
		printf("memory allocation error!\n");
		return -1;
	}
	
	if(list==NULL)
	{
		list=nodePtr;
	}
	else {
		srchPtr=list;
		while(srchPtr->next !=NULL){
			srchPtr=(struct linknode*)srchPtr->next;
		}
		srchPtr->next=nodePtr;
	}
	return 0;
}

void print_list()
{
	struct linknode *ptr=list;
	int i;
	
	while(ptr !=NULL)
	{
		printf("%i \n",ptr->data);
		ptr=(struct linknode*)ptr->next;
	}
}

void print_node(int n)
{
	struct linknode *ptr = list;
	int i=0;
	while(ptr!=NULL)
	{
		if (i==n)
		{
			printf("%i th Data : %i\n",i,ptr->data);
			return;
		}
		i++;
		ptr=ptr->next;
	}
	printf("no data\n");
}
