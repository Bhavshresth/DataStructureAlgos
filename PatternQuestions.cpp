#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int r,c;
	int space=n-1;
	for(r=1;r<=n;r++){
		for(c=1;c<=space;c++){
			cout<<" ";
		}
		for(c=1;c<=r;c++){
			cout<<c;
		}
		for(c=r-1;c>=1;c--){
			cout<<c;		}
		space--;
		cout<<endl;
	}

}
/*
Question No 1
5
    1
   121
  12321
 1234321
123454321
	int r,c;
	int space=n-1;
	for(r=1;r<=n;r++){
		for(c=1;c<=space;c++){
			cout<<" ";
		}
		for(c=1;c<=r;c++){
			cout<<c;
		}
		for(c=r-1;c>=1;c--){
			cout<<c;		}
		space--;
		cout<<endl;
	}

*/

/*
Question No 2
5
    *
   *  *
  *    *
 *      *
*        *
	int r,c;
	int space=n-1;
	for(r=1;r<=n;r++){
		for(c=1;c<=space;c++){
			cout<<" ";
		}
		for(c=1;c<=r;c++){
			if(c==1)
			cout<<"* ";
			else
			cout<<" ";
		}
		for(c=r-1;c>=1;c--){
			if(c==1)
			cout<<"* ";
			else
			cout<<" ";
		}
		space--;
		cout<<endl;
	}


*/

/*
Question No 3
5
1
23
456
78910
1112131415

int n;
cin>>n;
int r,c,k=1;
for(r=1;r<=n;r++){
	for(c=1;c<=r;c++){
		cout<<k++<<"    ";
	}
	cout<<endl;
}
*/

/*
Question No 4
5
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1    
vector<vector<int>> pascel(int n){
	vector<vector<int>> ans;
	if(n==0) return 0;
	vector<int>t;
	t.push_back(1);
	ans.push_back(t);
	if(n==1) return ans;
	
	vector<int>tt;
	tt.push_back(1);
	tt.push_back(1);
	ans.push_back(tt);
	
	for(int i=2;i<=n;i++){
		vector<int> temp;
		temp.push_back(1);
		for(int j=1;j<i;j++){
			temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
		}
		temp.push_back(1);
		ans.push_back(temp);
	}
	return ans;
}


*/


/*
Question No 5
5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
	int r,c,space=0;
	for(r=n;r>=1;r--){
		for(c=1;c<=space;c++){
			cout<<"  ";
		}
		for(c=1;c<=r;c++){
			cout<<"* ";
		}
		for(c=r-1;c>=1;c--){
			cout<<"* ";
		}
		space++;
		cout<<endl;
	}

*/

/*
Question No 6
5
   	*
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
int r,c,space=n-1;
	for(r=1;r<=n;r++){
		for(c=1;c<=space;c++){
			cout<<" ";
		}
		for(c=1;c<=r;c++){
			cout<<"* ";
		}
		space--;
		cout<<endl;
	}
	space=1;
	for(r=n-1;r>=1;r--){
		for(c=1;c<=space;c++){
			cout<<" ";
		}
		for(c=1;c<=r;c++){
			cout<<"* ";
		}
		space++;
		cout<<endl;	
	}	

*/

/*
Question No 7

5
    *
   * *
  * * *
 * * * *
* * * * *  

int r,c,space=n-1;
	for(r=1;r<=n;r++){
		for(c=1;c<=space;c++){
			cout<<" ";
		}
		for(c=1;c<=r;c++){
			cout<<"* ";
		}
		space--;
		cout<<endl;
			
	}
*/

/*
Question No 8
5
*****
****
***
**
*
for(r=n;r>=1;r--){
		for(c=1;c<=r;c++){
			cout<<"*";
		}
		cout<<endl;
	}

*/


/*
Question No 9
5
1
12
123
1234
12345
for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			cout<<c;
		}
		cout<<endl;
	}
	
*/




/*
Question No 10
5
*
**
***
****
*****


int r,c;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			cout<<"*";
		}
		cout<<endl;
	}

*/
