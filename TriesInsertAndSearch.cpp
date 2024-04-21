#include<iostream>
using namespace std;


struct Trie{
	Trie * children[10];
	bool end;
};
Trie *root=NULL;

Trie* createNode(){
	Trie *x=new Trie();
	for(int i=0;i<10;i++){
		x->children[i]=NULL;
	}
	x->end=false;
	return x;
}

void insert(string s){
	if(root==NULL){
		root=createNode();
	}
	Trie *curr=root;
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		int index=ch -'0';//'3'-'0'
		if(curr->children[index]==NULL){
			curr->children[index]=createNode();
		}
		else{
			//Nothing to be done
		}
		curr=curr->children[index];
		
	}
	curr->end=true;
	
	
}

bool search(string s){
	if(root==NULL){
	return false;
	}
	Trie *curr=root;
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		int index=ch-'0';
		if(curr->children[index]==NULL){
			return false;
		}
		
		curr=curr->children[index];
		
	}
	if(curr!=NULL && curr->end==true){
		return true;
	}
	else{
		return false;
	}
	
}

int main(){
	string s[]={"9876543210","9876543211","9876543213"};
	
	for(int i=0;i<3;i++){
		insert(s[i]);
	}
	cout<<"9876543211 found :"<<search("9876543211")<<endl;
	cout<<"9876543200 found :"<<search("9876543200")<<endl;
}
