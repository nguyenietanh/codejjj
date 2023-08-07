#include<iostream>
using namespace std;

template<class t>
class mypair 
{
	private:
		t a,b;
	public:
		mypair(t first, t second)
		{
			a = first;
			b = second;
		}
		void print()
		{
			cout<<"First = "<< a << ", second = "<< b <<endl;
		}
		t getmax()
		{
			return a>b ? a : b;
		};
};
int main()
{
	mypair<int> pair1(100,200);
	pair1.print();
	cout<<"\Max: "<<pair1.getmax()<<endl;
	mypair<char> pair2('c','b');
	pair2.print();
	cout<<"\Max: "<<pair2.getmax()<<endl;
}
