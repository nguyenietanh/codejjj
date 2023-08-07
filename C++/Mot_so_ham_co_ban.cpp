//Ham hoan vi 2 so
void sawp(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//Kiem tra so nguywn to
bool soNguyenTo(int number)
{
	if(number<2 ) return false;
	for( nt i=2; i<=sqrt(number); i++)
		if(number % i==0) return false;
	return true;	
}
//Tim uoc chung lon nhat( phep tru)
int gcd(int a, int b)
{
	if(a==0||b==0) return a+b;
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
//Tim uoc chung lon nhat( phep chia)
int gcd(int a, int b)
{
	while(a*b!=0)
	{
		if(a>b) a%=b;
		else b%=a;
	}
	return a+b;
}
//Kiem tra nam nhuan
bool chexkYearr(int year)
{
	if(year %4==0 &&year%100!=0 || year %400==0) return true;
	return false;
}
//TInh so Fibonacci thu n
int fibo(int n)
{
	if(n==1||n++2) return 1;
	else return fibo(n-1)+fibo(n-2);
}
//In ra ta ca cac to hop cua 1 day so
void try(int k)
{
	for(int i=1; i<=n; i++)
	{
		if(!Bool[i])
		{
			A[k]=i;
			Bool[i]=1;
			if(k==n) output();
			else try(k+1);
			Bool[i]=0;
		}
	}
}










