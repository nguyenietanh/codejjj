#include <iostream>
#include <iomanip>
using namespace std;
typedef struct
{
	float dtb_ki1;
	float dtb_ki2;
} diemtrungbinh;
typedef struct
{ 
	float ID;
	char hoten[30];
	diemtrungbinh ns;
	float diemtb;
} Sinhvien;
Sinhvien  lop[20];
void nhap(Sinhvien *p)
{
	cin.ignore();
	cout<<"\nMa ID:";cin>>p->ID;
	cout<<"\nHo ten:"; cin.getline(p->hoten,30);
	
	
}
void nhapds(Sinhvien *a)
{
	int sosv = sizeof(lop) / sizeof(Sinhvien);
	for (int i=1; i<=sosv; i++)
	nhap(&a[i]) ;
} 
void in(Sinhvien x)
{
	cout << x.ID<<"\t";
	cout << x.hoten << "\t" ;
	cout << x.diemtb << endl;
} 
void inds(const Sinhvien *a)
{
	int sosv = sizeof(lop) / sizeof(Sinhvien);
	for (int i=1; i<=sosv; i++)
	in(a[i]) ;
} 
void insvdiemcaonhat(Sinhvien *a)
{ 
	float max;
	int sosv = sizeof(lop) / sizeof(Sinhvien);
		max = a[0].diemtb;
	for (int i=1; i<=sosv; i++)
	{	if(a[i].dtb_ki1 < a[i].dtb_ki2)
			cout<< a[i].dtb_ki2;
		else 
			cout<< a[i].dtb_ki1;
	}
	int j = 0;
		cout << "Diem cao nhat lop:" << endl;
	for (int i = 1; i <= sosv; i++)
	{
			if (a[i].diemtb == max)
		{
		cout<<"#"<<j + 1<<endl;
		cout<<a[i].ID<<" ";
		cout<<a[i].hoten<<" ";
		cout<<a[i].dtb_ki1<<" ";
		cout<<a[i].dtb_ki2<<" ";
		cout<<a[i].diemtb<<" "<<endl;
		j++;
		}
	}
}
int main()
{
	nhapds(lop);
	inds(lop); 
	insvdiemcaonhat(lop);
	return 0;
} 
