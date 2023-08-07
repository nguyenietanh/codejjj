#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class Pet
{
	private:
		int tuoi;
		float cannang;
	public:
		friend void operator >> (Pet &p, istream &is)
		{
			cout<<"\nTuoi cua Pet: ";
			is>>p.tuoi;
			cout<<"\nCan nang cua Pet: ";
			is>>p.cannang;
		}
		friend void operator << (Pet p, ostream &os)
		{
			os<<p.tuoi<<"\n"<<p.cannang<<"\n";
		}
};
class Dog:public Pet
{
	private:
		char maumat[30];
		char sothich[40];
	public:
		friend void operator >> (Dog &d, istream &iss)
		{
			
			fflush(stdin);
			cout<<"\nMau mat cua Dog: ";
			iss.getline(maumat,30);
			fflush(stdin);
			cout<<"\nSo thich cua Dog: ";
			iss.getline(sothich,40);
		}
		friend void operator << (Pet p, ostream &os)
		{
			os<<p.tuoi<<"\n"<<p.cannang<<"\n";
		}		
};
int main()
{
	
	dog d[50];
	int n;
	cout<<"\n nhap so con cho:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n nhap con cho thu:"<<i+1<<endl;
		cin>>d[i];
	}
	d[i].in();
	tieude();
	for(int i=0;i<n;i++)
	{
		cout<<d[i];
	}
	return 0;
}
