#include<iostream>
#include<vector>
using namespace std;
int SEO(int n){
	vector <int> arr(n+1,0);//set all arrays to 0
	for(int i=2;i*i<=n;i++){
		if(arr[i]==0){
			for(int j=2*i;j<=n;j+=i){//used to find tha accuate difference between the number
				arr[j]=1;
			}
		}
	}
		for(int i=2;i<=n;i++){
			if(arr[i]==0)
			cout<<i<<endl;
		}
}
int main(){
	SEO(10);
}
