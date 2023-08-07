#include<iostream>
#include<math.h> 
#include<iomanip>
using namespace std;

void So_Chinh_Phuong(int arr[],int n)
{
	int k; 
	for(int i = 0; i < n;i++)
	{
        float n=sqrt(arr[i]);
        if((int(n)==n))
    		cout<<arr[i]<<" ";
    }
}
void pitago(int arr[],int n)
{
	int N;
	  cout<<"Nhap N: "; cin>>N;
	  for(int i=0;i<N;i++)
	  {
	      cin>>arr[i];
	  }
	int a,b,c;
  	for(int i = 0; i < N-2; i++)
  	{
    for(int j=i+1;j <N-1; j++)
      {
        for(int k =i+2; k<N;k++)
        {
	        a = arr[i];
	        b = arr[j];
	        c = arr[k];
	        if(a*a + b*b == c*c) 
	        	cout << a <<"  "<<b<<"  "<<c<<endl;
            
        }
      }
  	}  
}
	
  int main()
{
	int arr[100],a,b,c,N;
	cout<<"So chinh phuong la:"<<endl;
	So_Chinh_Phuong(arr,n);
	cout<<"Kiem tra pitago"<<endl;
	pitago(arr,n);
	return 0;
}	
