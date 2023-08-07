#include<iostream>
#include<iomanip>
using namespace std;

void nhapmang(int b[], int n)
{
	for(int i=0;i<n;i++)	
	{	cout<<"Nhap phan tu b["<<i<<"]: ";
		cin>>b[i];	
    }
}
void xuatmang(int b[], int n)
{
	for(int i=0;i<n;i++)
	cout<<b[i]<<"\t";
}
void lietkesochan(int b[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(b[i]%2==0)
		cout<<" "<<b[i];
	}
}
void lietkesole(int b[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(b[i]%2==1)
		cout<<" "<<b[i];
	}
}
//void sochinhphuong(int b[],int n)
//{
//	 
//	for(int i = 0; i < n;i++){
//        if(i*i == n)
//		{
//            cout<<a[i];
//    }
//	}	
//}
void themphantu(int b[], int n,int x)
{
	int pos = n;
	while ((pos>0)&&(b[pos-1]>x))
	{
		b[pos]=b[pos-1];
		pos--;
	}
	b[pos]=x;
}

int main()
{
	int a[100],n,x;
	cout<<"Nhap so phan tu trong mang n :";cin>>n;
	nhapmang(a,n);
	xuatmang(a,n);
	cout<<"Cac so chan la: "<<endl;
	lietkesochan(a,n);
	cout<<"Cac so le la: "<<endl;
	lietkesole(a,n);
//	cout<<"So chinh phuong la :"; 
//	sochinhphuong(a,n);
	cout<<"Nhap phan tu can them : "; cin>>x;
	themphantu(a,n,x);
	xuatmang(a,n);
	return 0;
}
