#include <iostream>
#include <conio.h>
using namespace std;
 	
int main()
{
 	int 	n;
  	int 	*ptr;
	cout<<"Nhap so phan tu: ";cin>>n;
  	ptr = new	int; 		/*cap phat bo nho*/ 
	if (ptr != NULL) 
  	{ 	for(int i = 0 ; i<n ; i++)
      		*(ptr+i) = i;
  		for(int i=n ; i>0 ; i--) 
    		cout<<*(ptr+(i-1))<<"\t"; 	
		cout<<endl;	
    	delete	ptr; 
		return 0;
	}
	else 
  	{ 	cout<<"\nKhong du bo nho de cap phat"<<endl;
    	return 1;
  	}
}  
