#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
 cout<<"CHAO MUNG TOI TAI XIU WORLD CUP";
 cout<<"\nHay chon tran dau\n";
 cout<<"1. Uc vs Dan Mach\n";
 cout<<"2. Tunisia vs Phap\n";
 cout<<"3. A Rap vs Mexico\n";
 cout<<"4. Ba Lan vs Argentina\n";
 srand(time(NULL));
 int s;
 s=rand()%5;
 int n;
 cin>>n;
 switch(n){
 case 1: 
 cout<<"Ban da chon tran Uc vs Dan Mach\n";
 if(s>=3)
 cout<<"Tai hup";
 else 
 cout<<"Xiu hup";break;
 case 2: 
 cout<<"Ban da chon tran Tunisia vs Phap\n";
 if(s>=3)
 cout<<"Tai hup";
 else 
 cout<<"Xiu hup";break;
 case 3: 
 cout<<"Ban da chon tran A Rap vs Mexico\n";
 if(s>=3)
 cout<<"Tai hup";
 else 
 cout<<"Xiu hup";break;
 case 4: 
 cout<<"Ban da chon tran Ba Lan vs Argentina\n";
 if(s>=3)
 cout<<"Tai hup";
 else 
 cout<<"Xiu hup";break;
 }

 return 0;
}
