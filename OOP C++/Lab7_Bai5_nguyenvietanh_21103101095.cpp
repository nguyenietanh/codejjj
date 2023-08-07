#include<iostream>
using namespace std;

template<class t>
class tinh
{
	private:
		t num1,num2;
	public:
		tinh(t n1, t n2)
		{
			num1=n1;
			num2=n2;
		}
	void tinhtoan()
	{
		cout<<"Ha so la: "<<num1<<" va "<< num2<<endl;
			cout<<"Cong: "<<add()<<endl;
			cout<<"Tru: "<<sub()<<endl;
			cout<<"Nhan: "<<mul()<<endl;
			cout<<"Chia: "<<div()<<endl;
	}
		t add() {
			return num1 + num2;
		}
		t sub() {
			return num1-num2;
		}
		t mul() {
			return num1*num2;
		}
		t div() {
			return num1/num2;
		}
		t getmax()
		{
			return num1>num2 ? num1 : num2;
		}
};
int main()
{
	tinh<int> cap1(1,2);
	cap1.tinhtoan();
	cout<<"Max: "<<cap1.getmax()<<endl;
	tinh<float> cap2(3.4,5.1);
	cap2.tinhtoan();
	cout<<"Max: "<<cap2.getmax()<<endl;
}
