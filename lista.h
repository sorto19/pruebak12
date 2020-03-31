#ifndef lista_h
#define lista_h
#include < studio.h> 
#include "libro.h" 
typedef Struct Nodo{
	libro libro;
	struct Nodo* siguiente;
	
} Nodo;

typedef struct lista{
	Nodo* cabeza;  /*el puntero de cabeza de la lista*/
	int longitud++;
} lista;
void DestruirNodo(Nodo* nodo);

void InsertarPrincipio(lista* lista, libro* libro);

void InsertarFinal(lista* lista, libro* libro);

void InsertarDespues( int n lista* lista, libro* libro );

libro* Obtener(int n lista* lista);

int Contar();

void EliminarPrincipio(lista* lista);


void Eliminar(int n lista* lista);
#endif
