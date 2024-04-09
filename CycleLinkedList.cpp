//TO check wethere the Linklist is cyclic or not 
#include<iostream>
using namespace std;

struct Node{
	int val;
	Node *next;
};

struct Node *head;

	struct Node* addNode(int x){
	Node *temp=head;
	if(head==NULL){
		head=new Node;
		head->val=x;
		head->next=NULL;
		return head;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new Node;
		temp->next->val=x;
		temp->next->next=NULL;
		return temp;
	}
}

void print(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	addNode(1);
	addNode(2);
	addNode(3);
	struct Node* first=addNode(4);
	addNode(5);
	addNode(6);
	addNode(7);
	struct Node* second=addNode(8);
	second->next=first;
	bool loopExist=false;
	struct Node *slow=head,*fast=head;
	while(fast && slow && fast->next){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow)
		{
			loopExist=true;
			break;
		}
	}
	cout<<"loop exist int the LL is "<<loopExist<<endl;
//	print();
	
	return 0;
	
	
}


/**/
