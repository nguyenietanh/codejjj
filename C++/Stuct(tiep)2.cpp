#include <iostream>
#include <iomanip>
using namespace std;
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
	cout <<x.hoten << "\t" ;
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
void sua(Sinhvien &r) 
{ 	int 	chon; 
	do { 
		cout << "1: Sua ho ten" << endl; 
		cout << "2: Sua ngay sinh" << endl; 
		cout << "3: Sua gioi tinh" << endl;
		cout << "4: Sua diem" << endl;
		cout << "0: Thoi" << endl;
		cout <<"Sua(0/1/2/3/4)?"; cin>>chon; 
		cin.ignore(); 
		switch (chon) 
		{ 
			case 1: cin.getline(r.hoten,30) ; break;
			case 2: cin >> r.ns.ng >> r.ns.th >> r.ns.nam ; break; 
			case 3: cin >> r.gt ; break;
			case 4: cin >> r.diem ; break; 
		}   //end switch
	} while (chon);       //end do
}    
void suads(Sinhvien *a) 
{ 
	int  n;
	cout<<"Chon sinh vien can sua: "; cin>>n; 
	cin.ignore(); 
	sua(a[n]); 
} 
int main() 
{	cout<<"Nhap danh sach hoc sinh"<<endl;
	nhapds(lop) ; 
	inds(lop);     	//in ds vua nhap
	suads(lop); 
	inds(lop); 		//in ds vua sua
	return 0;
}
