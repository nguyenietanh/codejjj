#include<iostream>
#include<string>
using namespace std;

class NhanVien {
	int manv;
	string ten;
	int thamnien;
	float hesoluong;
	float luong;
	
public:
	void setdata ( int manv, string ten, float thamnien)
	{
		this->manv= manv;
		this->ten = ten;
		this->thamnien;
	}
	
	void tinhhesoluong()
	{
		if(this->thamnien < 12)
			this->hesoluong = 1.92;
		if(this->thamnien >= 12 && this->thamnien < 36)
			this->hesoluong = 2.43;
		if(this->thamnien >= 36 && this->thamnien < 60)
			this->hesoluong = 3.0;
		else 
			this->hesoluong = 4.5;
	}
	
	void tinhluong()
	{
		this->luong= this->hesoluong*1000000;
	}
	
	void showdata()
	{
		cout<<"\nDu lieu nhan vien\n";
		
		cout<<"\nMa nhan vien: "<<this->manv;
		cout<<"\nTen:" <<this->ten;
		cout<<"\nTham nien: "<<this->thamnien;
		cout<<"\nHe so luong: "<<this->hesoluong;
		cout<<"\nLuong: "<<this->luong;	
		cout<<"----------------------"<<endl;
	}	
};

int main()
{
	int n;
	cout<<"Nhap so nhan vien: "; cin>>n;
	
	NhanVien nhanVien[n];
	for( int i=0; i<n; i++)
	{
		int manv;
		string ten;
		int thamnien;
		
		cout<<"Nhap ten nhan vien thu "<<i+1<<":";
		cout<<"\nNhap so ma nhan vien: "; cin>>manv;
		cout<<"\nNhap ten nhan vien: "; cin>>ten;
		cout<<"\nNhap them nien: "; cin>>thamnien;
		cout<<"---------------------------"<<endl;
   		
   		nhanVien[i].setdata(manv, ten, thamnien);
   		nhanVien[i].tinhhesoluong();
   		nhanVien[i].tinhluong();
	}
	for( int i=0; i<n; i++)
	{
		cout<<"Nhan vien thu "<<i+1<<endl;
		nhanVien[i].showdata();
	}
	return 0;	
}

