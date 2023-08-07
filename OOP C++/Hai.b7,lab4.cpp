#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class pet
{
	protected:
		int tuoi;
		float kg;
	public:
		pet(){
		}
		void nhap()
		{
			cout<<"\n tuoi :";
			cin>>tuoi;
			cout<<"\n kg :";
			cin>>kg;
		}
		void in()
		{
			cout<<"Tuoi "<<tuoi;
			cout<<"Can nang "<<kg;
		}
};
class dog:public pet
{
	private:
		char color[30];
		char sthick[30];
	public:
		friend istream& operator >> (istream& is,dog& d)
		{
			pet::nhap();
			fflush(stdin);
			cout<<"\n mau mat : "; 
			is.getline(d.color,30);
		//	fflush(stdin);
			cout<<"\n so thich : ";
			is.getline(d.sthick,30);
			return is;
		}
		friend ostream& operator << (ostream& os,dog d)
		{
			pet::in();
			os<<"Mau mat "<<d.color
			  <<"So thich "<<d.sthick;
			return os;
		}

};

//void tieude()
//{
//	cout<<"tuoi"<<setw(15)<<"can nang"<<setw(15)<<"mau mat"<<setw(15)<<"so thich"<<endl;
//}
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
