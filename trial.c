#include <Stdio.h>
#include<stdlib.h>

struct node {
	struct node* next;
	int val;};

typedef struct node Node; 

//Prototypes
int createList(void);
int insertNode(Node* head, int val);
int deleteNode(Node* head, int val);
int findNode(Node* head);

int createList() {
//returns 0 if correct, else return -1
	Node* node_ptr = (Node *)malloc(sizeof(Node));
if(node_ptr!=NULL){
	node_ptr -> next = NULL;
	node_ptr->val = -1;
	return 0;}
	return -1;}

int insertNode(Node* head, int val){
	Node* temp_node=head;
	while(temp_node->val<val){
		temp_node = temp_node->next;}
	if(temp_node!=NULL){//Not the last element
		Node* new_node=(Node*)malloc(sizeof(Node));
		new_node->next = temp_node->next;
		new_node->val = val;
		temp_node->next = new_node;}
	return 0;}

int main(){
	return 0;}
