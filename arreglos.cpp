#include <iostream>

using namespace std;

main(){
	// posicion de arreglo 
	
		char nombre[30];
	cout<<"INGRESE TU NOMBRE COMPLETO :";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<"Tu Nombre Completo Es: "<<nombre<<endl;
	
	int tam=0, suma=0, promedio=0;
	int notas[tam];
	char res;
	do{ 
	tam++;
	cout<<"Ingrese nota :"<<tam<<":";
	cin>>notas[tam-1];
	cout <<"Desea Ingresar otra nota (s/n):";
	cin>>res;
	}while (res=='s' || res=='S');
	
	for (int i=0; i<tam; i++){
		suma +=notas[i];
		
	}
	cout<<"______________________________________________________"<<endl;
	promedio = suma / tam;
	cout <<"el promedio es :"<<promedio<<endl;
	
	cout<<"-----------------------------------------------------"<<endl;
	

system("pause");
}
