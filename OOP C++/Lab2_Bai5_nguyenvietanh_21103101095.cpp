#include<iostream>
#include<string>
using namespace std;
class NGUOI
{
	private:
		string hoten;
		int tuoi;
		string nghe;
		string quoctich;
	public:
		NGUOI()
		{
			this->hoten= " ";
			tuoi=0;
			this->nghe= " ";
			this->quoctich= " ";
		}
		NGUOI(string hoten, int tuoi, string nghe, string quoctich)
		{
			this->hoten=hoten;
			this->tuoi=tuoi;
			this->nghe=nghe;
			this->quoctich=quoctich;
		}
		~NGUOI();
		void nhap();
		void in();	
};
void NGUOI::nhap()
{
	fflush(stdin)
	cout<<"Nhap ho ten: ";cin.getline(hoten," ");
	cout<<"Nhap tuoi: "; cin>>tuoi;
	cout<<"Nhap nghe nghiep: "; cin.getline(nghe," ");
	cout<<"Nhap quoc tich: ";cin.getline(quoctich," ");
}
void NGUOI::in()
{
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Tuoi: "<<tuoi<<endl;
	cuot<<"Nghe nghiep: "<<nghe<<endl;
}
