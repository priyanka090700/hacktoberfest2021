/*Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: Not identical
*/

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>  


struct Node
{
	int data;
	struct Node* next;
};



//Function to check if 2 linked lists are identical
bool areIdentical(struct Node *head1, struct Node *head2)
{
	struct Node *start1 = head1;
	struct Node *start2 = head2;
	while(start1 && start2 != NULL)
	{   
	    if(start1->data != start2->data)
	      return false;
	    if(start1->data == start2->data)
	    {
	        start1 = start1->next;
	        start2 = start2->next;
	    }
	}
	return true;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int first;
		scanf("%d", &first);
		struct Node *head1;
		head1 = (struct Node *) malloc(sizeof(struct Node));
		head1->data = first;
		head1->next = NULL;
		struct Node *tail = head1;

		for (int i = 1; i < n; ++i)
		{
			int data;
			scanf("%d", &data);
			struct Node *temp;
			temp = (struct Node *) malloc(sizeof(struct Node));
			temp->data = data;
			temp->next = NULL;
			tail->next = temp;
			tail = tail->next;
		}

		scanf("%d", &n);
		scanf("%d", &first);
		struct Node *head2;
		head2 = (struct Node *) malloc(sizeof(struct Node));
		head2->data = first;
		head2->next = NULL;
		tail = head2;

		for (int i = 1; i < n; ++i)
		{
			int data;
			scanf("%d", &data);
			struct Node *temp;
			temp = (struct Node *) malloc(sizeof(struct Node));
			temp->data = data;
			temp->next = NULL;
			tail->next = temp;
			tail = tail->next;
		}
		areIdentical(head1, head2) ? printf("Identical\n") : printf("Not identical\n");
	}
	return 0;
}
