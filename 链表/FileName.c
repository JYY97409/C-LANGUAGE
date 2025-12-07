#include<string.h>
#include<stdio.h>

typedef struct num 
{
	int x;
	int y;
	struct num* next;
	struct num* prev;
}num;
int main()
{	
	num* head = NULL;
	head->next = NULL;
	head->prev = NULL;
	for (int i = 0; i < 5; i++)
	{
		num* new = (num*)malloc(sizeof(num));
		new->x = i + 1;
		new->y = i + 1;
	}
	
	return 0;
}