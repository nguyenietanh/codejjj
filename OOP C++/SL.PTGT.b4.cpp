#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class ptgt
{
    protected:
        char hang[30];
        int nam;
        int gia;
    public:
        ptgt()
		{
            strcpy(hang,""); 
            nam=0;
            gia=0;
        }
~ptgt(){};
void nhap()
{
    fflush(stdin);
    cout<<"Nhap  hang san xuat :"; cin.getline(hang,30);
    cout<<"Nhap nam san xuat: "; cin>>nam;
    cout<<"Nhap gia chua thue: "; cin>>gia;
}
void xuat()
{
    cout<<"\n"<<setw(12)<<hang<<setw(20)<<nam<<setw(20)<<gia;
}
};
class xekhach: public ptgt
{
    private:
        float tuyen;
		float ghe;
    public:
        xekhach()
        {
            tuyen=0;
            ghe=0;
        }
        ~Tulanh(){};
    friend void operator >>(istream &is, xekhach &xk)
    {
        xk.nhap();
        fflush(stdin);
        cout<<"Nhap vao tuyen :"; cin>>xk.tuyen;
        cout<<"Nhap vao ghe :" ; cin>>xk.ghe;
    }
    float giaxe()
    {
    	return ( gia + gia*0.08);
	}
    bool operator < (int a)
    {
        if(nam< a)
        return true;
        else
        return false;
    }
    bool operator > (int b)
    {
        if(ghe > b)
        return true;
        else
        return false;
    }
    friend void operator << ( ostream &os, xekhach &xk)
    {
        xk.xuat();
        fflush(stdin);
        os<<setw(12)<<xk.tuyen<<setw(20)<<xk.ghe<<setw(20)<<xk.giaxe;
    }
};
void tieude()
{
    cout<<"\n"<<setw(12)<<"Hang san xuat"<<setw(20)<<"Nam san xuat"<<setw(20)<<"Gia chua thue";
}
void tieude1()
{
    tieude();
    cout<<setw(20)<<"So tuyen"<<setw(20)<<"So ghe"<<setw(20)<<"Gai sau thue ";
}
int main()
{
    ptgt *a;
    int n;
    cout<<"Nhap vao so ptgt:";
    a = new ptgt[n];
    for(int i =0;i<n;i++)
    {
        cout<<"Nhap thong tin ptgt thu"<<i+1;
        a[i].nhap();
    }
    cout<<"Thong tin ptgt can nhap ";
    tieude();
    for(int i =0;i<n;i++)
    {
        a[i].xuat();
    }
    xekhach *b;
    cout<<"\nNhap vao so xe khach";
    b = new xekhach[n];
    for(int i =0;i<n;i++)
    {
        cout<<"\nNhap thong tin xe khach thu"<<i+1;
        cin>>b[i];
    }
    cout<<"\nThong tin xe khach can nhap ";
    tieude1();
    for(int i =0;i<n;i++)
    {
        cout<<b[i];
    }
    cout<<"\nDanh sach cac xe co so ghe > 29 ";
    tieude1();
    for(int i =0;i<n;i++)
    {
        if(b[i]>29)
        {
            cout<<b[i];
        }
    }
   getch();
   return 0; 
}
