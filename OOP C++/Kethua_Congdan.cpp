#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;

class Congdan
{
	private:
		char hoten[20], quequan[30];
		long int cccd;
		public:
			Congdan()
			{
				strcpy(hoten,"");
				strcpy(quequan,"");
				cccd=0;
			}
		void nhap();
		void hienthi();		
};
class Taikhoan: public Congdan
{
	private:
		long int stk, sd, mp;
	public:
		Taikhoan()
		{
			stk=0;
			sd=0;
			mp=0;			
		}
		void nhap();
		void hienthi();	
};
void Congdan::nhap()
{
	cout<<"\nHo va ten: "; cin.getline(hoten,20);
	cout<<"\nQue quan: "; cin.getline(quequan,30);
	cout<<"\nSo CCCD: ";cin>>cccd;
}
void Congdan::hienthi()
{
	cout<<hoten<<setw(10)<<quequan<<setw(10)<<cccd;
}
void Taikhoan::nhap()
{
	Congdan::nhap();
	cout<<"So tai khoan: ";cin>>stk;
	cout<<"Ma pin: ";cin>>mp;
	cout<<"So du: "; cin>>sd;
}
void Taikhoan::hienthi()
{
	Congdan::hienthi();
	cout<<setw(10)<<stk<<setw(10)<<mp<<setw(10)<<sd;
}
int main()
{
	
	Taikhoan a,b;
	cout<<"\nNhap Tai khoan A:\n";
	a.nhap(); cin.ignore(1);
	cout<<"\nNhap Tai khoan B:\n";
	b.nhap();
	cout<<"\nTai khoan a: "; a.hienthi();
	cout<<"\nTai khoan b: "; b.hienthi();
}
















