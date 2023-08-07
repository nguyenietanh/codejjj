#include<iostream>
#include<iomanip>
using namespace std;

class Tau{
	private:
		char hang[10];
		float vt;
		int nsx;
	public:
		Tau()
		{
			hang[10];
			vt=nsx=0;
		}
		~Tau(){};
	void nhap()
	{
		fflush(stdin);
		cout<<"Nhap vao hang san xuat: ";
		cin.getline(hang,11);
		cout<<"Nhap vao van toc tau: ";
		cin>>vt;
		cout<<"Nhap vao noi san xuat: ";
		cin>>nsx;
	}
	void xuat()
	{// setw: cot 14
		cout<<setw(14)<<hang
			<<setw(14)<<vt
			<<setw(14)<<nsx<<endl;
	}
	int get_nsx()
	{
		return nsx;
	}	
};
void tieu_de()
{
	cout<<"Danh sach con tau la "<<
	endl;
	cout<<setw(15)<<"TEN HANG"
		<<setw(15)<<"VAN TOC"
		<<setw(15)<<"NAM SAN XUAT"<<endl;
}
int main()
{
	int n;
	cout<<"Nhap so luong tau can nhap: "; cin>>n;
	Tau t[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap vao tau thu "<<i+1<<endl;
		t[i].nhap();
	}
	tieu_de();
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if( t[i].get_nsx()>t[j].get_nsx())
				swap(t[i],t[j]);
		}
		t[i].xuat();
	}
	return 0;
}















