// VD 2.14 TLHT OOP C++
#include<iostream>
#include<conio.h>
using namespace std;

class mt;
class vt;

class mt
{
	private:
		double a[10][10];
		int n;
	public:
		friend class vt;
	mt()
	{
		n=0;	
	}
	void nhap();
	void in();
	vt tich(const vt &y);
	mt tich(const mt &b);	
};
class vt
{
	private:
		double x[10];
		int n;
	public:
		friend class mt;
	vt()
	{
		n = 0;
	}
	void nhap();
	void in();
	vt tich(const mt &b);
	double tich(const vt &y);	
};
void mt::nhap()
{
	cout<<"\nCap ma tran: "; cin>>n;
	for(int i=1; i<=n; ++i)
	for(int j=1;j<=n; ++j)
	{
		cout<<"\nPhan tu hang "<<i<<" cot "<<j<<" = ";
		cin>>a[i][j];
	}
}
void mt::in()
{
	for(int i=1; i<=n;++i)
	{
		cout<<"\n";
		for(int j=1; j<=n; ++j)
		cout<<a[i][j]<<" ";
	}
}
void vt::nhap()
{
	cout<<"\nCap vec to: "; cin>>n;
	for(int i=1; i<=n; ++i)
	{
		cout<<"\nPhan thu thu "<<i<<"=";
		cin>>x[i];
	}	
}
void vt::in()
{
	for(int i=1; i<=n; ++i)
	cout<<x[i]<<" ";
}
vt mt::tich(const vt &y)
{
	vt z;
	for(int i=1; i<=n; ++i)
	{
		z.x[i]=0.0;
		for(int j=1; j<=n; ++j)
		z.x[i] += a[i][j]*y.x[j];
	}
	z.n=n;
	return z;
}
mt mt::tich(const mt &b)
{
	mt c;
	for(int i=1; i<=n; ++i)
	for(int j=1;j<=n; ++j)
	{
		c.a[i][j] = 0.0;
		for(int k=1; k<=n; ++k)
		c.a[i][j] += a[i][k] * b.a[k][j];
	}
	c.n=n;
	return c;
}
vt vt::tich(const mt &b)
{
	vt z;
	for(int j=1;j<=n; ++j)
	{
		z.x[j]=0.0;
		for(int i=1; i<=n; ++i)
		z.x[j] += b.a[i][j] * x[i];
	}
	z.n=n;
	return z;	
}
double vt::tich(const vt &y)
{
	double tg=0.0;
	for (int i=1; i<=n; ++i)
	tg += x[i]*y.x[i];
	return tg;
}

int main()
{
	mt a,b,c;
	vt x,y;
	cout<<"\nMa tran a"; a.nhap();
	cout<<"\nMa tran b"; b.nhap();
	cout<<"\nMa tran c"; c.nhap();
	cout<<"\nVec to x"; x.nhap();
	cout<<"\nVec to y"; y.nhap();
	mt d= a.tich(b);
	vt u= d.tich(y);
	vt v= x.tich(c);
	double s=v.tich(u);	
	cout<<"\n\n Vec to v "; v.in();
	cout<<"\n\n Ma tran d "; d.in();
    cout<<"\n\n s= vdy = " << s;
		return 0;

	

}













