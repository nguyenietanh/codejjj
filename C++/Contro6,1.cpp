#include<iostream>
#include<conio.h>
using namespace std;
void max3so(int *x, int *y, int *z)
{
	int max = *x;
	if (max < *y)	max = *y;
	if (max < *z)	max = *z;
	cout<<"So lon nhat trong 3 so la: "<<max<<endl;
}
int main()
{
	int a,b,c;
	cout<<"Nhap vao 3 so nguyen duong:"<<endl;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	max3so(&a,&b,&c);
	return 0;
}
