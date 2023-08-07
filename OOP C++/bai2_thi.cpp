#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
class NAMGIOI {
	protected:
		char ht[30];
		int tuoi;
		long int cmt;
	public:
		NAMGIOI() {
			strcpy(ht, " ");
			tuoi = 0;
			cmt = 0;
		}
		~NAMGIOI() {};
	void nhap() {
		fflush(stdin);
		cout<<"NHAP HO TEN: "; cin.getline(ht, 30);
		cout<<"NHAP TUOI: "; cin>>tuoi;
		cout<<"NHAP SO CHUNG MINH THU: "; cin>>cmt;
	}
	void xuat() {
		cout<<left<<setw(30)<<ht<<setw(10)<<tuoi<<setw(20)<<cmt;
	}
};
class KHACHHANG: protected NAMGIOI {
	private:
		string ms;
		int slm;
	public:
		KHACHHANG() : NAMGIOI() {
			string ms = "";
			slm = 0;	
		}
		~KHACHHANG() {};
	friend istream &operator>>(istream &is, KHACHHANG &KH) {
		KH.nhap();
		fflush(stdin);
		cout<<"NHAP MA SO KHACH HANG: "; is>>KH.ms;
		cout<<"NHAP SO LAN MUA HANG: "; is>>KH.slm;
	}
	int ploai() {
		if(tuoi > 60)
			return 0;
		else if(tuoi <= 60 && tuoi > 35)
			return 1;
		else
			return 2;
	}
	bool operator > (KHACHHANG &KH) {
		return (this->slm>KH.slm);
		// kh[j]>kh[j+1] th? con tro this tro den kh[j] con truyen kh[j+1}vao ds tham so 
	}
	friend ostream &operator<<(ostream &os, KHACHHANG &KH) {
		KH.xuat();
		os<<left<<setw(10)<<KH.ms<<setw(12)<<KH.slm;
		if(KH.ploai() == 0)
		os<<"CAO TUOI";
		else if(KH.ploai() ==1 )
		os<<"TRUNG NIEN";
		else
		os<<"TRE";
	}
};

void tieudeNG() {
	cout<<left<<setw(30)<<"HO TEN"<<setw(10)<<"TUOI"<<setw(20)<<"CMT";
}
void tieudeKH() {
	tieudeNG();
	cout<<left<<setw(10)<<"MA SO"<<setw(12)<<"SO LAN MUA"<<setw(10)<<"PHAN LOAI";
}	

int main() {
	int n, m;
	NAMGIOI *namgioi;
	KHACHHANG *khachhang;
	cout << "\n\t\tNHAP SO LUONG NAM GIOI: "; cin >> n;
	namgioi = new NAMGIOI[n];
	for(int i  = 0; i < n; ++i) {
		cout<<"\n NAM GIOI THU "<<i + 1 <<" LA: "<<endl;
		namgioi[i].nhap();
	}
	cout<<"\nDANH SACH NAM GIOI VUA NHAP LA: "<<endl;
	tieudeNG();
	for(int i  = 0; i < n; ++i) {
		cout<<endl;
		namgioi[i].xuat();
	}
	
	cout << "\n\n\t\t\tNHAP SO LUONG KHACH HANG: "; cin >> m;
	khachhang = new KHACHHANG[m];
	for(int i = 0; i < m; ++i) {
		cout<<"\n KHACH HANG THU "<<i + 1<<" LA: "<<endl;
		cin >> khachhang[i];
	}
	for(int i  = 0; i < m - 1; ++i)	{
		for(int j = 0; j < m - i - 1; ++j)	{
			if(khachhang[j] > khachhang[j+1])
				swap(khachhang[j], khachhang[j+1]);
		}
	}
	cout<<"\n\t\t\t DANH SACH KHACH HANG SAU KHI SAP XEP LA: "<<endl;
	tieudeKH();
	for(int i  = 0; i < m; ++i)	{
		cout<<endl;
		cout<<khachhang[i];
	}
	return 0;
}

