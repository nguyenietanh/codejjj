//trung binh cong cac phan tu le cua mang
//dem so luong so nguyen to trong mang
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#define	max	50
//khai bao nguyen mau cac ham
void 	input(int b[max][max], int, int);   //nhap mang
void 	output(int b[max][max], int, int);  //xuat mang
void 	tbc(int b[max][max], int, int);
//tinh trung binh cong cac phan tu le cua mang
void 	dem_snt(int a[max][max], int, int);
//dem so luong cac so nguyen to tren mang

bool  kt_snt(int x)		//ham kiem tra so nguyen to
{	int count = 0;		//count de dem cac uoc cua x
	for (int i = 1; i<=x; i++)
		if (x%i==0)
			count++;
	if (count ==2)	
		return true;		//x la so nguyen to
	return false;			//x khong la so nguyen to
}
int	 main()
{	int a[max][max], m, n;	
	cout<<"Nhap so hang m = ";cin>>m;
	cout<<"Nhap so cot n = ";cin>>n;	
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	tbc(a,m,n);
	dem_snt(a,m,n);
 	return 0;
} 

void	input(int  b[max][max],int m,int n)
{	cout<<"Nhap cac phan tu mang"<<endl;
	for (int i=0;i<m;i++)
  	{	for (int j=0;j<n;j++)
     	{	cout<<"b["<<i<<"]["<<j<<"]= ";
    		cin>>b[i][j];				     
 		}
 		cout<<endl;
  	}
} 
void	output(int  b[max][max],int m,int n)
{	for (int i=0;i<m;i++)
	{	for (int j=0;j<n;j++)
			cout<<setw(6)<<b[i][j];
		cout<<endl;				
  	}
}
void	 tbc(int  b[max][max],int m,int n)
{	int tong = 0, dem = 0;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if( b[i][j] % 2 != 0)						
			{	tong += b[i][j];
				dem++;
			}
	cout<<"\nTrung binh cong cac phan tu le cua mang: "<<(float)tong/dem<<endl;
}
void	 dem_snt(int  b[max][max],int m,int n)
{	int  d = 0;	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if (kt_snt(b[i][j]))
				d++;
	cout<<"So cac so nguyen to trong mang la "<<d<<endl;
}




