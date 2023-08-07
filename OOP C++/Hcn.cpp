#include<iostream>
#include<conio>
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
void HCN :: nhap()
{
	cout<<"Nhap chieu dai:"; cin>>d;
	cout<<"Nhap chieu rong:"; cin>>r;
}
void HCN :: inthongtin()
{
	cout<<"("<<d<<","<<r<<")";
}
float HCN:: tinhchuvi()
{
	return 2*(d+r);
}
int main()
{
	HCN h1;
	cout<<"Nhap thong tin Hcn:"<<endl;
	h1.nhap();
	cout<<"In thong tin hinh chu nhat:";
	h1.inthongtin();
	return 0;
}
