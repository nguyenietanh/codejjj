// VD2.15 TLHT OOP C++
#include<iostream>
using namespace std;

int n;
class vector; //khai bao truoc vi lop matran co su dung lop nay
class matran
{
	private:
		int mt[3][3];
	public:
		matran(double t[3][3])
		{
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
					mt[i][j]=t[i][j];
				}
			}
		}
		friend vector nhan(matran a, vector b);
};
class vector
{
	private:
		int vt[3];
	public:
		vector(double v1=0, double v2=0, double v3=0)
		{
			vt[0]=v1;
			vt[1]=v2;
			vt[2]=v3;
		}
		void invt()
		{
			for(int i=0; i<3; i++)
			cout<<vt[i]<<" "<<endl;
		}
		friend vector nhan(matran a, vector b);
};
vector nhan(matran a, vector b)
{
	double sum=0;
	vector kq;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		sum += a.mt[i][j] * b.vt[j];
		kq.vt[i]= sum;
	}
}
int main()
{
	vector V(1,2,3);
	vector KQ;
	double dlm[3][3]={1,2,3,4,5,6,7,8,9};
	matran M=dlm;
	KQ=nhan(M,V);
	cout<<"Ket qua phep nhan la: ";
	KQ.invt();
	return 0;
}




