#include <iostream>
using namespace std;
int main ()
{
	int suma=0;
	
	cout<<"SUMATORIA DE NUMEROS PARES (1-100) -"<<endl;
	cout<<" "<<endl;
	
	for(int i=1; i<=100; i++)
	{
		if (i % 2 == 0)
		{
			cout<<i<<endl;
			suma=suma+i;
		}
	}
	cout<<" "<<endl;
	cout<<"| SUMA TOTAL: "<<suma<<endl;
	
return 0;
}