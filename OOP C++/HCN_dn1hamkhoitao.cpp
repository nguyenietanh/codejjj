#include<iostream>
#include<conio.h>
using namespace std;
class HCN
{
	private:
		float d,r;
	public:
		HCN (float dx,float rx);
		void inthongtin();
};
HCN ::HCN(float dx, float rx)
{
	d=dx;
	r=rx;
}
void HCN::inthongtin()
{
	cout<<"("<<d<<","<<r<<")";
}
int main()
{
	HCN h1(30,20);
	cout<<"In thong tin hinh chu nhat: ";
	h1.inthongtin();
	return 0;
}
