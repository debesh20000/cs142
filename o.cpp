#include <iostream>
using namespace std;

class Node{
public: 
	int data;
	// Pointer to point tob the next Node
	Node * next;
	// Construct that makes the pointer to NULL
	Node(){
		next = NULL;
		}

	};

class LinkedList{
	public:
	Node * head;
	Node * tail;

	// Constructor
	LinkedList(){
		head = NULL;
		tail = NULL;
	} 
	void insert(int value){
	Node * temp = new Node; 
	// Insert value in the node
	temp->data = value;
	if(head == NULL){
		head = temp;
	}
	// Any other Node only.
	else{
		tail->next = temp;
	}
	tail = temp;
	} 

	void insertAt(int pos, int value){
	//place before the pos
	Node * current = head;
        int i =1;
        while(i < pos-1){
		i++;
		current = current->next;
        }

        // Create a node
        Node * temp = new Node;
        temp -> data = value;

        // Moving pointers
        temp->next = current->next;
        current->next = temp;
	}

	void dellete(){
        // store the tail in temp
        Node * temp = tail;
        // before tail has to point to null

        Node * current = head;
        while(current->next != tail){
		current = current->next;
	}
        current->next = NULL; 

        // update tail
        tail = current;
        // delete temp
        delete temp;
	}
	// Display

	void display(){
        Node * current = head;
        while(current != NULL){
		cout << current->data << "->";
		current = current->next;
	}
        cout << endl;
	}

	void revdisplay(){
	revdisplay2(head);
	cout<<endl;	}

	void revdisplay2(Node * current){
		//moves to next (till available)
		if(current==NULL)return;
		else{
		revdisplay2(current->next);
		cout<<current->data<<"->";

		}
	}	
	void deleteat(int pos){
	Node * current = head;
        int i =1;
        while(i < pos-1){
		i++;
		current = current->next;
        }
	Node*temp=current->next;
	current->next=temp->next;	
	delete temp;}

	void count(){
	Node * current = head;
	for(int i=1; current!=NULL ; i++){
	current=current->next;
	if(current==NULL){cout<<i<<endl;}}
        }
/*	void revLL(){
		revLL2(head);}
	void revLL2(Node * current){
		//condition for empty ll
		if (current=NULL) return;
		//condition for 1 element
		else if(current->next==NULL){ head=current; return;}
		//reverse for rest
		else(
	revLL2(current->next);
	current->next->next =current;}*/
	};
int main(){
	LinkedList lol;
	lol.insert(1);
	lol.insert(2);
	lol.insert(3);
	lol.insert(4);
	lol.display();
	lol.dellete();
	lol.display();
	lol.insertAt(2,8);
	lol.display();
	lol.revdisplay();
	lol.deleteat(2);
	lol.display();
	lol.count();
	return 0;
}
