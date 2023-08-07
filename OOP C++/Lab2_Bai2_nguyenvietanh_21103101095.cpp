#include<iostream>
using namespace std;
class PS
{
	private:
		int ts,ms;
	public:
		PS(int ts=0, int ms=0)
		{
			this->ts=ts;
			this->ms=ms;
		}
		~PS(){}
		PS rutgon();
		void xuat();
		void nhap();
		PS tich(PS ps1);
		PS tong(PS ps1);		
};
int UCLN(int a, int b)
{
	if(a%b!=0)
		return UCLN(b,a%b);
	else 
		return b;
}
PS PS::rutgon()
{
	PS ps;
	int UC=UCLN(this->ts,this->ms);
	ps.ts=this->ts/UC;
	ps.ms=this->ts/UC;
	return ps;
	
}
void PS::xuat()
{
	cout<<this->ts<<"/"<<this->ms<<endl;
}
void PS::nhap()
{
	cout<<"Nhap tu so: ";cin>>ts;
	cout<<"Nhap mau so: ";cin>>ms;
}
PS PS::tich(PS ps1)
{
	PS ps;
	ps.ts= this->ts*ps1.ms*this->ms*ps1.ts;
	ps.ms= this->ms*ps1.ms*this->ms*ps1.ms;
	return ps;	
}
int main()
{
	int n;
	cout<<"Nhap so luong phanso thu "; cin>>n;
	PS *p=new PS[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan so thu "<<i+1;
		p[i].nhap();
		p[i].rutgon();
	}
	PS tong,tich;
	tong=p[0];
	tich=p[0];
	for(int i=0;i<n;i++)
	{
		tong= tong.tong(p[i]);
		tich= tich.tich(p[i]);
	}
	cout<<"Tong cac phan so la:";
	tong.xuat();
	cout<<"Tichs cac phan so la: ";
	tich.xuat();
	return 0;
}

