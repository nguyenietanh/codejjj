#inlcude<iostream>
using namespace std;
class Basic
{
	protected:
		int thoiGianGoi;
		int donGiaGoi;
		int luuLuong;
		int donGiaInternet;
		
	public:
		virtual int cuocDienThoai();
		virtual int cuocInternet();
		virtual void nhap();
		virtual void xuat();
		virtual int cuocTong();
		void suDung(int, int);
	Basic();
	virtual ~Basic();

};
Basic::Basic()
{
	thoiGianGoi = 0;
	donGiaGoi = 1000;
	luuLuong = 0;
	donGiaInternet = 200;
}
Basic::~Basic(){}
	
int Basic::cuocDienThoai()
{	
	return thoiGianGoi * donGiaGoi;	
}

int Basic::cuocInternet()
{	
	return luuLuong * donGiaInternet;	
}

int Basic::cuocTong()
{
	return 1.1 * (cuocInternet() + cuocDienThoai());
}

void Basic::nhap()
{
	cout<<"- Nhap thoi gian goi: "; cin>>thoiGianGoi;
	cout<<"- Nhap luu luong su dung: "; cin>>luuLuong;
}

void Basic::xuat()
{	
	cout << "\t - Ten goi cuoc: Basic";	
}

void Basic::suDung(int _thoiGianGoi, int _luuLuong)
{
	thoiGianGoi += _thoiGianGoi;
	luuLuong += _luuLuong;
	}
	
class DataFree: public Basic
{
	int cuocThueBao;
	int NguongMp;
	public:
	DataFree();
	int cuocInternet();
	void nhap();
	void xuat();
	int cuocTong();
	~DataFree();
};
	DataFree::DataFree() {}
	DataFree::~DataFree() {}
	
int DataFree::cuocInternet()
{	
	return cuocThueBao;	
}

void DataFree::nhap()
{
	Basic::nhap();
	cout << "- Nhap cuoc thue bao: ";
	cin >> cuocThueBao;
	cout << "- Nhap nguong luu luong mien phi: ";
	cin >> NguongMp;	
}

void DataFree::xuat()
{
	cout << "\t -Ten goi cuoc: DataFree";	
}

int DataFree::cuocTong()
{
	return 1.1 * (cuocInternet() + Basic::cuocDienThoai());
}

class DataFix: public Basic
{
	public:
		int cuocDienThoai();
		int cuocInternet();
		void xuat();
		int cuocTong();
		~DataFix();		
};
	DataFix::~DataFix() {}
	
int DataFix::cuocDienThoai()
{	
	return Basic::cuocDienThoai() * 0.9;
}

int DataFix::cuocInternet()
{	
	return 1000000;	
}

int DataFix ::cuocTong()
{
	return 1.1 * (cuocInternet() + cuocDienThoai());	
}

void DataFix::xuat()
{
	cout << "\t - Ten goi cuoc: DataFix";
}

class KhachHang
{
	private:
		char hoTen[30];
		char cmnd[20];
		char diaChi[40];
		Basic *goiCuoc;	
	public:	
		KhachHang();
		~KhachHang();
		void nhap();
		void xuat();
		int tinhCuocCuoithang();
		void suDung(int, int);
	
};
class DanhSachHopDong
{
	private:
		vector <KhachHang*> dsKhachHang;
	public:
		void dangKy();
		void thongBaoTienCuoc();
		DanhSachHopDong();
		~DanhSachHopDong();
};
int main()
{
	
	HopDong *b[100];
	int n;
	cout<<"\n so nguoi:"; cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n thong tin nguoi thu:"<<i+1<<endl;
		b[i]->nhap();
		Basic *a[100];
	int k=0,chon;
	while(1)
	{
		cout<<"\n lua chon cac goi cuoc."<<endl;
		cout<<"\n*basic/datefree/datefix/thoat (1/2/3/4):";
		cin>>chon; cin.get();
		if(chon==1) a[k] = new Basic();
		if(chon==2) a[k] = new DataFree();
		if(chon==3) a[k] = new DataFix();
		if(chon==4) break;
		a[k]->nhap(); k++;
	}
	}
	return 0;
}
