#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>

using namespace std;

struct quan_ly_ho_dan
{
    char ma_ho[10];
    char ten_chu_ho[40];
    int so_thanh_vien;
    float muc_thu_nhap;
    
};

void nhap(quan_ly_ho_dan qlhd[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin ho dan thu " << i + 1 << ":" << endl;
        cout << "Ma ho dan: ";
        fflush(stdin);
        cin.getline(qlhd[i].ma_ho, 10);
        cout << "Ten chu ho: ";
        cin.getline(qlhd[i].ten_chu_ho, 40);
        cout << "So thanh vien : ";
        cin >> qlhd[i].so_thanh_vien;
        cout << "Muc thu nhap : ";
        cin >> qlhd[i].muc_thu_nhap;
       
    }
}

void in_danh_sach(quan_ly_ho_dan qlhd[], int n)
{
    for (int i = 0; i < n; i++)
    {
    	if(qlhd[i].so_thanh_vien >= 5)
    		cout<<"Ban in ds thanh cong";
    	else
    		cout<<"So thanh vien chua du 5";
    }
}


int main()
{
    int n ;
    quan_ly_ho_dan qlhd[100];
    nhap(qlhd,n);
    in_danh_sach(qlhd, n);
    return 0;
}

