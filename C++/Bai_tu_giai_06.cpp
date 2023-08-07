#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
struct congnhan
{
    char 	hoten[30];
    int 	namsinh;
    int		giolam;
};

void nhap(congnhan *p)
{
    cin.ignore();
    cout << "Ho ten: ";
	cin.getline(p->hoten, 30);
    cout << "Nam sinh: ";
    cin >> p->namsinh;
    cout << "Gio lam: ";
    cin >> p->giolam;    
}
void nhapds(congnhan a[], int n)
{  
    for (int i = 1; i <= n; i++)
    {
        nhap(&a[i]);
    }
}
void tieude()
{
    cout<<setw(30)<<"Ho ten "<<setw(20)<<"Nam sinh";
	cout<<setw(20)<<"Gio lam"<<endl;
}
void in(congnhan x)
{
    cout<<setw(30)<<x.hoten<<setw(20)<<x.namsinh;
	cout<<setw(20)<<x.giolam<<endl;
}
void inds(congnhan a[], int n)
{  	
	tieude();
    for (int i = 1; i <= n; i++)
        in(a[i]);
}
  
void Incn_nhanthuong(congnhan a[], int n)
{	
	cout<<"\t\t -----	DANH SACH CONG NHAN NHAN THUONG		-----"<<endl;
	tieude();
    for (int i = 1; i <= n; i++) 
		if (a[i].giolam > 40)    	
        	in(a[i]);
}
  
int main()
{	
	int 	n;
	cout<<"Nhap so cong nhan "; cin>>n;
    congnhan	ds[n];
	nhapds(ds,n);
    cout<<"\t\t\t	Danh sach cong nhan "<<endl;
    inds(ds, n);     
    Incn_nhanthuong(ds, n);
    return 0;
}