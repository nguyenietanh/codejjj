#include <iostream>
using namespace std;

class HCN {
	float lenght, breadth;
	public:
		HCN(float x, float y) {
			lenght = x, breadth = y;
		}
		float Chu_Vi(void) {
			return (lenght + breadth) * 2;
		}
		float Dien_Tich(void) {
			return lenght * breadth;
		}
};

int main()
{
	HCN hcn1 = HCN(4.0, 7.0);
	cout << hcn1.Chu_Vi() << endl;
	cout << hcn1.Dien_Tich();
	return 0;
}
