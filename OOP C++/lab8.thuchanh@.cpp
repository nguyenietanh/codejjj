#include<iostream>
using namespace std;
class Quay
{
	private:
		int stt;
		int dt;
	protected:
		double DT;
		virtual double tinhthueDT()=0;
		virtual double tinhtienDV()
		{
			return 0;
		}
		double tinhtienthueQuay()
		{
			return 40000000*dt;
		}
	public:
		virtual double tinhtienphaiDong()
		{
			return tinhtienthueQuay() +tinhtienDV +tinhthueDT();
		}
	virtual void nhap(istream & is)
	{
		cout<<"Nhap so thu tu: "; is>>stt;
		cout<<"Nhap dien tich: "; is>>dt;
		cout<<"Nhap doanh thu: "; is>>DT;
	}	
	virtual void xuat()
	{
		cout<<"\nNhap so thu tu: "<<stt;
		cout<<"\nNhap dien tich: "<<dt;
		cout<<"\nNhap doanh thu: "<<DT;
	}
	virtual int check()=0;
	int Getdt()
	{
		return dt;
	}		
};
class Quaythucpham: public Quay
{
	
}




























































































