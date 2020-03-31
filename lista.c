#define lista_h


#include "lista.h"
#include <stdlib.h> 
#include <string.h> 

Nodo* CrearNodo (libro* libro){
	Nodo* nodo =(Nodo*) malloc (sizeof (Nodo));
	strncpy(Nodo->libro.titulo, libro.titulo->titulo,50);
	strncpy(Nodo->libro.autor, libro.autor->autor,50);
    strncpy(Nodo->libro.isbn, libro.isbn->titulo,13);
	nodo->siguiente =Null;
    return Nodo;
}
void DestruirNodo(Nodo* nodo){
	free(nodo);
}
void InsertarPrincipio(lista* lista, libro* libro){           /*insertando al pricipi*/
	Nodo* nodo =CrearNodo(libro);
	nodo->siguiente =lista->cabeza;
	lista->cabeza=nodo;
	lista->longitud++;
}
void InsertarFinal(lista* lista, libro* libro){           /*insertando al final*/
	Nodo* nodo =CrearNodo(libro);
	if (lista->cabeza==NULL){
		lista->cabeza=nodo;
	}else{
		Nodo* puntero =lista->cabeza;
	while(puntero->siguiente){
		puntero=puntero->sigiente;
	}	
	

	puntero->siguiente=nodo;
}
	lista->longitud++;
}
void InsertarDespues( int n lista* lista, libro* libro ){
		Nodo* nodo =CrearNodo(libro);
	if (lista->cabeza==NULL){
		lista->cabeza=nodo;
	}else{
		Nodo* puntero =lista->cabeza;
		int posicion=0;
	while(posicion <n && puntero->siguiente){
		puntero=puntero->siguiente;
		posicion++;
	}	
		nodo->siguiente =puntero->siguiente;
		puntero->siguiente=nodo;
}
	lista->longitud++;
}

libro* Obtener(int n lista* lista){
		if (lista->cabeza==NULL){
		return = NULL;
	} else{
		 	Nodo* puntero =lista->cabeza;
		int posicion=0;
	while(posicion <n && puntero->siguiente){
		puntero=puntero->siguiente;
		posicion++;
	}	
		if(posicion!= n){
			return NULL;
		}else{
			return & puntero->libro;
		}

	}
}
int Contar(){
	return 	lista->longitud;
	
}
int EstaVacia(lista* lista){
	return 	lista->cabeza ==NULL;
	
}
void EliminarPrincipio(lista* lista){
	if(lista->longitud){
		Nodo* eliminado = lista->cabeza;
		lista->cabeza=lista->cabeza ->siguiente;
		DestruirNodo(eliminado);
		lista->longitud--;
	}
}
void EliminarUltimo(lista* lista){
	if(lista->cabeza){
		if(lista->cabeza->siguiente){	
		lista->puntero=lista->cabeza;
		while( puntero->siguiente->siguiente){
		puntero=puntero->siguiente;
		
	}
	Nodo* eliminado =puntero->siguiente;
	puntero->siguiente=NULL;
	DestruirNodo(eliminado);
		lista->longitud--;
	}else{
		Nodo* eliminado =puntero->cabeza;
		lista->cabeza=NULL;
			lista->longitud--;
	}
}
}
void Eliminar(int n lista* lista){
	if(	lista->cabeza){
		if(n==0){
		Nodo* eliminado =lista->cabeza;
		lista->cabeza=lista->cabeza->siguiente;
	    DestruirNodo(eliminado);
		lista->longitud--;
	}else if (n<lista->longitud){
		Nodo* eliminado =lista->cabeza;
		int posicion=0;
		while( posicion<(n-1) ){
		puntero=puntero->siguiente;
		posicion++;
		
	}
		Nodo* eliminado =puntero->siguiente;
		puntero->siguiente=eliminado->siguiente;
	    DestruirNodo(eliminado);
		lista->longitud--;
	}
}
}
