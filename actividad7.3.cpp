#include <iostream>
using namespace std;

struct Estudiante{

int *codigo;
string *nombre;
int **notas;
};


main(){
Estudiante estudiante;

int fila=0,columna=0;
cout<< "Cuantos estudiantes desea agregar?"<< endl;
cin >> fila;

cout << "Cuantas notas por estudiante?"<< endl;
cin >> columna;

estudiante.codigo = new int [fila];
estudiante.nombre = new string[fila];
estudiante.notas = new int *[fila];

for(int i=0; i<fila;i++){
	estudiante.notas[i]= new int [columna];
	
}
	
	cout << "___________Ingreso de notas___________"<< endl;
	for(int i=0; i<columna;i++){
		cout << "codigo["<<i<<"]:";
		cin>> estudiante.codigo[i];
		cout << "nombre completo["<<i<<"]:";
		getline(cin, estudiante.nombre[i]);
		for(int ii=0; ii<columna;ii++){
			cout << "Ingrese nota["<<ii<<"]:";
			cin>> *(*estudiante.notas+i)+ii);
		}
		cout << "_________________________________"<< endl;
	}
	
	for(int i=0;i<fila;i++){
		delete[] estudiante.notas[i];
	}
	delete[] estudiante.codigo[i];
	delete[] estudiante.nombre[i];
	delete[] estudiante.notas[i];
	cout << "_____________Mostrar datos___________<<"<< endl;
	system("pause");
}
