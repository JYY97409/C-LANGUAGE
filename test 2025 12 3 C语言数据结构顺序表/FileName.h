
#pragma once
#define NUM 100
//¾²Ì¬Ë³Ðò±í
//struct seqlist
//{
//	int arr[NUM];
//	int size;
//};

typedef int seqlistType;
struct seqlist
{
	seqlistType* arr;
	int size;
	int capasity;
};