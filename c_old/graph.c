
//Graphs

#include<stdio.h>
#include<stdlib.h>

#define VERTICES 1
#define DEBUG(x) printf("\n %d \n", x)

struct graph{
	int num_of_elements;
	int** head;};

typedef struct graph* Graph; 

Graph createGraph(void){
	Graph g;
	g = (Graph)malloc(sizeof(struct graph));
DEBUG(1);

	g->num_of_elements=0;
	g->head=NULL;

	return g;}

int initGraph(Graph g){
	g->head = (int**)malloc(sizeof(int*));
	if (g->head ==NULL){
		return -1;}
DEBUG(2);
	int i=0;
	while(i<VERTICES){
		g->head[i] = (int *)malloc(sizeof(int));
		if(g->head[i]==NULL){
			return -1;}
		i++;}
DEBUG(71);

	return 0;}


void insertEdge(Graph g, int i, int j){
	DEBUG(3);
	g->head[i-1][j-1] = 1;
	g->head[j-1][i-1] = 1;
	DEBUG(4);}


int main(void){
	Graph g = createGraph();
	initGraph(g);

	insertEdge(g,1,1);
	DEBUG(5);
	return 0;}
