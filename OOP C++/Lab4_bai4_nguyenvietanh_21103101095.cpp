#include<iostream.h>
#include<string.h>
#include<iomanip>

using namespace std;
class AnPham
{
	protected:
		char ten[30];
		float gia;
	public:
		void nhap()
		{
			cout<<"Nhap ten: "; 
			fflush(stdin);
			cin.getline(ten, 30);
			cout<<"Gia thanh: ";
			cin>>gia;
		}
		void xuat()
		{
			cout<<"Ten: "<<ten;
			cout<<"Gia thanh: "<<gia<<endl;
		}
};

class Sach:public AnPham
{
	private:
		int long soTrang;
	public:
		void nhap()
		{
			AnPham::nhap();
			cout<<"Nhap so trang cua sach nay: ";
			cin>>soTrang;
		}
		void xuat()
		{
			AnPham::xuat();
			cout<<"So trang: "<<endl;	
		}

		friend void Check(Sach s[],int n)
		{
			for(int i=0; i<n; i++)
			if(s[i].soTrang>500)
				s[i].xuat();
		}
};
class Dia:public AnPham
{
	private:
		int soPhut;
	public:
		void nhap()
		{
			AnPham::nhap();
			cout<<"Nhap so phut cho dia nay: ";
		}
		void xuat()
		{
			AnPham::xuat();
			cout<<"So phut: "<<soPhut;
		}
		int timTen(char x[])
		{
			if(strcmp(ten,x)==0)
				return 1;
			return 0;
		}
};
int main()
{
	Sach a[50];
	int n;
	cout<<"So sach can xuat ban: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		a[i].nhap();
	}
	cout<<"Nhung quyen sach co so trang  > 500 ";
	Check(a,n);
	Dia d[50];
	for(int i=0; i<n; i++)
	{
		cout<<"Dia: "<<i+1<<endl;
		d[i].nhap();
	}
	char t[30];
	fflush(stdin);
	cout<<"Nhap ten dia can tim: ";
	cin.getline(t,30);
	for(int i=0; i<n; i++)
	{
		if(d[i].timTen(t))
			d[i].xuat();
	}
	return 0;
}
