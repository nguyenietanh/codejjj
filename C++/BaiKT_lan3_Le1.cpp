#include<iostream>
#include<iomanip>
using namespace std;

typedef struct
{
	char mact[15];
	char tenct[30];
	float tuoi;
	float huychuong;
	float thuong;	
}cauthu;
void nhapds(cauthu a[],int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"\nNhap cau thu "<<i+1<<endl;
		cin.ignore();
		cout<<"Ma cau thu: ";cin.getline(a[i].mact,15);
		cout<<"\nTen cau thu: ";cin.getline(a[i].tenct,30);
		cout<<"\nTuoi cau thu: "; cin>>a[i].tuoi;
		cout<<"\nSo huy chuong: "; cin>>a[i].huychuong;	
	}
}
void tieude()
{
	cout<<setw(15)<<"Ma cau thu ";
	cout<<setw(30)<<"Ten cau thu";
	cout<<setw(10)<<"Tuoi ";
	cout<<setw(15)<<"So huy chuong "<<endl;	
}
void inds(cauthu a[], int m)
{
	cout<<"------DANH SACH DOI BONG------"<<endl;
	tieude();
	for(int i=0;i<m;i++)
	{
		cout<<setw(10)<<a[i].mact;
		cout<<setw(30)<<a[i].tenct;
		cout<<setw(10)<<a[i].tuoi;
		cout<<setw(15)<<a[i].huychuong<<endl;
	}
}
void thuongcauthu(cauthu a[],int m)
{
	
	for(int i=0;i<m;i++)
	{
		if(a[i].huychuong >5)
			a[i].thuong=500000;
		if (a[i].huychuong >3)
			a[i].thuong=300000;
		if (a[i].huychuong >2)
			a[i].thuong=200000;
	}	
}
void sapxepgiamdan(cauthu a[],int m)
{
	for(int i=0;i<m-1;i++)
		for( int j=i+1;j<m;j++)
			if(a[i].tuoi < a[j].tuoi)
		{ 
			cauthu tg;
			tg = a[i];
			a[i] = a[j];
			a[j] = tg;
		}
} 

int main()
{
	cauthu ct[50];
	int n;
	cout<<"Nhap so luong cau thu: ";cin>>n;
	thuongcauthu(ct,n);
	nhapds(ct,n);
	inds(ct,n);
	sapxepgiamdan(ct, n);
	cout<<" Danh sach cau thu giam theo tuoi la"<<endl;
	inds(ct, n);
	return 0;
}


















