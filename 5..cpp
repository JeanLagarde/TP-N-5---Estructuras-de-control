#include <iostream>
using namespace std;
int main ()
{
	int num1=0, num2=0, pares=0, impares=0;
	
	cout<<"- PROGRAMA QUE EVALUA PARES E IMPARES -"<<endl;
	cout<<" "<<endl;
	cout<<"| CANTIDAD DE NUMEROS: ";
	cin>>num1;
	cout<<" "<<endl;
	
	for (int i=1; i<=num1; i++)
	{
		cout<<i<<". NUMERO: ";
		cin>>num2;
		
		if (num2 % 2 == 0)
		{
			pares++;
		}
		else
		{
			impares++;
		}
    }
	cout<<"| PARES: "<<pares<<endl;
	cout<<"| IMPARES: "<<impares<<endl;

return 0;		
}