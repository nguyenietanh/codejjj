#include<iostream>
using namespace std;
int main()
{
	int i,j;//khai b�o 2 bi?n nguy�n i, j
	int *p, *q;//kb 2 con tr? nguy�n p,q
	p=&i;//cho p tr? t?i i
	q=&j;//cho q tr? t?i j
	cout<<"Dia chi bien i la :"<<&i<<endl;
	cout<<"Dia chi bien j la :"<<&j<<endl;
	i=2;//g�n i b?ng 2
	*q=5;//g�n j b?ng 5 (th�ng qua q)
	i++;
	cout<<"i="<<i<<endl; //tang i v� in i = 3
	(*q)++;
	cout<<"j="<<j<<endl;//tang j v� in j = 6
	(*p)=(*q)*2+1;;//g�n lai i th�ng qua p
	cout<<"i="<<i<<endl;// 13
	return 0;
}
