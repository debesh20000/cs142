#include <iostream>
using namespace std;
class Node{
	public:
	//data
	int data;
	//pointer to next node
	Node * next;
	// constructor that makes pointer to null
	Node(){
		next=NULL;
	}
}
class Linkedlist(
	//head+circles linkeed with each otherr
	
	//head- node type pointer
	Node * head;
	Node * tail;
	//construct
	Linkedlist(){
		head=NULL;
		tail = NULL;
	}
	//circles inside linked to each other
	//rules how circles will be linked
	//insert
	void insert(int value){		//if first node is added
		Node * temp =new Node;
		// insert data in nodecl
		temp->data = value;
		//1st node only
		if(head == NULL)
			head = temp;
			tail = temp;
		//2nd Node only
		else(
			tail->next = temp;)
			tail=temp; 

void insert(int pos, int value){
		//reach the place before pos
		Node * current = head;
		int i=1;
		while(i<pos-1){
			i++;
			current= current->next;}
}
		//create node
		Node * temp=new Node;
		temp-> data = value;
		//moving ptrs like magic
		temp->next = current->next;
		temp->next = temp;
		}
	//deletion
	void dellete(){
		//store the tail in temp
		Node * temp =tail;
		Node*current= head;
		while(current!=tail){
			current= current->next;}
			}
	//display
	void display(){
		Node * current = head;
		while(current!=NULL){
			cout << current->data<<"->"<<endl;
			current = current->next;

			}

}

int main(){
	Linkedlist l1;
	l1.insert(1);
	l1.insert(2);

	l1.insert(3);

	l1.insert(4);
	l1.display();
	l1.dellete();
	l1.display()
	return 0;
}
