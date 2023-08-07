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
		float tinhchuvi();
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
float HCN::tinhchuvi()
{
	return 2*(d+r);
}
int main()
{
	HCN H[5];
	int i;
	float Maxcv;
	for(int i=0; i<5; i++)
	{
		cout<<"Nhap thong tin hinh chu nhat "<<i+1<<":"<<endl;
		H[i].nhap();
	}
	Maxcv=H[0].tinhchuvi();
	for(int i=1; i<5; i++)
	{
		if(Maxcv < H[i].tinhchuvi())
			Maxcv = H[i].tinhchuvi();
	}
	cout<<"Gia tri lon nhat cua chu vi la: "<<Maxcv;
	return 0;
}















