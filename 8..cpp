#include <iostream>
using namespace std;
int main ()
{
	int x=0, resultado=1;
	
	cout<<"- PROGRAMA PARA CALCULAR LA QUINTA POTENCIA -"<<endl;
	cout<<" "<<endl;
	cout<<"| NUMERO: ";
	cin>>x;

	for (int i=1; i<=5; i++)
	{
		resultado=resultado*x;
	}
	cout<<" "<<endl;
	cout<<x<<"^5 = "<<resultado<<endl;
	
return 0;
}