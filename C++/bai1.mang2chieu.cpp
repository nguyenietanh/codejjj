#include<iostream>
#include<iomanip>
#define max 50
using namespace std;

void input(int b[] [], int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		cout<<"b["<<i<<"]["<<j<<"]"<<"\t";
 	cin>>b[i][j];	
}

void output(int b[] [], int m,int n)
{
	for(int i=0;i<m;i++)
	{
 		for(int j=0;j<n;j++)
 			cout<<setw(6)<<b[i][j];
 	cout<<endl;	
	}

}

void out_line_odd(int b[] [], int m,int n)
{
	for(int i=0;i<m;i++)
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
				cout<<b[i][j]<<|"\t";
			cout<<endl;
		}
}


int main()
{
	int a[max][max],m,n;
	cout<<"Nhap so hang m=";cin>>m;
	cout<<"Nhap so hang n=";cin>>n;
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	cout<<"Cac phan tu tren dong le la: "<<endl;
	out_line_odd(a,m,n)
	return 0;
}
