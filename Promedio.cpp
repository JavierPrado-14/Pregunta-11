#include <iostream>
#include <conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
};

struct Alumno{
	char curso [20];
	char nombre [20];
	char apellido [20];
	int codigo; 
	struct Promedio prom;
	
}alumno1;

int main (){
	
	cout<<"ESTE PROGRAMA MUESTRA EL PROMEDIO DE CLASES DEL ALUMNO";
	
	float promedio_alumno;
	cout<<"\nIngrese el nombre del curso: ";
	cin.getline(alumno1.curso,20,'\n');
	cout<<"\nIngrese el primer Nombre del Alumno:";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"Ingrese el primer Apellido del Alumno:";
	cin.getline(alumno1.apellido,20,'\n');
	
	cout<<"\nNotas del Alumno ";
	cout<<"\nIngrese nota 1: ";
	cin>>alumno1.prom.nota1;
	cout<<"Ingrese nota 2: ";
	cin>>alumno1.prom.nota2;
	cout<<"Ingrese nota 3: ";
	cin>>alumno1.prom.nota3;
	cout<<"Ingrese nota 4: ";
	cin>>alumno1.prom.nota4;
	
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3+alumno1.prom.nota4)/4;
	
	cout<<"Nombre del Curso: "<<alumno1.curso<<endl;
	cout<<"Datos del Alumno Ingresado: ";
	cout<<"\nCodigo del Alumno: "<<alumno1.codigo<<endl;
	cout<<"Nombre del Alumno: "<<alumno1.nombre<<endl;
	cout<<"Apellido del Alumno: "<<alumno1.apellido<<endl;
	cout<<"El promedio del alumno es:"<<promedio_alumno<<endl;
	
	string mensaje ="";
	mensaje = promedio_alumno>60? "Aprobado" : "Repobrado";
	cout<<"El promdio es: "<<promedio_alumno<<" Por lo tanto esta "<<mensaje<<endl;
	
	getch();
	return 0;
}
