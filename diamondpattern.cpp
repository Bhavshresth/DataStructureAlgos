//diamond pattern
#include<iostream>
using namespace std;
int main(){
	int n=5;
	int space=n-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<space;j++)
			cout<<" ";
		
		for(int j=0;j<=i;j++)
			cout<<"* ";
		
		
		space--;
		cout<<endl;
	}
	space=0;
	for(int i=n;i>0;i--){
		for(int j=0;j<space;j++)
			cout<<" ";
		for(int j=0;j<i;j++)
			cout<<"* ";
		
		space++;
		cout<<endl;
	}
}
