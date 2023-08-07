#include<iostream>
using namespace std;
class dathuc3
{
	private:
		int a,b,c;
	public:
		dathuc3(int da=0, int db=0, int dc=0)
		{
			a=da; b=db; c=dc;
		}
	~dathuc3(){}
	void in();
	dathuc3 tong(dathuc3 dt);
};
void dathuc3::in()
{
	cout<<a<<"x^2";
	if(b>=0)
		cout<<"+"<<b<<"x";
	else 
		cout<<"-"<<b<<"x";
	if(c>=0)
		cout<<"+"<<c;
	else 
		cout<<c;
}
int dathuc3::tong(dathuc3 dt)
{
	dathuc3 t;
	t.a=a+dt.a;
	t.b=b+dt.b;
	t.c=c+dt.c;
	return t;
}
int main()
{
	dathuc3 dt1(6,8,4);
	dathuc3 dt2(3,9,3);
	dathuc3 tong2;
	tong2=dt1.tong(dt2);
	cout<<"Tong2 da thuc la: ";
	tong2.in();
	return 0;
}
