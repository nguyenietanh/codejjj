//VD 2.13 TLHT OOP C++
#include<iostream>
using namespace std;

int n;
class vector;
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
	vector nhan(vector b);	
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
			for (int i=0; i<3; i++)
			cout<<vt[i]<<" "<<endl;	
		}
		friend vector matran::nhan(vector b);	
};
vector matran::nhan(vector b)
{
	int i,j;
	double sum;
	vector kq;
	for(int i=0; i<3 ;i++)
	{
		sum=0;
		for( int j=0; j<3; j++)
		sum= + mt[i][j]*b.vt[j];
		kq.vt[i]=sum;
	}
	return kq;
}
int main()
{
	vector V(1,2,3);
	vector KQ;
	double dlm[3][3]={1,2,3,4,5,6,7,8,9};
	matran M=dlm;
	KQ=M.nhan(V);
	cout<<"Ket qua phep nhan la: ";
	KQ.invt();
	return 0;
}













