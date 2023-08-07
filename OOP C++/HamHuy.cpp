#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class DT
{
	private:
		int n; //Bac da thuc
		double *a; //tro toi vung nho chua cac da thuc //a0,a1...
		public:
			~DT()
			{
				this->n=0;
				delete this->a;
			}
}
