#include<iostream>
#include<iomanip>
using namespace std;


typedef struct
{
	char masp[15];
	char tensp[30];
	int soluong;
	float dongia;	
}san_pham;
void nhapds(san_pham a[],int m)
{
	for(int i=0;i<m;i++)
	{
		cin.ignore();
		cout<<"\nNhap san pham thu "<<i+1<<endl;
		cout<<"Ma san phan: ";cin.getline(a[i].masp,15);
		cout<<"\nTen san pham: ";cin.getline(a[i].tensp,30);
		cout<<"\nSo luong san pham: "; cin>>a[i].soluong;
		cout<<"\nDon gia san pham: "; cin>>a[i].dongia;	
	}
}
void inds(san_pham a[], int m)
{
	cout<<"DANH SACH SAN PHAM"<<endl;
	cout<<setw(15)<<"Ma San pham ";
	cout<<setw(30)<<"Ten San pham ";
	cout<<setw(15)<<"So luong ";
	cout<<setw(15)<<"Dong gia "<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<setw(10)<<a[i].masp;
		cout<<setw(30)<<a[i].tensp;
		cout<<setw(15)<<a[i].soluong;
		cout<<setw(15)<<a[i].dongia<<endl;
	}
}
void spgiaduoi20000(san_pham a[],int m)
{
	cout<<"Danh sach san pham co gia <20000"<<endl;
	cout<<setw(15)<<"Ma San pham ";
	cout<<setw(30)<<"Ten San pham ";
	cout<<setw(15)<<"So luong ";
	cout<<setw(15)<<"Dong gia "<<endl;
	for(int i=0;i<m;i++)
		if(a[i].dongia <=20000)
		{
			cout<<setw(10)<<a[i].masp;
			cout<<setw(30)<<a[i].tensp;
			cout<<setw(15)<<a[i].soluong;
			cout<<setw(15)<<a[i].dongia<<endl;
		}
}

int main()
{
	san_pham sp[50];
	int n;
	cout<<"Nhap so san pham: ";cin>>n;
	nhapds(sp,n);
	inds(sp,n);
	spgiaduoi20000(sp,n);
	return 0;
}


















