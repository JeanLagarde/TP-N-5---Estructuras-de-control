#include <iostream>
using namespace std;
int main ()
{
	float aprobados=0, reprobados=0, nota=0;
	
	cout<<"- NOTAS -"<<endl;
	cout<<" "<<endl;
	
	for (int i=1; i<=10; i++)
	{
		cout<<i<<" NOTA: ";
		cin>>nota; 
		
		if (nota>=7)
		{
			aprobados++;
		}
		else
		{
			reprobados++;
		}
	}
cout<<" "<<endl;
cout<<"| APROBADOS: "<<aprobados<<endl;
cout<<"| REPROBADOS: "<<reprobados<<endl;

return 0;
}