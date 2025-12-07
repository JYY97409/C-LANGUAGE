#include"list.h"

listnode* LTBuyNode(type x)
{
	listnode* newlist = (listnode*)malloc(sizeof(listnode));
	if (newlist == NULL)
	{
		perror("malloc");
		return 1;
	}
	newlist->num = x;
	newlist->next = newlist->prev = newlist;
	return newlist;
}

void LTInit(listnode** phead)
{
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}

void LTpushback(listnode* head, type x)
{
	assert(head);
	listnode* newnode = LTBuyNode(x);
	head->prev->next = newnode;
	newnode->prev = head->prev;
	newnode->next = head;
	head->prev = newnode;
}

void LTpushfront(listnode* head, type x)
{
	assert(head);
	listnode* newnode = LTBuyNode(x);
	head->next->prev = newnode;
	newnode->next = head->next;
	head->next = newnode;
	newnode->prev = head;
}


void LTPopBack(listnode* head)
{
	assert(head&&head->next!=head);
	listnode* to_delete = head->prev;
	head->prev = to_delete->prev;
	to_delete->prev->next = head;
	free(to_delete);
	to_delete = NULL;
}

void LTPopfront(listnode* head)
{
	assert(head && head->next != head);
	listnode* to_delete = head->next;
	head->next = to_delete->next;
	to_delete->next->prev = head;
	free(to_delete);
	to_delete = NULL;
}


void Printf(listnode* head)
{
	listnode* pcur = head->next;
	while (pcur != head)
	{
		printf("%d->", pcur->num);
		pcur = pcur->next;
	}
	printf("\n");
}

listnode* LTFind(listnode* head, type x)
{
	listnode* pcur = head->next;
	while (pcur != head)
	{
		if (pcur->num == x)
		{
			return pcur;
			//找到了
		}
		pcur = pcur->next;
	}
	return NULL;
	//没找到
}

void LTInsert(listnode* pos, type x)
{
	assert(pos);

	listnode* newnode = LTBuyNode(x);
	pos->next->prev = newnode;
	newnode->next = pos->next;

	newnode->prev = pos;
	pos->next = newnode;
}

void LTErase(listnode* pos)
{
	assert(pos);
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void LTDesdory(listnode* head)
{
	listnode* right = head->next;
	listnode* to_delete = NULL;
	while (right != head)
	{
		to_delete = right;
		right = right->next;
		free(to_delete);
		to_delete = NULL;
	}
	head->next = head;
	head->prev = head;
}