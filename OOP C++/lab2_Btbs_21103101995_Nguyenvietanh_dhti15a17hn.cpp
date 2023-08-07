#include<iostream>
#include<math.h>

using namespace std;
struct date
{
	int ngay=0, thang =0, nam =0;
	//cout<<"Ngay sinh"<<ngay<<"/"<<thang<<"/"<<"nam";
};
class CN
{
	private:
		int ms;
		char hoten[30];
		date ns;
		float hsl;
	public:
		CN()
		{
			ms=0;
			this->hoten=" ";
			hsl=0;	
		}
		CN(int ms, char hoten, struct date, float hsl)
		{
			this->ms=ms;
			this->hoten=hoten;
			this->hsl=hsl;
		}
		void nhap();
		void in();
		float luong();
		float tuoi();
};

void CN::nhap()
{
	cout<<"Nhap ma so cong nhan: "; cin>>ms;
	cout<<"Nhap ho ten nhan vien: "; cin.getline(hoten, 29);
	cout<<"Ngay sinh: ";cin>>ns.ngay>>ns.thang>>ns.nam;
	cout<<"He so luong: "<<hsl;
}
float CN::luong()
{
	int Luong=0;
	Luong=hsl*15000000;
	cout<<"Luong cong nhan la: "<<Luong;
}
float CN::tuoi()
{
	int Tuoi=0;
	Tuoi= 2023 - ns.nam;
	cout<<Tuoi;	
}
int main()
{
	int n;
	cout<<"Nhap so cong nhan:";cin>>n;
	CN *a;
	a=new CN[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap thong tin thu:"<<i+1;
		a[i].nhap();
		
	}
	cout<<"Thong tin cong nhan";
	for(int i=0;i<n;i++)
	{
		a[i].in();
		cout<<"Luong cua nhan vien thu:"<<i+1;
		a[i].luong();
		cout<<"Tuoi cua cong nhan thu:"<<i+1;
		a[i].tuoi();
		return 0;
	}
	
}