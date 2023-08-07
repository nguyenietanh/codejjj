#include<iostream>
using namespace std;
class PS
{
	private:
		int ts, ms;
	public:
		PS(int t=0, int m=1)
		{
			ts=t;
			ms=m;
		}
	PS operator+(PS x)
	{
		PS kq;
		kq.ts= this->ts*x.ms + this->ms*x.ts;
		kq.ms= this->ms*x.ms;
		return kq;
	}
	void in()
	{
		cout<<ts<<"/"<<ms;
	}
};
int main()
{
	PS p1(1,2), p2(1,4), p;
	p= p1 + p2;
	cout<<"Tong la: ";
	p.in();
	return 0;
}
