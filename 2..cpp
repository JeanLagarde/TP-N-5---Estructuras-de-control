#include <iostream>
using namespace std;
int main ()
{
	int max=0, min=0;
	float nota=0, promedio=0, suma=0;
	
	cout<<"- CONTEO DE NUMEROS -"<<endl;
	cout<<" "<<endl;
	
	for (int i=1; i<=10; i++)
	{
		cout<<i<<" NOTA: ";
		cin>>nota;
		
		if (i==1)
		{
			max=nota;
			min=nota;
		}
		
		if (nota>max)
		{
			max=nota;
		}
		if (nota<min)
		{
			min=nota;
		}
			suma=suma+nota;
	}
	promedio=suma/10;
	
	cout<<" "<<endl;
	
	cout<<"| NOTA MAXIMA: "<<max<<endl;
	cout<<"| NOTA MINIMA: "<<min<<endl;
	cout<<"| PROMEDIO: "<<promedio<<endl;
	cout<<"| NOTAS TOTALES: "<<suma<<endl;
	
return 0;
}