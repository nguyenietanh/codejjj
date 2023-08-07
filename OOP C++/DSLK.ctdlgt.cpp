#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int val;
	Node *next;
	Node() : val(0), next(nullptr){}
	Node(int x) : val(x), next(nullptr){}
};
class List
{
	private:
		Node *head;
		int length;
	public:
		List() : head(nullptr), length(0) {}
		bool isEmpty()
		{
			return (!head) ? true : false;
		}
	void push(int val)
	{
		if(isEmpty())
		{
			head = new Node(val);
		}
		else
		{
			Node *currNode = head;
			while (currNode->next)
			{
				currNode = currrNode->next;
			}
			currNode->next = new Node(val);
		}
		length++;
	}
}
void insert(int idx, int val)
{
	if(idx <0 or idx>length)
	{
		return ;
	}
	if(isEmpty())
	{
		Node*newNode= new New(val);
		newNode->next =head;
		head = newNode;
	}
	else if(idx==length)
	{
		push(val);
		length--;
	}
	else 
	{
		Node *currNode=head;
		Node *prevNode=nulllptr;
		while ( idx-- and currNode->next)
		{
			prevNode=currNode;
			currNode=currNode->next;
		}
		Node *newNode=new Node(val);
		prevNode->next=newNode;
		newNode->next=currNode;
	}
	length++;
}
void remvo(int idx)
{
	if((idx<0 or idx>length-1) or isEmpty())
	{
		return ;
	}
	if(idx==0)
	{
		Node *tempNode=head;
		head=head->next;
		delete(tempNode);
	}
	else if(idx ==length-1)
	{
		Node *currNode=head;
		Node *prevNode=nullptr;
		while(currNode->next)
		{
			prevNode=currNode;
			currNode=currNode->next;
		}
		prevNode->next=nullptr;
		delete(currNode);
	}
	else
	{
		Node *currNode=head;
		Node *prevNode=nullptr;
		while(idx-- and currNode->next)
		{
			prevNode=currNode;
			currNode=currNode->next;
		}
		prevNode->next=currNode->next;
	}
	length--;
}
void changeInfor(int idx, int val)
{
	if((idx<0 or idx>length-1) or isEmpty())
	{
		return;
	}
	Node *currNode=head;
	while (idx-- and currNOde->next)
	{
		currNode=currNode->next;
	}
	currNode->val=val;
}
void print()
{
	Node *currNode= head;
	while(currNode)
	{
		cout<<currNode->val<<' ';
		currNode=currNode->next;
	}
}
bool search(int val)
{
	Node *currNode=head;
	while(currNode)
	{
		if(currNode->val==val)
		{
			return true;
		}
		currNode=currNode->next;
	}
	return false;
}
void sortList(function<bool(int,int)>check)
{
	Node *p=head;
	while(p->next)
	{
		Node *q = p->next;
		while(q)
		{
			if(check(p->val, q->val))
			{
				swap(p->val,q->val);
			}
			q=p->next;
		}
		q=p->next;
	}
}
Node *getHead()
{
	return head;
}
int getLength()
{
	return length;
}
};
























