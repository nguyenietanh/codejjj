#include<iostream>
#include<string.h>
using namespace std;
struct thuvien{
	int msach;
	char tsach[30];
	int sotrang;
	char tentacgia[30]  ;
	int namxb;	
};
void nhap(thuvien tv[],int n){
	for (int i=0;i<n;i++){
	    cout<<"\ncuon sach thu : "<<i+1;
		cout<<"\nma sach : ";
		cin>>tv[i].msach;
		cin.ignore();
		cout<<"\nten sach : ";
		cin.getline(tv[i].tsach,30);
		cout<<"\nnhap so trang sach :";
		cin>>tv[i].sotrang;
		cin.ignore();
		cout<<"\nten tac gia: ";
		cin.getline(tv[i].tentacgia,30);
		cout<<"\nnhap nam xuat ban :";
		cin>>tv[i].namxb;
		cout<<endl;
	}	
}
void tim(thuvien tv[],int n){
	char b[30];
	cout<<"nhap ten tac gia : ";
	cin.ignore();
	cin.getline(b,30);
		for(int i=0;i<n;i++){
		if (strcmpi(tv[i].tentacgia,b)==0){
			cout<<"ma sach : "<<tv[i].msach<<endl;
			cout<<"ten sach : "<<tv[i].tsach<<endl;
			cout<<"so trang : "<<tv[i].sotrang<<endl;
			cout<<"ten tac gia : "<<tv[i].tentacgia<<endl;
			cout<<"nam xuat ban : "<<tv[i].namxb<<endl;
			cout <<endl;
		}
	}
}
int main(){
	thuvien tv[100];
	int n;
	cout<<"nhap so luong sach : ";
	cin>>n;
	nhap(tv,n);
	tim(tv,n);
	return 0;
}
