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
	char nombre[30];
	int edad;
	int nota;
	struct Estudiante *siguiente;
};
Estudiante est;
Estudiante *primero=NULL;
Estudiante *fin;
struct Lista{
void agregar(Estudiante)
{

			primero=(struct Estudiante *)malloc(sizeof(struct Estudiante));//creando un nuevo nodo asignando memoria
			primero->siguiente = fin;
			cout<<"ingrese nombre"<<endl;
			cin>>est.nombre;
			cout<<"ingrese edad"<<endl;
			cin>>est.edad;
			cout<<"ingrese nota"<<endl;
			cin>>est.nota;
			primero->nombre[30]=est.nombre[30];
			primero->edad=est.edad;
			primero->nota=est.nota;
			fin = primero;//pasa al valor siguiente.
}
}lista1;



#endif /* AGREGAR_H_ */
