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
	{// setw: cot 
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
	cout<<setw(15)<<"TEN HANG"
		<<setw(15)<<"VAN TOC"
		<<setw(15)<<"NAM SAN XUAT"<<endl;
}
class TauChien : public Tau
{
	int loaiTau;
	float trongTai;
	double tiensc;
	public:
		friend istream& operator>>(istream &is,TauChien &t);
		friend ostream& operator<<(ostream &os,TauChien t);	
};
istream& operator>>(istream &is,TauChien &t)
{
	cout<<"Loai tau: "; is>>t.loaiTau;
	cout<<"Trong tai: "; is>>t.trongTai;
	return is;
}
ostream& operator<<(ostream &os,TauChien t)
{
//	if (t.get_nsx()<=1990)
//		os<<t.tiensc = 50000000;
//	if else(t.get_nsx()>1991 && t.get_nsx()<=2000)
//		os<<t.tiensc = 30000000;
//	else
//		os<<t.tiensc = 10000000;
}

