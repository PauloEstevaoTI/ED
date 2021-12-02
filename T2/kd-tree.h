#ifndef _H_KDTREE
#define _H_KDTREE

typedef void* Node;
typedef void* Kd;
typedef void* InfoK;
typedef void* Nodekd;

Kd createKdTree();
int length(Kd tree);
int getTipo(Kd k);
//Nodekd getRoot(Kd k);
void printKdtreebyRoot(Kd k);
void insert(Kd k, double x, double y, char tipo, int id, InfoK info);
Nodekd searchKdTree(Kd k, int id);
void printKdTree(Kd root);
Nodekd searchKdTreebyRoot(Kd k, int id);

#endif