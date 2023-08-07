#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

typedef struct
{
	float thuc;
	float ao;
}sophuc;
 sophuc cong( sophuc p, sophuc q)
 {
 	sophuc kq;
 	kq.thuc=p.thuc + q.thuc;
 	kq.ao=p.ao + q.ao;
 	return kq;
 }
sophuc tru( sophuc p, sophuc q)
 {
 	sophuc kq;
 	kq.thuc=p.thuc - q.thuc;
 	kq.ao=p.ao - q.ao;
 	return kq;
 }
 
 void In(sophuc a)
 {
 	cout<<"("<<a.thuc<<","<<a.ao<<")"<<endl;	
 }
 int main()
 {
 	sophuc x,y;
 	cout<<"Nhap so phuc x "<<endl;
 	cout<<"Phan thuc :";cin>>x.thuc;
 	cout<<"Phan ao: ";cin>>x.ao;
 	cout<<"Nhap so phuc y "<<endl;
 	cout<<"Phan thuc :";cin>>y.thuc;
 	cout<<"Phan ao :";cin>>y.ao;
 	cout<<"x + y = "; In(cong(x,y));
 	cout<<"x - y = "; In(tru(x,y));
 	return 0;
 }
 
 
 
 
 
 
 
 
  
