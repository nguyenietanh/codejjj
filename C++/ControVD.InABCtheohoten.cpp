#include <iostream>
#include <string.h>
#define MAXHS 50
#define MAXLEN 30
using namespace std;
int main ()
{ 
	int i, j, count = 0;
	char ds[MAXHS][MAXLEN];
	char *ptr[MAXHS],
	*tmp;
	while (count < MAXHS)
	{
		cout<<"Nhap hoc sinh thu :"<<count+1<<endl;
		gets(ds[count]);
		if (strlen(ds[count] == 0) 
		break;
		ptr[count] = ds + count;
		++count;
	}
	for ( i=0; i<count-1; i++)
		for (j = i+1; j < count; j++)
			if (strcmp(ptr[i],ptr[j])>0)
			{
				tmp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = tmp;
			}
	for (i=0;i<count; i++)
	cout<<i+1<<ptr[i]<<endl;
	return 0;
}
