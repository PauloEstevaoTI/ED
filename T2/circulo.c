#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "circulo.h"


typedef void *circulo;

typedef struct Circulo{
   
	int id;
	double x;
	double y;
	double r;
	char fill[100];
	char border[100];
	double p1;
	double p2;	
	double p3;
		
}circulo_t;

void printCircle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	
}
int getCircleId(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->id;
}

double getXCircle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->x;
}

double getYCircle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->y;
}

double getRCircle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->r;
}

char* getFillCircle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->fill;
}

char* getBorderCircle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->border;
}

double getP1Circle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->p1;
}

double getP2Circle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->p2;
}

double getP3Circle(void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	return this->p3;
}



void setIdCircle(int id, void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	this->id = id;
}

void setXCircle(double x, void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	this->x = x;
}

void setYCircle(double y, void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	this->y = y;
}

void setRCircle(double r, void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	this->r = r;
}

void setFillCircle(char* fill, void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	//Função para limpar string em C */
	bzero(this->fill, 100);
	strcpy(this->fill, fill);
}

void setBorderCircle(char* border, void* circulo){
	circulo_t* this;
	this = (circulo_t*) circulo;
	//Função para limpar string em C */
	bzero(this->border, 100);
	strcpy(this->border, border);
}



circulo cria_Circulo(int id, double r, double x, double y, char *fill, char *border)
{
	circulo_t* circulo = malloc(sizeof(circulo_t));

	circulo->id = id;
	circulo->x = x;
	circulo->y = y;
	circulo->r = r;
	strcpy(circulo->fill, fill);
	strcpy(circulo->border, border);
	circulo->p1 = 0.0;
	circulo->p2 = 0.0;
	circulo->p3 = 0.0;
	//strcpy(circulo->tipo, tipo);
	

	return circulo;

}


void drawCircle(circulo c, char* svgQry){
	
	double x = getXCircle(c);
	double y = getYCircle(c); 
	double r = getRCircle(c);
	char fill[100];
	char border[100];

	strcpy(fill, getFillCircle(c));
	strcpy(border, getBorderCircle(c));

	desenha_Circulo(svgQry, r, x, y, fill, border);
	
}
