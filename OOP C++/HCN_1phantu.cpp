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
	HCN h1;
	cout<<"Nhap thong tin hinh chu nhat: "<<endl;
	h1.nhap();
	cout<<"In thong tin hinh chu nhat: ";
	h1.inthongtin();
	return 0;
}
