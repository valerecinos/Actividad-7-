#include <iostream>
using namespace std;

struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};

main(){
	Estudiante estudiante;
	for (int i=0; i<4; i++){
		cout <<"______________________________"<< endl;
	cout << "Ingrese codigo: "<< endl;
	cin >> estudiante.codigo[i];
	cin.ignore();
	cout << "Ingrese nombre completo"<< endl;
	getline(cin,estudiante.nombre[i]);
	cout<< "Ingrese nota"<< endl;
	cin>> estudiante.nota[i];
}
for(int i=0; i<4;i++){
	cout << "________________________________"<< endl;

	cout << "Codigo: "<< estudiante.codigo[i]<< endl;
	cout << "nombre: "<< estudiante.nombre[i]<< endl;
	cout << "Nota: "<< estudiante.nota[i]<< endl;
}
	
	system("pause");
}
