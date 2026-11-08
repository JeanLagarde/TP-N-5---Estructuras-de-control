#include <iostream>
using namespace std;
int main ()
{
	int suma=0, impares=0;
	
	cout<<"- SUMATORIA E INDICATORIA DE NUMEROS IMPARES (1-300) -"<<endl;
	cout<<" "<<endl;
	
	for (int i=1; i<=300; i++)
	{
		if (i % 2 != 0)
		{
			impares++;
			suma=suma+i;
		}
    }
	cout<<"| IMPARES: "<<impares<<endl;
	cout<<"| SUMA: "<<suma<<endl;
	
return 0;
}
	