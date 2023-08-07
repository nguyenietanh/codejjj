#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	int *ptr;
	cout<<"Nhap so phan tu : "; cin>>n;
	ptr = new int;  //cap nhat bo nho
	if(ptr != NULL)
	{ 
		for(int i=0;i<n; i++)
			*(ptr+1)=i;
		for(int i=n; i>0; i--)
			cout<<*(ptr+(i-1))<<"\t";
		delete ptr;
		return 0;
	}
	else
	{
		cout<<"\n Khong du bo nho de cap nhat"<<endl;
		return 1;
	}
}
