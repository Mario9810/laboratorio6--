/*
*Universidad del Valle de Guatemala
*Jos� Ovando 18071
*Mario Sarmientos 17055
*Laboratorio No. 6
*/

#include<iostream>
#include<stdlib.h> 
#include<string.h> 
#include<fstream> 

using namespace std;

void lectura();

int main()

{
	lectura();
	

  	
  	system("pause");
  	return 0;
	
}


void lectura(){
	ifstream archivo;
	string texto;
	
	archivo.open("FUENTE.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se encuentra el archivo";
		
		exit(1);
		
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
		
	}
	
	archivo.close();
}













