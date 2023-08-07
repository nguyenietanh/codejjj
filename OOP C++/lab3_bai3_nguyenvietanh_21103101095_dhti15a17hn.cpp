#include <iostream>
#include<iomanip>
using namespace std;
class GV
{
	char ht[30];
	int tuoi;
	char bc[15];
	char cn[20];
	float bl;
	float luong;
	public:
	friend istream& operator>>(istream &is,GV &gv);
	friend ostream& operator<<(ostream &os,GV gv);
		
};
istream& operator>>(istream &is,GV &gv)
{
	fflush(stdin);
	cout<<"\nNhap ho ten: ";
	is.getline(gv.ht,30);
	cout<<"\nNhap tuoi : ";
	is>>gv.tuoi;
	fflush(stdin);
	cout<<"\nBang cap: ";
	is.getline(gv.bc,15);
	fflush(stdin);
	cout<<"\nChuyen nganh ";
	is.getline(gv.cn,20);
	cout<<"\nNhap bac luong: ";
	is>>gv.bl;
	return is;
}
ostream& operator<<(ostream& os,GV gv)
{
	os<<gv.ht<<setw(12)<<gv.tuoi<<setw(12)<<gv.bc<<setw(12)<<gv.cn<<setw(12)<<gv.bl;
	return os;
}
int main()
{
	GV A[50];
	int n;

	cout<<"Nhap so giao vien: ";
	cin>>n;
	for(int i = 0;i < n; i++)
	{
		cout<<"\nNhap thong tin giao vien thu "<<i+1<<endl;
		cin>>A[i];
	}
    for(int i = 0;i < n; i++)
	{
	
		if(A[i].bl<2000)
			cout<<A[i];
	} 
	for(int i = 0;i < n; i++)
	{
	  	float luong;
		cout<<"\nLuong co ban c?a giao vien la : ";
		A[i].luong= A[i].bl*610;
	}
	return 0;
}
