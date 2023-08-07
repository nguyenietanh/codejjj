#include <iostream>
#include<vector>
#include <string>
#include <iomanip>

using namespace std;
class thiSinh {
private:
	char hoTen[30];
	float diemToan;
	float diemVan;
	vector<thiSinh> qlts;
	float tongDiem;
public:
	thiSinh(char* hoTen = NULL, float dt=0, float dv=0, float tongDiem=0) {
		strcpy_s(this->hoTen, "");
		this->diemToan = dt;
		this->diemVan = dv;
		this->tongDiem =tongDiem;
	}
	~thiSinh() {

	}
	void nhap();
	void themDSTS(thiSinh ts[], int n);
	void tongDiemALL();
	void in();
	void xoa(char tenXoa[]);
	void sapXep();
	void diemMax ();
	void sapXepGiamDan();
};
void thiSinh::nhap() {
	cin.ignore();
	cout << "Moi ban nhap ho ten: ";
	gets(this->hoTen);
	fflush(stdin);
	cout << "Moi ban nhap diem Toan: ";
	cin >> this->diemToan;
	cout << "Moi ban nhap diem Van: ";
	cin >> this->diemVan;
}
void thiSinh::themDSTS(thiSinh ts[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Moi ban nhap thi sinh thu " << i + 1 << endl;
		ts[i].nhap();
		qlts.push_back(ts[i]);
	}
	cout << "Nhap thanh cong " << n << " thi sinh" << endl;
}
void thiSinh::tongDiemALL() {
	for (int i = 0; i < qlts.size(); i++) {
		qlts[i].tongDiem = qlts[i].diemToan+ qlts[i].diemVan;
	}
}
void tieuDe(){
	cout << setw(20) << right << "STT";
	cout << setw(20) << right  << "HO TEN";
	cout << setw(20) << right << "DIEM TOAN";
	cout << setw(20) << right << "DIEM VAN";
	cout << setw(20) << right << "TONG DIEM" << endl;
}
void thiSinh::in() {
	tieuDe();
	for (int i = 0; i < qlts.size(); i++) {
		cout << setw(20) << right << i+1;
		cout << setw(20) << right <<qlts[i].hoTen;
		cout << setw(20) << right << qlts[i].diemToan;
		cout << setw(20) << right << qlts[i].diemVan;
		cout << setw(20) << right << qlts[i].tongDiem << endl;
		
	}
}
void thiSinh::xoa(char tenXoa[]) {
	
	
	int viTri = -1;
	for (int i = 0; i < qlts.size(); i++) {
		if (strcmp(qlts[i].hoTen, tenXoa) == 0) {
			viTri = i;
		}
	}
	if (viTri >-1) {
		cout << "Tim thay thi sinh: " << tenXoa << endl;
		cout << setw(20) << right << "HO TEN";
		cout << setw(20) << right << "DIEM TOAN";
		cout << setw(20) << right << "DIEM VAN";
		cout << setw(20) << right << "TONG DIEM" << endl;
		cout << setw(20) << right << qlts[viTri].hoTen;
		cout << setw(20) << right << qlts[viTri].diemToan;
		cout << setw(20) << right << qlts[viTri].diemVan;
		cout << setw(20) << right << qlts[viTri].tongDiem << endl;
		qlts.erase(qlts.begin() + viTri);
		cout << "Da xoa thanh cong" << endl;
	}
	else {
		cout << "Khong ton tai thi sinh: " << tenXoa << endl;
	}
}
void thiSinh::sapXep() {
	for (int i = 0; i < qlts.size() - 1; i++) {
		for (int j = i + 1; j < qlts.size(); j++) {
			if (strcmp(qlts[i].hoTen, qlts[j].hoTen) > 0) {
				thiSinh temp = qlts[i];
				qlts[i] = qlts[j];
				qlts[j] = temp;
			}
		}
	}
}
void thiSinh::diemMax() {
	int j = 1;
	int max = qlts[0].tongDiem;
	for (int i = 0; i < qlts.size(); i++) {
		if (qlts[i].tongDiem > max) {
			max = qlts[i].tongDiem;
		}
	}
	tieuDe();
	for (int i = 0; i < qlts.size(); i++) {
		if (qlts[i].tongDiem == max) {
			cout << setw(20) << right << j;
			cout << setw(20) << right <<qlts[i].hoTen;
			cout << setw(20) << right << qlts[i].diemToan;
			cout << setw(20) << right << qlts[i].diemVan;
			cout << setw(20) << right << qlts[i].tongDiem << endl;
			j++;
		}
	}
}
void thiSinh::sapXepGiamDan() {
	for (int i = 0; i < qlts.size() - 1; i++) {
		for (int j = i + 1; j < qlts.size(); j++) {
			if (qlts[i].tongDiem < qlts[j].tongDiem) {
				thiSinh temp = qlts[i];
				qlts[i] = qlts[j];
				qlts[j] = temp;
			}
		}
	}
}
int main() {
	int n=0;
	cout << "Moi ban nhap so luong thi sinh: ";
	cin >> n;
	thiSinh ts[100];
	ts->themDSTS(ts, n);
	ts->tongDiemALL() ;
	cout << setw(40) << right << "DANH SACH CAC THI SINH" << endl;
	ts->in();
	char tenXoa[30];
	cin.ignore();
	cout << "Moi ban nhap ten thi sinh can xoa: ";
	gets(tenXoa);
	ts->xoa(tenXoa);
	cout << setw(40) << right << "DANH SACH CAC THI SINH DA SAP XEP THEO TEN" << endl;
	ts->sapXep();
	ts->in();
	cout << setw(40) << right << "DANH SACH CAC THI SINH THU KHOA" << endl;
	ts->diemMax();
	
	cout << setw(40) << right << "DANH SACH CAC THI SINH DA SAP XEP THEO TONG DIEM" << endl;
	ts->sapXepGiamDan();
	ts->in();
	
	system("pause");
	return 0;
}