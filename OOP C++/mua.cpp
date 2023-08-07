#include<iostream>
#include<string.h>
using namespace std;
class NV
{
	private:
		int ma;
		char hoten[30];
		float hsl;
	public:
		NV(int m, char t[], float hs)
		{
			ma=m;
			strcpy(hoten,t);
			hsl=hs;
		}
		friend class NVKD;
};
class NVKD : public NV
{
	float dt;
	public:
		NVKD(int m, char t[], float hs, float d) : NV(m,t,hs)
		{
			dt=d;
		}
		double luong()
		{
			return hsl*(0.02 *dt);
		}
	void show()
	{
		cout<<"\nMa nhan vien: "<<ma;
		cout<<"\nHo ten: "<<hoten;
		cout<<"\nHe so luong: "<<hsl;
		cout<<"\nLuong: "<<luong()<<endl;
		
	}
};
int main()
{
	NVKD a(5,(char*)"Le Van A", 2.34, 150000000);
	a.show();
	return 0;
}









