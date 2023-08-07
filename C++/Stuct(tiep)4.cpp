#include <iostream.h>
#include <iomanip.h>
typedef struct 	 
{
	int 	ng;
	int 	th; 
	int 	nam;
} ngaythang;
typedef struct 	
{
 	char 		hoten[30]; 
	ngaythang 	ns;
	int 		gt;
	float		diem;
}Sinhvien;
Sinhvien  lop[3];
void nhap(Sinhvien *p) 
{ 
	cout <<"\nHo ten: "; 
	cin.ignore();
	cin.getline(p->hoten,30); 
	cout <<"\nNgay sinh: ";
	cin>>(p->ns).ng>>(p->ns).th>>(p->ns).nam; 
	cout <<"\nGioi tinh: "; cin>>p->gt ;
	cout <<"\nDiem: "; cin>>p->diem; 
} 
void nhapds(Sinhvien *a) 
{ 
	int sosv = sizeof(lop) / sizeof(Sinhvien) ; 
	for(int i=1; i<=sosv; i++) 
		nhap(&a[i]); 
} 
	
void in(Sinhvien x) 
{ 	
	cout << x.hoten << "\t" ;
	cout <<x.ns.ng <<"/"<<x.ns.th <<"/"<<x.ns.nam <<"\t"; 
	cout << x.gt << "\t";
	cout << x.diem << endl; 
} 
void 	inds(const Sinhvien *a) 
{ 
	int sosv = sizeof(lop) / sizeof(Sinhvien); 
	
	for (int i=1; i<=sosv; i++) 
		in(a[i]) ; 
} 
void insvdiemcaonhat(Sinhvien a[]) 
{ 
	float  max; 
	int sosv = sizeof(lop) / sizeof(Sinhvien);
	max = a[0].diem; 
	for (int i=1; i<=sosv; i++) 
		if(max < a[i].diem)
			max = a[i].diem;
	int j = 0;
	cout << "Diem cao nhat lop:" << endl;
	for (int i = 1; i <= sosv; i++) 
	{
		if (a[i].diem == max) 
		{
			cout<<"#"<<j + 1<<endl;
			cout<<a[i].hoten<<" "<<a[i].ns.ng<<"/"<<a[i].ns.th<<"/"<<a[i].ns.nam;
			cout<<" "<<a[i].gt<<" "<<a[i].diem<<endl;
			j++;
		}
	}
}
int main() 
{	cout<<"Nhap danh sach hoc sinh"<<endl;
	nhapds(lop) ; 
	inds(lop);     	//in ds vua nhap
	insvdiemcaonhat(lop); 
	return 0;
}

