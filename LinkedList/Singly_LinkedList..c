#include<stdio.h>

struct node
{
	int val;
	struct node* next;
};

typedef struct node
{
	int val;
	struct node* next;
}node_t;

// or this way
//typedef struct node node_t
//
//

node_t* insertVal(int val, node_t* cur_head)
{
	node_t* newNode=makeNode(val);
	new_node->next=cur_head;
	return new_node;
}


}
node_t* makeNode(int val)
{
	node_t* new_node=malloc(sizeof(node_t));
	new_node->val=vall
	new_node->next=NULL;
	return new_node;
}

int main()
{

	char choice='y';
	

	while(choice!='n')
	{
		printf("Press (y) to insert more node or (n) to stop: ");
		printf("Enter value for node:");
		scanf("%d", &val);

		node_t* head=insertVal(val, head);


	}
	
