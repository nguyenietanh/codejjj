#include <iostream>
#include <iomanip>
using namespace std;

class NAMGIOI
{
	private:
		string HoTen;
		int Tuoi;
		string CMND;
	public:
  		NAMGIOI(string hoten = "", int tuoi = 0, string cmnd = "")
  		{
			this -> HoTen = hoten;
			this -> Tuoi = tuoi;
			this -> CMND = cmnd;
		}
	~NAMGIOI()
	{
	   //hamhuy
	}
void Nhap()
{
	   fflush(stdin);
	   cout << "Ho va ten: ";
	   getline(cin, HoTen);
	   cout << "Tuoi: ";
   do
	{
	    cin >> Tuoi;
	    if(Tuoi < 1)
	     cout << "TUOI PHAI LON HON 0!\nNHAP LAI: ";
    } while(Tuoi < 1);
   		fflush(stdin);
   		cout << "CMND: ";
   		getline(cin, CMND);
}
void Xuat()
{
   cout << left << setw(30) << HoTen << setw(6) << Tuoi << setw(10) << CMND;
}
};

class KHACHHANG : protected NAMGIOI
{
	private:
		string MaSoKH;
		int SoLanMua;
	public:
		KHACHHANG(string hoten = "", int tuoi = 0, string cmnd = "", string masokh = "", int solanmua = 0) : NAMGIOI(hoten, tuoi, cmnd)
		{
			this -> MaSoKH = masokh;
			this -> SoLanMua = solanmua;
		}
	~KHACHHANG()
	{
   //hamhuy
	}
	friend istream &operator >> (istream &is, KHACHHANG &kh);
	friend ostream &operator << (ostream &os, KHACHHANG &kh);
	void PhanLoai();
	bool operator > (KHACHHANG &kh);
};

istream &operator >> (istream &is, KHACHHANG &kh)
{
	kh.NAMGIOI::Nhap();
	fflush(stdin);
	cout << "Ma so khach hang: ";
	is >> kh.MaSoKH;
	cout << "So lan mua: ";
	is >> kh.SoLanMua;
}

ostream &operator << (ostream &os, KHACHHANG &kh)
{
	kh.NAMGIOI::Xuat();
	os << left << setw(10) << kh.MaSoKH << setw(10) << kh.SoLanMua;
}

bool KHACHHANG :: operator > (KHACHHANG &kh)
{
 	return (SoLanMua > kh.SoLanMua);
}

void tieudeNG()
{
	cout << left << setw(4) << "STT" << setw(30) << "HO VA TEN" << setw(6) << "TUOI" << setw(10) << "CMND";
}

void tieudeKH()
{
	tieudeNG();
	cout << left << setw(10) << "MA SO KH" << setw(10) << "SO LAN MUA";
}

int main()
{
	int n, m;
	cout << "So luong Nam gioi: ";
	{
		cin >> n;
		if(n < 1)
		cout << "So luong phai >= 1!\n";
} while(n < 1);
	NAMGIOI namgioi[n];
	cout << "\n\t\tNHAP THONG TIN CHO " << n << " NAM GIOI\n";
	for(int i = 0; i < n; ++i)
	{
		cout << "\n\tNam gioi thu " << i+1 << endl;
		i[namgioi].Nhap();
	}
	cout << "\n\t\tDANH SACH " << n << " NAM GIOI\n";
	tieudeNG();
	for(int i = 0; i < n; ++i)
	{
		cout << endl << left << setw(4) << i+1;
		i[namgioi].Xuat();
	}
	cout << "\nSo luong Khach hang: ";
	{
		cin >> m;
		if(m < 1)
	   	cout << "So luong phai >= 1!\n";
	} while(m < 1);
	 	KHACHHANG khachhang[m];
	 	cout << "\n\t\tNHAP THONG TIN CHO " << m << " KHACH HANG\n";
	 	for(int i = 0; i < m; ++i)
	 	{
	  		cout << "\n\tKhach hang thu " << i+1 << endl;
	  		cin >> i[khachhang];
	 	}
	 
	cout << "\n\t\tDANH SACH " << m << " KHACH HANG\n";
	tieudeKH();
	for(int i = 0; i < m - 1; ++i)
	{
		for(int j = 0; j < m - i - 1; ++j)
		{
	   		if(khachhang[j] > khachhang[j + 1])
	   		{
	    		swap(khachhang[j+1], khachhang[j]);
	   		}
	  }
	}
	for(int i = 0; i < m; ++i)
	{
	    cout << endl << left << setw(4) << i+1;
	    cout << khachhang[i] << endl;
	}
	return 0;
}
