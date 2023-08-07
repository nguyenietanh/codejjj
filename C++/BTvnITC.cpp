#include<iostream>
#include<iomanip>
using namespace std;

typedef struct
{
	char ten_monhoc[30];
	float dtb_monhoc;
	int stc_monhoc;
	float hs4;
	float dt_monhoc;
	float tichluy;
	int stc;
}sinhvien;

void nhapds(sinhvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin mon hoc thu : "<<i+1;
		cin.ignore();
		cout<<"\nNhap ten mon thu "<< i+1 << " : ";
		cin.getline(a[i].ten_monhoc,30);
		cout<<"\nDiem trung binh mon hoc: ";cin>>a[i].dtb_monhoc;
		cout<<"\nSo tin chi: ";cin>>a[i].stc_monhoc;
		
	}	
}

void inds(sinhvien a[],int n)
{   
	cout<<"Diem trung binh cac mon"<<endl;
	cout<<setw(25)<<"Ten mon hoc";
	cout<<setw(15)<<"Diem trung binh";
	cout<<setw(15)<<"So tin chi";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setw(25)<<a[i].ten_monhoc;
		cout<<setw(15)<<a[i].dtb_monhoc;
		cout<<setw(15)<<a[i].stc_monhoc;
		cout<<endl;
	}
}
void tong_stc(sinhvien a[],int n)
{
	for (int i = 0 ; i < n ; i++)
	{
        a[i].stc += a[i].stc_monhoc ;
    }
}

void dtb_tichluy(sinhvien a[],int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		a[i].tichluy =(float)((a[i].dtb_monhoc * a[i].stc_monhoc) / (a[i].stc));
	}
}
void diem_hs4(sinhvien a[],int n)
{
	cout<<"Danh sach sv thang diem he so 4"<<endl;
	cout<<setw(15)<<"Diem trung binh";
	cout<<setw(15)<<"So tin chi";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i].dtb_monhoc >= 9)
			a[i].hs4 = 4.0;
		else if (a[i].dtb_monhoc >= 8.5)
			a[i].hs4 = 3.7;
		else if (a[i].dtb_monhoc >= 8.0)
			a[i].hs4 = 4.0;
		else if (a[i].dtb_monhoc >= 7.5)
			a[i].hs4 = 3.5;
		else if (a[i].dtb_monhoc >= 7.0)
			a[i].hs4 = 3.0;
		else if (a[i].dtb_monhoc >= 6.5)
			a[i].hs4 = 2.5;
		else if (a[i].dtb_monhoc >= 6.0)
			a[i].hs4 = 2.0;
		else if (a[i].dtb_monhoc >= 5.5)
			a[i].hs4 = 1.5;
		else if (a[i].dtb_monhoc >= 4.0)
			a[i].hs4 = 1.0;		
		else
			a[i].hs4 == 0.0;		
	}	
}
//void xeploai(sinhvien a[],int n)
//{
//	cout<<"Xep loai :";
//	if( diem_hs4(a,n) > 3.6 && diem_hs4(a,n) < 4.0)
//		cout<<"Xuat sac ";
//	else if( diem_hs4(a,n) > 3.59 && diem_hs4(a,n) < 3.20 )
//		cout<<"Gioi ";
//	else if ( diem_hs4(a,n) > 3.19 && diem_hs4(a,n) < 2.50 )
//	cout<<"Kha ";
//		else if (diem_hs4(a,n) > 2.49 && diem_hs4(a,n) < 2.50 )
//	cout<<"Trung Binh ";
//	else if (diem_hs4(a,n) <2.00 )
//		cout<<"Trung Binh Yeu ";
//	else 
//		cout<<"Kem ";
//	
//}

int main()
{
	int n;
	sinhvien sv[50];
	cout<<"Nhap so mon: "; cin>>n;
	nhapds(sv,n);
	inds(sv,n);
//	diem_hs4(sv,n);	
//	diem_hs10(sv,n);
	return 0;
}

