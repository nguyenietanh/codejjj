#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class PTGT {
	protected:
		string hsx;
		int nsx;
		float giachuathue;
	public:
		PTGT () {
		string hsx = "";
		nsx = 0;
		giachuathue = 0;
	};
		~PTGT() {
			//hamhuy
		};
	void nhap() {
		fflush(stdin);
		cout<<"NHAP HANG SAN XUAT: "; getline(cin, hsx);
		cout<<"NHAP NAM SAN XUAT: "; cin>>nsx;
		cout<<"NHAP GIA CHUA THUE: "; cin>>giachuathue;
	}
	void xuat() {
		cout<<left<<setw(15)<<hsx<<setw(10)<<nsx<<setw(15)<<giachuathue;
	}
};
class XEKHACH : protected PTGT {
	private:
		int tuyen;
		int ghe;
	public:
		XEKHACH() : PTGT() {
			tuyen = 0;
			ghe = 0;
		}
		~XEKHACH() {
			//hamhuy
		};
	friend istream &operator >> (istream &is, XEKHACH &XE) {
		XE.nhap();
		fflush(stdin);
		cout<<"NHAP SO TUYEN: "; is>>XE.tuyen;
		cout<<"NHAP SO GHE: "; is>>XE.ghe;
	}
	double tinhgia() {
		float gia = giachuathue;
			return gia + gia * 0.8;
	}
	bool operator < (int x) {
		return(this -> nsx <= x );
	}
	friend ostream &operator << (ostream &os, XEKHACH &XE) {
		XE.xuat();
		fflush(stdin);
		os<<left<<setw(10)<<XE.tuyen<<setw(10)<<XE.ghe<<setw(15)<<XE.tinhgia();
	}
};
void tieudePTGT() {
	cout<<left<<setw(15)<<"HANG SX"<<setw(10)<<"NAM SX"<<setw(15)<<"GIA CHUA THUE";
}
void tieudeXEKHACH() {
	tieudePTGT();
	cout<<setw(10)<<"SO TUYEN"<<setw(10)<<"SO GHE"<<setw(15)<<"GIA";
}
int main() {
	int n, m;
 		PTGT *ptgt;
 		XEKHACH *xekhach;
 		cout<<"\n\t\t\tNHAP SO PTGT LA: "; cin>>n;
 		ptgt = new PTGT[n];
 	for(int i = 0; i < n; ++i) {
 		cout<<"\nPHUONG TIEN THU "<<i+1<<" LA:"<<endl;
 		ptgt[i].nhap();
	 }
	 cout<<"\n\t\t\tTHONG THI PTGT VUA NHAP LA: ";
	tieudePTGT();
	for(int i = 0; i < n; ++i) {
		cout<<endl;
		ptgt[i].xuat();
	}
	cout<<"\n\t\t\t Nhap so luong XE KHACH: "; cin>>m;
	xekhach = new XEKHACH[m];
	for(int i = 0; i < m; ++i) {
		cout<<"\nXE KHACH THU "<<i + 1<<" LA: "<<endl;
		cin>>xekhach[i];
	}
	cout<<"\n\n\t\tDANH SACH XE KHACH CO SO GHE LON HON 29 LA:";
	tieudeXEKHACH();
	for(int i = 0; i < m ; ++i) {
		if(!(xekhach[i] < 29)){
			cout <<endl<< xekhach[i];
		}
	}
 	
	return 0;
}

