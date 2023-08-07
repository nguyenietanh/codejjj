#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void ghiFile (int num){
	FILE *file = fopen ("vao.txt", "a");//Luu noi duoi
	char str[5];
	itoa(num, str, 10);
	fputs(str, file);
	fputs("\n", file);
	fclose(file);
}
void ghiFileSapXep (int num){
	FILE *file = fopen ("luu.txt", "a");//Luu noi duoi
	char str[5];
	itoa(num, str, 10);
	fputs(str, file);
	fputs("\n", file);
	fclose(file);
}
void taoMang (int a[], int &n)
{
	for (int i=0;i<n;i++){
		cout<<"A["<<i<<"] = ";
		cin>>a[i];
		ghiFile(a[i]);
	}
	cout<<endl;
	cout<<"Ghi thanh cong"<<endl;
}
void xuatMang (int a[], int n)
{
	cout<<"Mang cua ban la: ";
	for (int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"Doc thanh cong"<<endl;
}
bool kiemTra (int x)
{
	int sum = 0;
    for(int i=1;i<=x/2;i++)
	{
        if(x%i==0) 
            sum+=i;
    }
    if(sum==x)
	return true; 
    return false;
}
void sapXep (int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				int tam =a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void docFile(int x){
	FILE *file = fopen ("vao.txt", "r");
	int a[100], n = 0;
	while(true)
	{
		char *line = "\0";
		char buffer[5];
		line=fgets(buffer, 5, file);
		if(line !=NULL)
		{
			int num = atoi(line);
				a[n++]= num;
		}else
		{
			break;
		}
	}
	fclose(file);
	if(x == 1)
	{
		xuatMang(a, n);
	}else if (x == 2){
		cout<<"Cac phan tu hoan hao trong mang: ";
		for (int i=0;i<n;i++){
			if(kiemTra(a[i])){
				cout<<a[i]<<"\t";
			}
		}
		cout<<endl;
	}else{
		cout<<"Mang khi sap xep la: ";
		sapXep(a, n);
		for (int i=0;i<n;i++){
				cout<<a[i]<<"\t";
				ghiFileSapXep(a[i]);
			}
		}
		cout<<endl;
	}

void inMenu () {
		cout<<"1. Ghi thong tin vao tep: \"vao.txt\""<<endl;
		cout<<"2. Doc thong tin tu tep"<<endl;
		cout<<"3. Phan tu hoan hao trong mang"<<endl;
		cout<<"4. Sap xep mang roi ghi vao tep: \"luu.txt\""<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Moi chon: ";
}
int main(int argc, char** argv) {
	bool flag = true;
	int chon;
	do{
		inMenu ();
		cin>>chon;
		switch (chon){
			case 0:
				flag=false;
				break;
			case 4:
				docFile(3);
				break;
			case 3:
				docFile(2);
				break;
			case 2:
				docFile(1);
				break;
			default: cout<<"Sai cu phap"<<endl;
			case 1: 
				int n;
				cout<<"Moi ban nhap so phan tu: ";
				cin>>n;
				int a[n];
				taoMang(a, n);
				break;
		}
	}while(flag);
	return 0;
}
