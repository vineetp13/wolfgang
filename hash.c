//Hashtable

#include<stdio.h>
#include<stdlib.h>

struct element{
	int value;
	int num_elements;};

typedef struct element* Element;

struct hashTable{
	Element head;
	int num_total_elements;};

typedef struct hashTable* HashTable;

HashTable createHT(void){
	HashTable ht = (HashTable) malloc(sizeof(HashTable));
	ht->head=NULL;	
	ht->num_total_elements=0;
	return ht;}

HashTable initHT(HashTable ht){
	//depends on the requirements from HashTable
	ht->head = (Element)malloc(sizeof(struct element)*26);
	ht->num_total_elements=0;

	if(ht->head == NULL){
		return NULL;}

	return ht;}


void insertHT(HashTable ht, int value){
	ht->head[value-1].value = value+2;
	ht->head[value-1].num_elements++;
	
	return ;}

//createhash
int createHash(char ch){
	return (ch-'a');}



void printHT(HashTable ht){
printf("\n \t Table index \t Bucket value \t Num of elements \n");	
int i=0;
for(i=0;i<26;i++){
printf("\t%d\t %d \t %d \n",i, ht->head[i].value, ht->head[i].num_elements);}
return ;}


int main(void){
	HashTable ht = createHT();
	ht = initHT(ht);

	int value = createHash('b');
	insertHT(ht, value);

	value = createHash('b');
	insertHT(ht, value);
	value = createHash('b');
	insertHT(ht, value);
	printHT(ht);

	return 0;}

