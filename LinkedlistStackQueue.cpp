#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

//revision
struct Node{
	int val;
	Node *next;
};//used to create a Node
struct Node *head;//used to create a head part of a node

void printList(){
	Node *temp=head;//duplicate variable
	while(temp!=NULL){
		cout<<temp->val<<"->";//print 
		temp=temp->next;//move to next element
	}
	cout<<endl;
}

void addList(int x){
	Node *temp=head;
	if(head==NULL){//if 1st element is null
		head=new Node;//create a new node
		head->val=x;//set value of head
		head->next=NULL;//set next to null
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;//continue till it finds null node empty
		}
		temp->next=new Node;//next to new Node
		temp->next->val=x;//set value 
		temp->next->next=NULL;//next next to Null
	}
}

/*
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
		HEAD= new Node;//used to create a node
		HEAD->val=n;//if the list is empty to enter first value to the list 
		HEAD->next=NULL;//to set the next element to null
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;//move to the last list/node
		}
			temp->next=new Node;
			temp->next->val=n;//set the next value 
			temp->next->next=NULL;//then the next value to NULL
	}
}
*/
int main(){
	int arr[]={5,4,3,2,1,2,3,4,5};
	for(int i=0;i<9;i++){
		addList(arr[i]);
	}
	printList();
	
	queue<int> q;//fifo		front
	stack<int> s;//lifo 	top
	
	for(int i=0;i<5;i++){
	q.push(arr[i]);//used to insert element of the arr in stack and queue
	s.push(arr[i]);
	}
	cout<<"printing queue"<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	
	cout<<"printing stack"<<endl;
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	
return 0;	
}
