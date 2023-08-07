#include<iostream>
#include<math.h>
#include<iomanip.h>
class Maytinh
{
	int mh;
	char th[30];
	float dg;
	float long dl;
	float tl;
	public:
	friend istream& operator>>(istream &is,Maytinh &mt);
	friend ostream& operator<<(ostream &os,Maytinh mt);		
};
istream& operator>>(istream &is,Maytinh &mt)
{
	fflush(stdin);
	cout<<"\nNhap ma hang: ";
	is>>mt.mh;
	cout<<"\nNhap ten hang san xuat : ";
	is.getline(mt.th,30);
	fflush(stdin);
	cout<<"\nNhap don gia: ";
	is>>mt.dg;
	fflush(stdin);
	cout<<"\nNhap dung luong bo nho RAM: ";
	is>>mt.dl;
	cout<<"\nNhap trong luong: ";
	is>>mt.tl;
	return is;
}
ostream& operator<<(ostream& os,GV gv)
{
	os<<mt.mh<<setw(12)<<mt.th<<setw(12)<<mt.dg<<setw(12)<<mt.dl<<setw(12)<<mt.tl;
	return os;
}
int main()
{
	Maytinh a[50];
	int n;
	cout<<"Nhap so luong may tinh: "; cin>>n;
	for(int i = 0;i < n; i++)
	{
		cout<<"\nNhap thong tin may tinh thu "<<i+1<<endl;
		cin>>a[i];
	}
	for(int i = 0;i < n; i++)
	{
		if
	}
}

