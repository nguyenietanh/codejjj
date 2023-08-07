// Bai 1 Phan so
#include <iostream>
#include <cmath>
using namespace std;

struct phanso
{
	int tus;
	float mau;
};


void nhapPhanso(phanso &ps)
{
	cout<<"Nhap tu so : ";
	cin>>ps.tus;
	do
	{
		cout<<"Nhap mau so : ";
		cin>>ps.mau;
		if(ps.mau==0)
			cout<<"Mau so phai khac 0";
	}while(ps.mau==0);
}
// Ham xuat phan so
void xuatPhanso(phanso &ps)
{
	cout<<" Xuat phan so : ";
	cout<<ps.tus<<"/"<<ps.mau<<endl; 
}


int timUCLN(int a, int b)
{
    while (a!=b)
    {
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
// Ham rut gon phan so
void rutgonPhanso(phanso &ps)
{
    int UCLN=timUCLN(ps.tus, ps.mau);
    ps.tus=ps.tus/UCLN;
    ps.mau=ps.mau/UCLN;
}


int sosanh2Phanso(phanso ps1, phanso ps2)
{
    if((float)ps1.tus/ps1.mau > (float)ps2.tus/ps2.mau)
        return 1;
    else if ((float)ps1.tus/ps1.mau == (float)ps2.tus/ps2.mau)
        return 0;
    else
        return -1;
}
int main()
{
	phanso ps1,ps2;
    nhapPhanso(ps1);
    nhapPhanso(ps2);
    xuatPhanso(ps1);
    xuatPhanso(ps2);
    rutgonPhanso(ps1);
    rutgonPhanso(ps2);
    xuatPhanso(ps1);
    xuatPhanso(ps2);
    if(sosanh2Phanso(ps1,ps2) == 1)
        cout<<" ps1 lon hon ps2 "<<endl;
    else if(sosanh2Phanso(ps1,ps2) == 0)
        cout<<" ps1 lon hon ps2 "<<endl;
    else
        cout<<" ps1 lon hon ps2 "<<endl;
    return 0;

}
