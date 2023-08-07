#include <iostream>
using namespace std;
int main()
{ 
	int a, b, *ptr1,*ptr2;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	ptr1 = &a; //con tro ptr1 tro vao bien a
	ptr2 = &b; //con tro ptr2 tro vao bien b
	int sum; //bien sum de chua tong
	sum = *ptr1 + *ptr2;
	cout<<"Tong 2 so la: "<<sum<<endl;
 return 0;
}
