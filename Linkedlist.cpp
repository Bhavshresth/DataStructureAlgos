#include<iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
};

struct Node *HEAD;//head is initialise

void printList(){
	Node *temp =HEAD;//temp variable
	while(temp!=NULL){//used to see the value is null or not
		cout<<temp->val<<"->";//used to display the value
		temp=temp->next;//used to move to the next element
	}
	cout<<endl;
}

void addList(int n){//used to add a element at the last node
	
	Node *temp=HEAD;
	if(HEAD==NULL){
		HEAD= new Node;//used to create a head
		HEAD->val=n;//if the list is empty to enter first value to the list 
		HEAD->next=NULL;//to set the next element to null
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;//set next node is available
		}
			temp->next=new Node;
			temp->next->val=n;//set the next value 
			temp->next->next=NULL;//then the next value to NULL
	}
}
int main(){
	int arr[]={5,4,3,2,1,2,3,4,5};
	for(int i=0;i<9;i++){
		addList(arr[i]);
	}
	printList();
return 0;	
}
