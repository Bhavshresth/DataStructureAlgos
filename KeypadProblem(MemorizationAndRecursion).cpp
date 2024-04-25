#include<iostream>
#include<vector>
using namespace std;
#define N 10
int main(){
	int mat[4][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9},
	{-1,0,-1}
	};
	
	vector< vector<int> > rows(10);
	//row[0]-> 8
	//row[1]->2,4
	int moveX[]={0,-1,0,1};
	int moveY[]={1,0,-1,0};
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			
				int previousmove=mat[i][j];
				rows[previousmove].push_back(previousmove);
				
			
				cout<<previousmove<<"->";
				for(int k=0;k<4;k++){
					int x=i+moveX[k];
					int y=j+moveY[k];
				
					if(x>=0&&x<4 && y>=0 && y<3){
						if(x==3 && y==0) continue;
						if(x==3 && y==2) continue;
						int nextMove=mat[x][y];
						rows[previousmove].push_back(nextMove);
						cout<<nextMove<<",";
					}
				}
				cout<<endl;
		}
	}



	return 0;
}
