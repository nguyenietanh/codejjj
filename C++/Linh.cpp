#include<iostream>
#include<math.h> 
#include<iomanip>
using namespace std;

void Nhap(int b[],int n){
	cout<<"(-) Nhap mang: \n";	
	for(int i = 0;i < n;i++){
		cout<<"b["<<i<<"]="; 
		cin>> b[i]; 
	}
}
void Xuat(int b[],int n){ 
	for(int i = 0; i < n;i++){
		cout<<b[i]<<" ";  
	} 
} 
void Chan(int b[],int n)
{
	for(int i = 0; i < n;i++)	
	{
		if (b[i] %2 == 0)
		cout<<b[i]<<" ";			
	} 
}
void Le(int b[],int n)
{
	for(int i = 0; i < n;i++)
	{
		if (b[i]%2 == 1)
		cout<<b[i]<<" ";
	}
}
void So_Chinh_Phuong(int b[],int n)
{
	int k; 
	for(int i = 0; i < n;i++)
	{
        float n=sqrt(b[i]);
        if((int(n)==n))
    		cout<<b[i]<<" ";
    }
}	

void Them(int b[],int &n,int x)
{
	int pos = n;
	while ((pos>0)&&(b[pos-1]>x))
	{
		b[pos]=b[pos-1];
		pos--;
	}
	b[pos]=x;
} 

int main(){
	int a[20];
	int n,x;
	do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0); 
    Nhap(a,n);
	Xuat(a,n);
	cout<<"So chan la :"; 
	Chan(a,n); 
	cout<<"So le la :";
	Le(a,n);  
	cout<<"So chinh phuong la :"; 
	So_Chinh_Phuong(a,n);
	cout<<"Nhap phan tu can them :";cin>>x;
	Them(a,n,x); 
	Xuat(a,n);
	return 0; 
}
