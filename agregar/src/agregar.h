/*
 * agregar.h
 *
 *  Created on: 5/05/2016
 *      Author: Mario Rosa
 */

#ifndef AGREGAR_H_
#define AGREGAR_H_

#include <iostream>
#include <string.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

struct Estudiante
{
	char nombre[5];
	int edad;
	int nota;
	struct Estudiante *siguiente;
};

void agregar()
{
		struct Estudiante *fin;
		struct Estudiante *primero;
		fin=NULL;
		char nombres[5];
		int edades, notas;
		int cantidad;
		int i=0;
		cout<<"confirme la cantidad de alumnos"<<endl;
		cin>>cantidad;
		while(i!=cantidad)

		{
			primero=(struct Estudiante *)malloc(sizeof(struct Estudiante));//creando un nuevo nodo asignando memoria
			primero->siguiente = fin;
			cout<<"ingrese nombre"<<endl;
			cin>>nombres;
			primero->nombre[5]=nombres[5];//asigna posicion
			cout<<"ingrese edad"<<endl;
			cin>>edades;
			primero->edad=edades;//asigna posicion
			cout<<"ingrese nota"<<endl;
			cin>>notas;
			primero->nota=notas;//asigna posicion
			fin = primero;//pasa al valor siguiente.
			i++;
		}
		while(primero!=NULL)
		{
			cout<<"nombre del estudiante: "<<primero->nombre[5]<<endl;
			cout<<"edad del estudiante: "<<primero->edad<<endl;
			cout<<"nota del estudiante: "<<primero->nota<<endl;//imprime del mas nuevo al mas viejo
			primero=primero->siguiente;

		}

	system ("PAUSE");
}

#endif /* AGREGAR_H_ */
