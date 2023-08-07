#include<iostream>
using namespace std;

class chuyenxe
{
	int msc;
	char name[30];
	public:
		virtual void nhap()
		{
			cout<<"\n ma so chuyen:";
			cin>>msc;
			fflush(stdin);
			cout<<"\n ten tai xe:";
			cin.getline(name,30);
		}
		virtual void xuat()
		{
			cout<<"\n ma so chuyen:"<<msc;
			cout<<"\n ten tai xe:"<<name;
		} 
};
class noithanh : public chuyenxe
{
	int sotuyen;
	long int sokm;
	double doanhthu1;
	public:
		void nhap()
		{
			chuyenxe::nhap();
			cout<<"\n so tuyen :";
			cin>>sotuyen;
			cout<<"\n so km di duoc:";
			cin>>sokm;
			cout<<"\n doanh thu:";
			cin>>doanhthu1;
		}
		void xuat()
		{
			chuyenxe::xuat();
			cout<<"\n so tuyen:"<<sotuyen;
			cout<<"\n so km di duoc:"<<sokm;
			cout<<"\n doanh thu:"<<doanhthu1;
		}
		double getdoanhthu()
		{
			return doanhthu1;
		}
};
class ngoaithanh : public chuyenxe
{
	char to[50];
	int sodate;
	double doanhthu2;
	public:
		void nhap()
		{
			chuyenxe::nhap();
			fflush(stdin);
			cout<<"\n noi den:";
			cin.getline(to,50);
			cout<<"\n so ngay di:";
			cin>>sodate;
			cout<<"\n doanh thu:";
			cin>>doanhthu2;
		}
		void xuat()
		{
			chuyenxe::xuat();
			cout<<"\n noi den:"<<to;
			cout<<"\n so ngay di:"<<sodate;
			cout<<"\n doanh thu:"<<doanhthu2;
		}
		double _getdoanhthu()
		{
			return doanhthu2;
		}
};
int main()
{
	noithanh a[500];
	int n;
	cout<<"\n so xe noi thanh:"; cin>>n;
	cout<<"\n nhap cac chuyen noi thanh"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"\n xe thu:"<<i+1<<endl;
		a[i].nhap();	
	}
	cout<<"\n cac chuyen noi thanh:";
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	int s=0;
	for(int i=0;i<n;i++)
	{
		s = s + a[i].getdoanhthu();
	}
	cout<<"\n tong doanh thu cac xe noi thanh = "<<s;
	ngoaithanh b[500];
	int m;
	cout<<"\n So xe ngoai thanh:"; cin>>m;
	cout<<"\n nhap cac chuyen ngoai thanh"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<"\n xe thu:"<<i+1<<endl;
		b[i].nhap();	
	}
	cout<<"\n cac chuyen ngoai thanh:";
	for(int i=0;i<m;i++)
	{
		b[i].xuat();
	}
	int w=0;
	for(int i=0;i<n;i++)
	{
		w = w + b[i]._getdoanhthu();
	}
	cout<<"\n tong doanh thu cac xe ngoai thanh = "<<w;
	return 0;
}
