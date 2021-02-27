#include <stdio.h> 

struct node_type {
	int data;
	struct node_type *next;
};
typedef struct node_type list;

void showList();	
list *reverse();	
list *insert();
list *createNode();
list *delete();
list *find();

main()
{
	list *temp, *start = NULL; 
	char c = 'y';
	int n;

	while(c != 'n' && c != 'N')
	{
		printf("\nEnter the data: ");
		scanf("%d",&n); getchar(); fflush(stdin);
		temp = createNode();
		temp->data = n;
		temp->next = NULL;
		if(!find(start,temp->data)) 
			start = insert(start,temp);

		printf("\nDo you want to add new data in the list? (y/n): ");
		scanf("%c",&c); fflush(stdin);
	}
	printf("\nTHE LIST IS: "); showList(start); printf("\n\n");

	c = 'y';
	while(c != 'n' && c != 'N')
	{
		printf("\nEnter the data to be deleted: ");
		scanf("%d",&n); getchar(); fflush(stdin);
		if(find(start, n)) start = delete(start, n);

		printf("\nDo you want to delete another data from the list? (y/n):");
		scanf("%c", &c) ; fflush(stdin);
	}
	printf("\nTHE LIST AFTER DATA DELETION IS: "); showList(start); printf("\n\n");

	start = reverse(start);
	printf("\nTHE REVERSED LIST IS: "); showList(start); printf("\n\n");
}


list *createNode()
{
	list *new; 
	new = (list *)malloc(sizeof(list));
	return(new);
}


list *insert(list *st, list *ndt)
{ 
	if(!st) return(ndt); 
	st->next = insert(st->next, ndt);
	return(st);
}


list *find(list *st, int dt)
{
	while(st)
		if(st->data == dt)
			return (st);
		else
			st = st->next;
	return(st);
}

void showList(list *temp) 
{
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


list *reverse(list *l) 
{
	list *nxt, *temp;
	if(!l) return(l);
	else
	{
		nxt = l->next;
		l->next = NULL;
		while(nxt)
		{
			temp = nxt->next;
			nxt->next = l;
			l = nxt;
			nxt = temp;
		}
		return(l); 
	}
}

list *delete(list *st, int n)
{
	list *tmp;
	if(!st) return(st);
	if(st->data == n)
	{
		tmp = st;
		st = st->next;
		free(tmp);
		return(st);
	}
	st->next = delete(st->next,n);
	return(st);
}
