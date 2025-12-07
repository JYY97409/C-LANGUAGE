#include"list.h"
int main()
{
	listnode* head = LTBuyNode(-1);
	LTInit(&head);

	LTpushback(head, 0);
	Printf(head);

	LTpushback(head, 1);
	Printf(head);

	LTpushfront(head, 2);
	Printf(head);

	LTpushfront(head, 3);
	Printf(head);

	LTpushback(head, 4);
	Printf(head);

	LTpushback(head, 5);
	Printf(head);

	LTPopBack(head);
	Printf(head);

	LTPopfront(head);
	Printf(head);

	listnode* ret = LTFind(head, 2 );

	LTInsert(ret, 66);
	Printf(head);
	
	LTErase(ret);
	Printf(head);

	LTDesdory(head);
	Printf(head);
	free(head);
	head = NULL;
	return 0;
}