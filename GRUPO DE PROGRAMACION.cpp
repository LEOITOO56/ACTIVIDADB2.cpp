#include<iostream>
using namespace std;
int main()
{
int c;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];


cout<<"OPERACIONES CON MATRICES:\n\n";
cout<<"digite la  OPERACION a REALIZAR? \n\n\n";
cout<<"1. Suma \n";
cout<<"2. Resta \n";
cout<<"3. Multiplicacion \n";
cout<<"4. Division \n";
cout<<"\n";

//PRESENTACIÓN DE LAS MATRICES// LEONARDO RAMIREZ

cout<<"LAS MATRICES SON:\n\n\n\n";

for (int i=0;i<10;i++)
{
	cout<<matriz1[i]<<" - ";
}
cout<<"\n\n";

for (int i=0;i<10;i++)
{
	cout<<matriz2[i]<<" - ";
}

cout<<"\n\n";
cout<<"******\n\n";

cout<<"ELIJA LA OPERACION QUE DESEA REALIZAR:\n\n";
cin>>c;
cout<<"\n\n";


//SUMA DE LAS MATRICES// le toco a gerald Swanson
if(c==1)

{
	cout<<"USTED A ESCOGIDO LA SUMA\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	suma[i]=matriz1[i]+matriz2[i];
	cout<<suma[i]<<"\n";
}
}

cout<<"******\n\n";

//RESTA DE LAS MATRICES// le toco a josue lastra
if(c==2)

{
	cout<<"USTED A ESCOGIDO LA RESTA\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	resta[i]=matriz1[i]-matriz2[i];
	cout<<resta[i]<<"\n";
}
}

//MULTIPLICACIÓN DE LAS MATRICES// joan enrique san lucas

if(c==3)

{
	cout<<"USTED A ESCOGIDO LA MULTIPLICACION\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	producto[i]=matriz1[i]*matriz2[i];
	cout<<producto[i]<<"\n";
}
}

//DIVISIÓN DE LAS MATRICES// le toco a kerly nieves

if(c==4)

{
	cout<<"USTED A ESCOGIDO LA  DIVISION\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	division[i]=matriz1[i]/matriz2[i];
	cout<<division[i]<<"\n";
}
}



return 0;

}
//JOSUE SAMUEL LASTRA CAICEDO
//Kerly Andrea Nieve Fierro
//Joan Enrique San Lucas 
//GERALD MARTIN SWANSON
//GERALD MARTIN SWANSON
