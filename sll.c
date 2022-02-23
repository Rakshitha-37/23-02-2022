#include<stdio.h>
#include<stdlib.h>

typedef struct single_ll
{
	int data;
	struct single_ll *link;
}sll;

int main()
{
	sll *head = NULL;
	sll *new[5];
	sll *prev;

	for(int i=0;i<5;i++)
	{
		if(head == NULL)
		{
			new[i] = (sll *)malloc(sizeof(sll));
			printf("Enter the element: ");
			scanf("%d", &new[0]->data);
			head = new[i];
			prev = new[i];
			new[i]->link = NULL;
		}
		else
		{
			new[i]=(sll *)malloc(sizeof(sll));
			printf("Enter the element: ");
			scanf("%d", &new[i]->data);
			prev->link = new[i];
			prev = new[i];
			new[i]->link = NULL;
		}
	}
	sll *temp = head;
	int i = 0;
	while(temp != NULL)
	{
		printf("%d ",new[i]->data);
		temp = temp->link;
		i++;
	}
	printf("\n");
}
