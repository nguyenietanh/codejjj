//Mot so tim mã trong c++

int max=a;  ///Ham if
if(a<b)
{
	max=b;
}

int max=a>b?a:b; //Toan tu

#include<iostream>  //std::cout   //Ham max
#include<algorithm>  //std::max
int main()
{
	std::cout<<"max(2,5)=="<<std::max(2,5)<<'\n';
	return 0;
}


#include<iostream>  //Kien thuc toan
#include<math.h>    //max= (tong + tri tuyet doi cua hieu)/2
using namespace std;
int main()
{
	int a=12,b=3;
	int max=((a+b)+abs(a-b))/2;
	return 0;
}


#include<algorithm>  //Ham minmax
#include<iostream>  
using namespace std;
int main()
{
	int =3,b=4;
	pair<int,int> max=minmax(a,b;
	cout<<"max="<<max.second;
	cout<<'\n';
}
