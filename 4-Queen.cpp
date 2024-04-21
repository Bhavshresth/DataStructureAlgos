#include<iostream>
using namespace std;

bool canPlace(int x,int y,int b[][4]){
	//will be returning if we can place a new queen on x,y with current state
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(b[i][j]==1){//if queen is there on board at i,j
				if(x==i||y==j||x-y==i-j||x+y==i+j)
				return false;
			}
		}
	}
	return true;
}

int solno=0;
void solve(int b[][4],int i){
	if(i==4){
//		print the board;
			cout<<"Solution :"<<solno<<endl;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){ cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<endl;
		solno++;
	}
	
	//if we are placing no i we will use row no :i
	for(int j=0;j<4;j++){
		//row i
		//col j
		//can we place it on current board?
		if(canPlace(i,j,b)){
			
			b[i][j]=1;
			solve(b,i+1);//we can call this method as backtracking
			b[i][j]=0;//here i indicates the row number
			//place next queen
		}
	}
}

int main(){
	int b[4][4];
	//1->represents a queen is placed
	//0->blank
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){ b[i][j]=0;
		}
	}
	solve(b,0);
}



/*
OutPut-:

Solution :0
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0


Solution :1
0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0


*/
