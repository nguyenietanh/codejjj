#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class NGUOILD {
	protected: 
		string ma, ht, chucvu;
		float hsl;
	public:
		NGUOILD() {
			ma = "";
			ht = "";
			chucvu = "";
			hsl = 0;
		}
		~NGUOILD() {
			//hamhuy
		};
	void nhap() {
		fflush(stdin);
		cout<<"NHAP MA NHAN VIEN: "; getline(cin, ma);
		cout<<"NHAP HO TEN: "; getline(cin, ht);
		cout<<"NHAP CHUC VU: "; getline(cin, chucvu);
		cout<<"NHAP HE SO LUONG: "; cin>>hsl;
	}
	void xuat() {
		cout<<left<<setw(10)<<ma<<setw(25)<<ht<<setw(10)<<chucvu<<setw(10)<<hsl;
	}
};
class LANHDAO : public NGUOILD {
	private:
		int nam;
	public:
		LANHDAO() : NGUOILD() {
			nam = 0;
		}
		~LANHDAO() {
			//hamhuy
		};
	friend istream &operator >> (istream &is, LANHDAO &LD) {
		LD.nhap();
		fflush(stdin);
		cout<<"NHAP SO NAM CONG TAC: "; is>>LD.nam;
	}
	string tinhtien() {
		if(chucvu == "GD")
			return "500$";
		else if(chucvu == "TP")
			return "300$";
		else
			return "200$";
	}
	bool operator > (LANHDAO &LD) {
		return(this -> nam > LD.nam);
	}
	friend ostream &operator << (ostream &os, LANHDAO &LD) {
		LD.xuat();
		os<<left<<setw(10)<<LD.nam<<setw(12)<<LD.tinhtien();
	}
};
void tieudeNLD() {
	cout<<left<<setw(10)<<"MA NV"<<setw(25)<<"HO TEN"<<setw(10)<<"CHUC VU"<<setw(10)<<"HS LUONG";
}
void tieudeLD() {
	tieudeNLD();
	cout<<left<<setw(10)<<"NAM"<<setw(12)<<"PHU CAP";
}
int main() { 
	int n;
	NGUOILD *nguoild;
	LANHDAO *lanhdao;
	cout<<"\n\n\t\t\t NHAP SO NGUOI LAO DONG :"; cin>>n;
	nguoild = new NGUOILD[n];
		for(int i = 0; i < n; ++i) {
			cout<<"\n THONG TIN NGUOI LAO DONG THU "<<i + 1<<" LA:"<<endl;
			nguoild[i].nhap();
		}
		cout<<"\n\n\t\t\t DANH SACH NGUOI LAO DONG LA: \n";
		tieudeNLD();
		for(int i = 0; i < n; ++ i) {
			cout<<endl;
			nguoild[i].xuat();
		}
		cout<<"\n\n\t\t\tNHAP SO LANH DAO :"; cin>>n;
		lanhdao = new LANHDAO[n];
		for(int i = 0; i < n; ++i) {
			cout<<"\n THONG TIN LANH DAO THU "<<i + 1<<" LA:"<<endl;
			cin>>lanhdao[i];
		}
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n - i - 1; ++j) {
				if(lanhdao[j] > lanhdao[j + 1])
					swap(lanhdao[j], lanhdao[j+1]);
			}
		}
		cout<<"\n\n\t\t DANH SACH LANH DAO THEO THU THU TANG DAN LA: \n";
		tieudeLD();
		for(int i = 0; i < n; ++ i) {
			cout<<endl<<lanhdao[i];
		}
	return 0;
}

