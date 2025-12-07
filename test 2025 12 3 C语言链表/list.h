#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int type;
typedef struct listnode
{
	type num;
	struct listnode* next;
	struct listnode* prev;
}listnode;
listnode* LTBuyNode(type x);
//初始化
void LTInit(listnode** phead);
//尾插
void LTpushback(listnode* head, type x);
//头插
void LTpushfront(listnode* head, type x);
//尾删
void LTPopBack(listnode* head);
//头删
void LTPopfront(listnode* head);
//打印
void Printf(listnode* head);
//找到单个节点
listnode* LTFind(listnode* head, type x);
//在指定的节点后插入
void LTInsert(listnode* pos, type x);
//删除节点
void LTErase(listnode* pos);
//销毁链表
void LTDesdory(listnode* head);