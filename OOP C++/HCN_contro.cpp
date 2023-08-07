#include<iostream>
#include<conio.h>
using namespace std;
class HCN
{
	private:
		float d,r;
	public:
		void nhap();
		void inthongtin();
};
void HCN::nhap()
{
	cout<<"Nhap chieu dai: "; cin>>d;
	cout<<"Nhap chieu rong: "; cin>>r;
}
void HCN::inthongtin()
{
	cout<<"("<<d<<","<<r<<")";
}
int main()
{
	HCN *p;
	int i, n;
	p= new HCN[n+1];
	cout<<"Nhap n: ";cin>>n;
	cout<<"Nhap thong tin cho hinh chu nhat:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"- Nhap kich thuoc HCN thu "<<i+1<<endl;
		p[i].nhap();
		cout<<endl;
	}
	cout<<"In thong tin hinh chu nhat ";
	for(int i=0; i<n; i++)
	{
		cout<<"\n- Thong tin hinh chu nhat thu "<<i+1;
		p[i].inthongtin();
		cout<<endl;
	}
	return 0;
}







