#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class BN
{
	private:
		char hoten[25];
		char quequan[30];
		int namsinh;
	public:
		void nhap();
		void xuat();
		int GetNs();	
};
void BN::nhap()
{
	cout<<"Nhap ten benh an: ";
	fflush(stdin);
	cin.getline(hoten,25);
	cout<<"Nhap que quan: ";
	fflush(stdin);
	cin.getline(quequan,30);
	cout<<"Nhap nam sinh: "; cin>>namsinh;	
}
void BN::xuat()
{
	cout<<"\nTen: "<<hoten;
	cout<<"\nQue quan: "<<quequan;
	cout<<"\nNam sinh: "<<namsinh;
}
int BN::GetNs()
{
	return namsinh;
}
class BenhAn: public BN
{
	private:
		char tenba[30];
		double tienvp;
	public:
		void nhap1();
		void xuat1();
		int tuoi();
		float Getvp();
};
void BenhAn::nhap1()
{
	BeN::nhap();
	cout<<"Nhap ten benh an: "; fflush(stdin);
	gets(tenba);
	cout<<"Nhap tien vien phi: "; cin>>tienvp;
	cout<<”\nTuoi: “<<tuoi();
	cout<<endl;
}
void BenhAn::xuat1()
{
	BN::xuat();
	cout<<"\nTen benh an: "<<tenba;
	cout<<"\nTien vien phi: "<<tienvp;
	cout<<endl;
}		
int BenhAn::tuoi()
{
	time_t baygio = time(0);
	tm *ltm = localtime(&baygio);
	int tuoi=1900 + ltm->tm_year -GetNs();
	return tuoi;
}
float BenhAn::Getvp()
{
	return tienvp;
}
int main()
{
	BenhAn a[50];
	int n,i;
	do
	{
		cout<<"Nhap so benh an n= ";
		cin>>n;
	}
	while (n<0);
	for (i=0; i<n; i++)
	{
		cout<<"Nhap thong tin thu "<<i+1<<" \n";
		a[i].nhap();
	}
	cout<<"\n------------\n";		
	for (i=0; i<n; i++) {
		cout<<"\n-Benh nhan thu : "<<i+1<<" \n";
		a[i].xuat();
	}
	for (i=0; i<n-1; i++)
	for (int j=i+1; j<n; j++)
	{
		if (a[j].tuoi()>a[i].tuoi())
		{
			BenhAn c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	cout<<"\n------------\n";
	cout<<"\nThong tin benh an giam dan ve tuoi: \n";
	for (i=0; i<n; i++)
	{
		a[i].xuat();
	}
	cout<<"\n------------\n";
	cout<<"\nDanh sach benh nhan tren 50 tuoi: ";
	for (i=0; i<n; i++)
	{
		if (a[i].tuoi()>50)
			a[i].xuat();
	}
	BenhAn vpmax=a[0];
	for (i=0; i<n; i++)
	if (vpmax.Getvp()<a[i].Getvp())
	{
		vpmax=a[i];
	}
	cout<<"\n------------\n";
	cout<<"\nThong tin benh nhan co vien phi cao nhat: ";	
	vpmax.xuat();
	return 0;
}						
