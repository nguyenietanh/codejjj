#include<iostream>
using namespace std;
class HCN
{
	float d,r;
	public:
	HCN()
	{
		d=0, r=0;
	}
	HCN(float d, float r)
	{
		this->d=d;
		this->r=r;
	}
	void nhap()
	{
		cout<<"Chieu dai";cin>>d;
		cout<<"Chieu rong";cin>>r;
	}
	void in()
	{
		cout<<"("<<d<<","<<r<<")";
	}
	float dientich()
	{
		return d*r;
	}
	float chuvi()
	{
		return 2*(d+r);
	}
};
int main()
{
	HCN H[50];
	int n;
	cout<<"Moi nhap so phan tu cua mang: ";cin>>n;
	for(int i=0; i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<endl;
		H[i].nhap();
	}
	for(int i=0; i<n;i++)
	H[i].in();
	float CVMax =H[0].chuvi();
	int ChiSoCVMax=0;
	for(int i=1; i<n;i++)
	if(CVMax<H[i].chuvi())
	{
		CVMax=H[i].chuvi();
		ChiSoCVMax=i;
	}
	cout<<"HCN co chu vi lon nhat: ";
	H[ChiSoCVMax].in();
	float Mindt;
	int ChiSodt;
	Mindt=H[0].dientich();
	for(int i=1; i<n; i++)
	{
		Mindt=H[i].dientich();
		ChiSodt=i;
	}
	cout<<"HCN co dien tich lon nhat la: ";
	H[ChiSodt].in();
	cout<<"Co dien tich la: "<<Mindt<<endl;	
	return 0;
}
