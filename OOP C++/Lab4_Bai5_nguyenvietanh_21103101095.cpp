#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class person
{
	private:
		char name[30];
		char address[40];
		long int phone;
	public:
		person(){}
		person(char *ten,char *dc,long int dt)
		{
			strcpy(name,ten);
			strcpy(address,dc);
			phone=dt;
		}
};
class officer: private person
{
	private:
		float salary;
	public:
	~officer(){}
	officer(char *ten,char *dc,long int dt,float sal):
	person(ten,dc,dt)
	{
		salary=sal;
	}
	bool operator !=( float a )
	{
		return salary != a ;
	}	
	char * GetAdd()
	{
		return address;
	}
};
class manager: public officer
	{
	private:
		float extra;
	public:
	~manager (){}
	manager(char *ten,char *dc,long int dt,float sal,float pc):officer(ten,dc,dt,sal)
	{
		extra=pc;
	}
	void outscreen()
	{
		cout<<"\n=============================\n";
		cout<<"\nName: "<<name;
		cout<<"\nAddress: "<<address;
		cout<<"\nPhone: "<<phone;
		cout<<"\nSalary: "<<salary;
		cout<<"\nExtra: "<<extra;
	}
	bool Kt()
	{
		if(strcmpi(GetAdd(), "Ha Noi") == 0)
		return 1;
		return 0;
	}

	cout<<"\n Danh sach doi tuong can tim"<<"\n";
	for(int i=0;i<5;i++)
		{
			if( (p[i].kt()==1 && p[i]!= 10000000)
				p[i].outscreen();
		}
};
int main()
{
	
}
