#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
long long int path[1005][1005] = {0}; 
char matrix[1005][1005];
 
using namespace std;
int main (){
 
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        scanf("%s",matrix[i]);
    }
 
    // First Row
    int pathCount = 1;
    for(int j=1;j<n;j++){
        if(matrix[0][j]=='#') pathCount =0;
        path[0][j] = pathCount;
    }
 
    // First column
    pathCount = 1;
    for(int i=1;i<n;i++){
        if(matrix[i][0]=='#') pathCount = 0;
        path[i][0] = pathCount;
    }
    
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]!='#')
            path[i][j]=(path[i-1][j]+path[i][j-1])%2147483647;  
        }
    }
    
    bool solutionFound = false;
    
    if(path[n-1][n-1]!=0){
        cout<<path[n-1][n-1]<<endl;
    }else{
        // 
        queue< pair<int,int> > q;
        q.push( make_pair(0,0) );
        matrix[0][0] = '*';
 
        ///
        while( !q.empty() ){
            
            pair<int,int> front = q.front(); 
            //remove this front option as we have exploring this now.
            q.pop();
            int x = front.first;
            int y = front.second;
            
            if( x == n-1 && y == n-1 ){
                solutionFound = true;
                break;
            }   
                
            vector< pair<int,int> > possibleMoves;
            possibleMoves.push_back(make_pair(x,y-1)); 
            possibleMoves.push_back(make_pair(x,y+1));
            possibleMoves.push_back(make_pair(x-1,y));
            possibleMoves.push_back(make_pair(x+1,y));
            
            
            for(int i=0;i<possibleMoves.size();i++){
                pair<int,int> p = possibleMoves[i];
                if( p.first >= 0 && p.first <= n-1 && p.second >= 0 && p.second <= n-1 ){
                    if( matrix[p.first][p.second] == '.' ){
                        matrix[p.first][p.second] = '*';
                        q.push(p);                  
                    }
                }
            }
        }
        
        cout<<(solutionFound ?"THE GAME IS A LIE":"INCONCEIVABLE")<<endl;
    }
    
    return 0;
}
