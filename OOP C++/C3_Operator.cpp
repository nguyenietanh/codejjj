#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class Sinhvien
{
	private:
		char hoten[30];
		char mssv[8];
		float dtb;
	public:
		friend void operator >> (Sinhvien &sv, istream &is);
		friend void operator << (Sinhvien sv, ostream &os);
};
void operator>>(Sinhvien &sv,istream &is)
{
	cout<<"\nNhap ho ten: ";
	is>>sv.hoten;
	cout<<"\nMa so sinh vien: ";
	is>>sv.mssv;
	cout<<"\nDiem trung binh: ";
	is>>sv.dtb;
}
void operator << (Sinhvien sv, ostream &os)
{
	os<<sv.hoten<<"\n"<<sv.mssv<<"\n"<<sv.dtb;
}
int main()
{
	system("cls");
	Sinhvien a;
	a>>cin;
	getch();
}
