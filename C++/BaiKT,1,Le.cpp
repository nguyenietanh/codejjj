#include<iostream>
#include<iomanip>
#define max 50
using namespace std;

void input(int b[max][max],int m, int n)
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			cout<<"b["<<i<<"]["<<j<<"]= ";
			cin>>b[i][j];
		}
}
void output(int b[max][max],int m, int n)
{
	for(int i=0; i<m; i++)
	{ 
		for(int j=0; j<n; j++)
			cout<<setw(6)<<b[i][j];
			cout<<endl;
	}
}	
void in_phu(int b[max][max],int m,int n)
{ 
	cout<<"Cac phan tu tren duong cheo phu la:"<<endl;
	for (int i=0;i<n;i++)
	{
			cout<<setw(6)<<b[i][n-i-1];

    int Min;
    Min=b[0][0];   		
	if(b[i][n-i-1]<Min)
	{
	    Min=b[i][n-i-1];
		cout<<"So nho nhat tren duong cheo phu la: "<<Min<<endl;
	}	
	}
}
double TBC(int b[max][max],int m,int n)
{
	if(m<=0||n<=0)
		return 0;
		
	int tong=0;
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				(double)b[i][j]/7 + 4;
				tong+=b[i][j];
			}
		}
	double TBC = (double)tong/(m*n);
	return TBC;		
}
   
    
int main()
{
	int a[max][max], m,n;
	cout<<"Nhap so hang m = "; cin>>m;
	cout<<"Nhap so cot n = "; cin>>n;
	input(a,m,n);
	cout<<"Ma tran da nhap la:"<<endl;
	output(a,m,n);
	in_phu(a,m,n);
	cout<<"Trung binh cong la:"<<endl;
	TBC(a,m,n);
	return 0;
}
