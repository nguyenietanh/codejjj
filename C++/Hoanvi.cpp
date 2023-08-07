int temp =a;  //dung bien temp
a=b;
b=temp;


a=a^b;   //dung toan tu XOR
b=b^a;
a=a^b;

a=a+b;  //dung +-
b=a-b;
a=a-b;


a=a*b;  //dung */
b=a/b;
a=a/b;

a ^=b^=a^=b;  //dung ^=


#include<bits/stdc++.h>
using namespace std;  // Ham swap(a,b) trong thu vien co san
int main()
{
	int a=3, b=4;
	swap(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	return 0;
}


#include<iostream>
using namespace std;   //Xay dung ham
int swapTwoInt(int a, int b)
{
	return a;
	
}
int main()
{
	int a=3,b=4;
	a= swapTwoInt(b,b=a);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	return 0;
}

