#include<iostream>
using namespace std;
class DATHUC3
{
	private:
	  int a,b,c,d;
    public: 
      DATHUC3(int da=0,int  db=0,int dc=0,int dd=0)//khoi tao 
      {
     	a=da;b=db;c=dc;d=dd;
      }
      ~DATHUC3(){}//huy
      void in();
      DATHUC3 tong(DATHUC3 dt1)  ;  
};
 void DATHUC3 ::in(){//in man hinh 
	cout<<a<<"x^3";
	if(b>0)
	cout<<"+"<<b<<"x^2";
	else 
	cout<<"-"<<b<<"x^2";
	if(c>0)
	cout<<"+"<<c<<"x";
	else 
	cout<<"-"<<c<<"x";
	if(d>0)
	cout<<"+"<<d;
	else 
	cout<<"-"<<d;
 }
 DATHUC3 DATHUC3::tong(DATHUC3 dt)
 {
 	DATHUC3 t;
 	t.a=a+dt.a;
 	t.b=b+dt.b;
 	t.c=c+dt.c;
 	t.d=d+dt.d;
 	return t;
 }
 int main ()
 {
	DATHUC3 dt1(1,2,3,4);
	DATHUC3 dt2(2,3,4,5);
	DATHUC3 tong2;
	tong2=dt1.tong(dt2);
	cout<<"tong hai da thuc la : ";
	tong2.in();
	cout<<endl;
	return 1;
	
 }
