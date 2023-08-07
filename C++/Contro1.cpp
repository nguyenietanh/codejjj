#include<iostream>
using namespace std;
int main()
{
	int a=15; //khai bao bien nguyen
	int *p; //bien con tro
	p =&a; 
	//luu tru dia chi cua a vao bien con tro p
	cout<<"Gia tri cuar bien a la : "<<a<<endl; // cap phat dia chi cho a
	//in dia chi duoc luu trong bien con tro p
	cout<<"Dia chi luu tru trong bien con tro p la : ";
	cout<<p<<endl;
	cout<<"Gia tri cua con tro p la: "<<*p<<endl;
	return 0;
	
}
