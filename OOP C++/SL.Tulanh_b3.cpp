#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Dienlanh
{
    protected:
        char mh[30];
        char ten[30];
        float dongia;
        int kg;
    public:
        Dienlanh()
		{
            strcpy(mh,"");
            strcpy(ten,"");
            dongia=0;
            kg=0;
        }
~Dienlanh(){};
void nhap()
{
    fflush(stdin);
    cout<<"Nhap ma hang :"; cin.getline(mh,30);
    cout<<"Nhap ten hang: "; cin.getline(ten, 30);
    cout<<"Nhap don gia: "; cin>>dongia;
    cout<<"Nhap can nang: "; cin>>kg;
}
void xuat()
{
    cout<<"\n"<<setw(12)<<mh<<setw(20)<<ten<<setw(20)<<dongia<<setw(20)<<kg;
}
};
class Tulanh: public Dienlanh
{
    private:
        float dt;
		float da;
    public:
        Tulanh()
        {
            dt=0;
            da=0;
        }
        ~Tulanh(){};
    friend void operator >>(istream &is, Tulanh &tl)
    {
        tl.nhap();
        fflush(stdin);
        cout<<"Nhap vao dung tich :"; cin>>tl.dt;
        cout<<"Nhap vao dien ap :" ; cin>>tl.da;
    }
    int tinhtien()
    {
        if(kg>100)
            return 0;
        else if( kg>50 && kg<100)
            return 1;
        else if(kg<50) 
            return 2; 
    }
    bool operator ==(int a)
    {
        if(dt==a)
        return true;
        else
        return false;
    }
    friend void operator << ( ostream &os, Tulanh &tl)
    {
        tl.xuat();
        fflush(stdin);
        os<<setw(12)<<tl.dt<<setw(20)<<tl.da<<setw(20)<<tl.tinhtien();
        if(tl.tinhtien()==0)
            os<<"Tien van chuyen la 500k";
        else if(tl.tinhtien()==1)
            os<<"Tien van chuyen la 300k";
        else if(tl.tinhtien()==2)
            os<<"Tien van chuyen la 200k";
    }
};
void tieude()
{
    cout<<"\n"<<setw(12)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"Don gia"<<setw(20)<<"Khoi luong";
}
void tieude1()
{
    tieude();
    cout<<setw(20)<<"Dung tich"<<setw(20)<<"Ten hang"<<setw(20)<<"Dien ap"<<setw(20)<<"Tien van chuyen";
}
int main()
{
    Dienlanh *a;
    int n;
    cout<<"\nNhap vao so san pham:";
    a = new Dienlanh[n];
    for(int i =0;i<n;i++)
    {
        cout<<"\nNhap thong tin san pham thu"<<i+1;
        a[i].nhap();
    }
    cout<<"\nThong tin san pham can nhap ";
    tieude();
    for(int i =0;i<n;i++)
    {
        a[i].xuat();
    }
    Tulanh *b;
    cout<<"\nNhap vao so tu lanh";
    b = new Tulanh[n];
    for(int i =0;i<n;i++)
    {
        cout<<"\nNhap thong tin tu lanh thu"<<i+1;
        cin>>b[i];
    }
    cout<<"\nThong tin tu lanh can nhap ";
    tieude1();
    for(int i =0;i<n;i++)
    {
        cout<<b[i];
    }
    cout<<"\nDanh sach cac tu lanh co dung tich 500 lit ";
    tieude1();
    for(int i =0;i<n;i++)
    {
        if(b[i]==500)
        {
            cout<<b[i];
        }
    }
   getch();
   return 0; 
}
