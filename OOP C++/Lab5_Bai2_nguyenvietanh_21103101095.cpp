#include<iostream>
#include<string.h>
using namespace std;
class Nguoi
{
	private:
		char hoten[30];
		int ns;
	public:
		Nguoi()
		{
			strcpy(hoten," ");
			ns=0;
		}
		Nguoi(char h[], int a)
		{
			strcpy(hoten,h);
			ns=a;
		}
		friend istream & operator >>(istream &is,Nguoi &p)
		{
			fflush(stdin);
			cout<<"Nhap ho ten:"; is.getline(p.hoten,30);
			cout<<"Nhap nam sinh: "; is>p.ns;
			return is;
			}
		void Xuat()
		{
		cout<<"\n Ho ten: "<<hoten;
		cout<<"\n Nam sinh: "<<ns;
		}		
};
class SV
{
private:

char hk[30];
float dtb;

public:
SV()
{
}
SV(char hk1[], float d)
{
strcpy( hk, hk1);
dtb= d;
}
friend istream & operator >>(istream &is, SV &p)
{
is.ignore(1);
cout<<"\n Nhap hanh kiem: "; is.getline(p.hk,30);
cout<<"\n Nhap diem tb: "; is>>p.dtb;
return is;
}
void Xuat()
{
cout<<"\n Hanh Kiem: "<<hk;
cout<<"\n Diem TB: "<<dtb;
}
char *GetHk()
{
return hk;
}
float GetDtb()
{
return dtb;
}
};
class SVTC : public Nguoi, public SV
{
	private:
		float hp;
	public:
	SVTC()
	{
	SVTC(char ht1[], int n1,char hk1[], float diem,
	float hp1): Nguoi(ht1, n1),SV(hk1, diem)
	{
	
	hp=hp1;
	
	}
	float hocbong()
	{
	if(strcmpi(GetHk(),"Tot")==0 && GetDtb()>=9.0)
	
	return 5000000;
	else
	if((strcmpi(GetHk(),"Tot")==0 && GetDtb()>=8.0)|| (strcmpi(GetHk(),"Kha")==0 && GetDtb()>=8.0))
	
	return 3000000;
	
	else
	if((strcmpi(GetHk(),"Tot")==0 && GetDtb()>=7.0)|| (strcmpi(GetHk(),"Kha")==0 && GetDtb()>=7.0))
	
	return 2000000;
	
	return 0;
	
	}
	friend istream & operator >>(istream &pis, SVTC &)
	
	{
	is>>(Nguoi&) p; // goi lai toan tu >>
	is>>(SV&) p;
	cout<<"\n Hoc Phi: "; is>>p.hp;
	}
	
	friend ostream & operator <<(ostream &os, SVTC p)
	
	{
	p.Nguoi::Xuat();
	p.SV::Xuat();
	
	os<<"\n Hoc Phi: "<<p.hp;
	if(p.hocbong()!=0)
	os<<"\n Hoc bong: "<<p.hocbong() <<endl;
	return os;
	}
	
	};
int main()
{
	SVTC sv[30];
		cout<<"\n Nhap Danh Sach Sinh Vien: "<<endl;
	for( int i=0;i<2;i++)
	{
		cout<<"\n Nhap Sinh Vien Thu : "<<i+1<<endl;
		cin>>sv[i];
	}
		cout<<"\n danh sach SVTC da nhap "<<endl;
	for( int i=0;i<2;i++)
	{
	
	cout<<sv[i];
	}
		cout<<"\n\n Sinh vien duoc hoc bong"<<endl;
		for( int i=0;i<2;i++)
		if(sv[i].hocbong()!=0)
 		cout<<sv[i];
		for( int i=0;i<1;i++)
		for( int j=i+1; j<2;j++)
		if(strcmpi(sv[i].GetDtb (),sv[j].GetDtb())>0)
	{
	
		SVTC tg= sv[i];
		sv[i]= sv[j];
		sv[j]=tg;
	
	}
		cout<<"\n danh sach SVTC da sap "<<endl;
		for( int i=0;i<2;i++)
		cout<<sv[i];
	
}
