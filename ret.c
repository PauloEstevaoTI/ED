#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ret.h"

/*falta testar */

typedef void* retangulo;

typedef struct Retangulo{
	int id;
	double w;
	double h;
	double x;
	double y;
	char fill[100];
	char border[100];
    
}retangulo_t;

int getRectId(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->id;
}

double getWidthRect(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->w;
}

double getHeightRect(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->h;
}

double getXRect(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->x;
}

double getYRect(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->y;
}

char* getFillRect(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->fill;
}

char* getBorderRect(void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	return this->border;
}

void setIdRect(int id, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	this->id = id;
}

void setWidthRect(double w, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	this->w = w;
}

void setHeightRect(double h, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	this->h = h;
}

void setXRect(double x, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	this->x = x;
}

void setYRect(double y, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	this->y = y;
}

void setFillRect(char* fill, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	strcpy(this->fill, fill);
}

void setBorderRect(char* border, void* retangulo){
	retangulo_t* this;
	this = (retangulo_t*) retangulo;
	strcpy(this->border, border);
}



retangulo cria_Retangulo(int id, double w, double h, double x, double y, char *fill, char *border)
{
	retangulo_t* retangulo = malloc(sizeof(retangulo_t));

	retangulo->id = id;
    retangulo->w = w;
    retangulo->h = h;
	retangulo->x = x;
	retangulo->y = y;
	
	strcpy(retangulo->fill, fill);
	strcpy(retangulo->border, border);

	return retangulo;

}
