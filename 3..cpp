#include <iostream>
using namespace std;
int main ()
{
	float num=0, num2;
	
	cout<<"- ESTE PROGRAMA DIVIDE SU NUMERO POR 2 HASTA LLEGAR A 0.01 -"<<endl;
	
	cout<<" "<<endl;
	
	cout<<"| INGRESE UN NUMERO: ";
	cin>>num;
	
	cout<<" "<<endl;
	
	cout<<"| RESULTADOS: "<<endl;
	
	while (num>0.01)
	{
		num2=num/2;
		cout<<num<<" / 2 = "<<num2<<endl;
		num=num2;
	}
return 0;
}