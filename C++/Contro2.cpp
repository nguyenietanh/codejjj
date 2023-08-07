#include<iostream>
using namespace std;
int main()
{
	int i,j;//khai báo 2 bi?n nguyên i, j
	int *p, *q;//kb 2 con tr? nguyên p,q
	p=&i;//cho p tr? t?i i
	q=&j;//cho q tr? t?i j
	cout<<"Dia chi bien i la :"<<&i<<endl;
	cout<<"Dia chi bien j la :"<<&j<<endl;
	i=2;//gán i b?ng 2
	*q=5;//gán j b?ng 5 (thông qua q)
	i++;
	cout<<"i="<<i<<endl; //tang i và in i = 3
	(*q)++;
	cout<<"j="<<j<<endl;//tang j và in j = 6
	(*p)=(*q)*2+1;;//gán lai i thông qua p
	cout<<"i="<<i<<endl;// 13
	return 0;
}
