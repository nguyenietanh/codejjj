#include<iostream>
using namespace std;
class SP
{
	private:
		int pt,pa;
	public:
		SP();
		SP(int pt, int pa);
		~SP(){}
		void in();
		SP tong2(SP p);
};
SP::SP()
{
	this->pt=0;
	this->pa=0;
}
void SP::in()
{
	if(this->pa>=0)
		cout<<" "<<this->pt<<"+"<<this->pa<<"*j";
	else
		cout<<" "<<this->pt<<"-"<<this->pa<<"*j";
}
SP SP::tong2(SP p)
{
	SP tong;
	tong.pt=this->pt+p.pa;
	tong.pa=this->pa+p.pa;
	return tong;
	
}
int main()
{
	SP p1(3,-15);
	SP p2(-6,-18);
	SP p3(5,-15);
	SP p4,p5;
	p4=p1.tong2(p2);
	p5=p3.tong2(p4);
	cout<<"Tong 3 so phuc la: ";
	p5.in();
	cout<<endl;
	return 0;
}
