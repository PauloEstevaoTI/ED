#ifndef H_START_SVG 
#define H_START_SVG
#include "lista.h"


/*Inicializa o SVG */
void cria_SVG(FILE* arqSvg);	

void desenha_Circulo(FILE* arqSvg, double x, double y, double r, char* fill, char* border);

void desenha_Retangulo(FILE* arqSvg, double w, double h, double x, double y, char* fill, char* border); 

void desenha_Linha(FILE* arqSvg, double x1, double y1, double x2, double y2, char* color);

void desenha_Texto(FILE* arqSvg, double x, double y, char* fill, char* border);

// void mudar_cor(LIST* l, int id, char *fill, char *border);

// void mudar_cor_2(LIST* l, int id, int xd, char *fill, char *border);

// void linhaCheia(FILE* arqSvg, double rectX, double rectY, double width, double height);

// void linhaTracejada(FILE* arqSvg, double rect, double rectY, double widht, double height);


#endif