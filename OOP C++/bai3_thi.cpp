#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;

class DIENLANH {
	private:
		string ma;
		char ten[20];
		int gia;
	public:
		DIENLANH() 
		{
			ma = "";
			strcpy(ten, "");
			gia = 0;
		}
	~DIENLANH () {
	};
	void nhap() 
	{
		fflush(stdin);
		cout<<"NHAP MA HANG: "; getline(cin, ma);
		cout<<"NHAP TEN HANG SAN XUAT: "; cin.getline(ten, 20);
		cout<<"NHAP DON GIA: "; cin>>gia;
	}
	void xuat() 
	{
		cout<<"\n"<<setw(12)<<ma<<setw(12)<<ten<<setw(12)<<gia;
	}
};
class TULANH: public DIENLANH 
{
	private:
		int dungtich;
		float datt;
	public:
		TULANH() : DIENLANH() 
		{
			dungtich = 0;
			datt = 0 ;
		}
	~TULANH() {	
		};
	friend istream &operator>>(istream &is, TULANH &TL) 
	{
		TL.nhap();
		fflush(stdin);
		cout<<"NHAP DUNG TICH TU LANH: "; is>>TL.dungtich;
		cout<<"NHAP DIEN AP TIEU THU: "; is>>TL.datt ;
	}
	int tinhtien() 
	{
		if(dungtich > 100)
			return 0;
		else if(dungtich <= 100 && dungtich > 50)
			return 1;
		else
			return 2;
	}
	bool operator == (int x) 
	{
		return (this -> dungtich == x);
	}
	friend ostream &operator<<(ostream &os, TULANH &TL) 
	{
		TL.xuat();
		fflush(stdin);
		os<<setw(12)<<TL.dungtich<<setw(12)<<TL.datt<<setw(12);
		if(TL.tinhtien() == 0)
			os<<" 500000";
		else if(TL.tinhtien() == 1)
			os<<" 300000";
		else
			os<<" 200000";
	}
};

void tieude() 
{
	cout<<"\n"<<"MA HANG"<<setw(12)<<"HANG SX"<<setw(12)<<"GIA";
}
void tieude1() 
{
	tieude();
	cout<<"\n"<<setw(12)<<"DUNG TICH"<<setw(12)<<"DIEN AP"<<setw(12)<<"VAN CHUYEN";
}
	
int main() 
{
	int n, m;
	DIENLANH *a;
	TULANH *b;
	cout<<"\nNHAP SO LUONG DIEN LANH LA: "; cin>>n;
	a = new DIENLANH[n];
	for(int i = 0; i < n; i++) 
	{
		cout<<"\nDIEN LANH THU "<<i + 1<< " LA: "<< endl;
		a[i].nhap();
	}
	cout<<"\nTHONG TIN DIEN LANH VUA NHAP LA: ";
	tieude();
	for(int i=0; i<n; i++) {
		
		cout<<endl;
		a[i].xuat();
	}
	cout<<"\nNHAP SO LUONG TU LANH: "; cin>>m;
	b = new TULANH[m];
	for(int i=0; i<m; i++) 
	{
		cout<<"\nTHU LANH THU "<<i+1<<" LA: "<<endl;
		cin>>b[i];
	}
	tieude1();
	for(int i = 0; i < m ; ++i) 
	{
		if(b[i] == 500)
		{
			cout <<endl<< b[i];
		}
	}
	return 0;
}	

