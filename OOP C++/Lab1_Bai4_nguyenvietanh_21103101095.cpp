#include<iostream>
using namespace std;
class vector3
{
	private:
		int a,b,c;
	public:
		vector3()
		{
			a=0; b=0; c=0;
		}
		void nhap();
		void xuat();
		void cong(vector3 q);
		~vector3(){}		
};
void vector3::nhap()
{
	cout<<"Nhap lan luot toa do vector: ";
	cin>>a;
	cin>>b;
	cin>>c;
}
void vector3::xuat()
{
	cout<<"("<<a<<","<<b<<","<<c<<")";
}
void vector3::cong(vector3 q)
{
	a+=q.a;
	b+=q.b;
	c+=q.c;
}
int main()
{
	vector3 q,e,z;
	q.nhap();
	e.nhap();
	z=q;
	z.cong(e);
	q.xuat();
	cout<<"+";
	e.xuat();
	cout<<"=";
	z.xuat();
	cout<<endl;
	return 0;
}
