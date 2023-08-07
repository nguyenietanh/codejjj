#include<iostream.h>
#include<conio.h>
using namespace std;
int max2so(int *x, int *y)
{
	int max;  
	max = *x;
	if(max < *y)	max = *y;
	return max;
}
int main()
{
	int a,b,c,tg;
	cout<<"Nhap vao 3 so nguyen duong:"<<endl;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	tg = max2so(&a,&b);
	cout<<"So lon nhat trong 3 so la: "<<max2so(&tg,&c)<<endl;
	return 0;
}
