#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

typedef struct
{
	int tu;
	int mau;
}phanso;
int main()
{

	phanso a,b,c;
	cout<<"\nNhap phan so a "<<endl;
	cout<<"Tu so: "; cin>>a.tu;
	cout<<"Mau so: "; cin>>a.mau;
	cout<<"\nNhap phan so b "<<endl;
	cout<<"Tu so: "; cin>>b.tu;
	cout<<"Mau so: "; cin>>b.mau;
	cout<<"Phan so thu nhat la:"<<a.tu<<"/"<<a.mau<<endl;
	cout<<"Phan so thu hai la: "<<b.tu<<"/"<<b.mau<<endl;

	c.tu = a.tu*b.mau + a.mau*b.tu;
	c.mau = a.mau*b.mau;
	cout<<"a + b = "<<(float)c.tu/c.mau<<endl;
	c.tu = a.tu*b.mau - a.mau*b.tu;
	c.mau = a.mau*b.mau;
	cout<<"a - b = "<<(float)c.tu/c.mau<<endl;
	
	c.tu = a.tu*b.tu;
	c.mau = a.mau*b.mau;
	cout<<"a * b = "<<(float)c.tu/c.mau<<endl;
	c.tu = a.tu*b.mau;
	c.mau = a.mau*b.tu;
	cout<<"a / b = "<<(float)c.tu/c.mau<<endl;
	
	return 0;	
	
	
	
	
	
}
