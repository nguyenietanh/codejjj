#include<iostream>
using namespace std;
void hoanvi(float *x,float *y)
{ 
	float tg = *x;
	*x = *y;
	*y = tg;
}
int main()
{ 
	float a, b;
	cout<<"Nhap so thu nhat :";cin>>a;
	cout<<"Nhap so thu hai :";cin>>b;
	hoanvi(&a,&b);
	cout<<"Gia tri sau hoan doi la :"<<endl;
	cout<<"a = " <<a<<" b = "<<b<<endl;
}
