#include<iostream>
using namespace std;
class HCN
{
	private:
		float d,r;
	public:
		HCN (float d, float r)
		{
			this->d=d;
			this->r=r;
		}
		float tinhchuvi();
		friend float tinhdientich(HCN h);
		void inthongtin();
};
void HCN::inthongtin()
{
	cout<<"("<<d<<","<<r<<")";
}
float HCN::tinhchuvi()
{
	return 2*(d+r);
}
float tinhdientich(HCN h)
{
	return h.d*h.r;
}
int main()
{
	HCN h(20,15);
	cout<<"In thong tin hcn: ";
	h.inthongtin();
	cout<<"Chu vi hcn: ";
	h.tinhchuvi();
	cout<<"Dien tich hcn: ";
	tinhdientich(h);
	return 0;	
}

















