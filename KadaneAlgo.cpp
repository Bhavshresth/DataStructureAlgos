//Kadane's Algo to find max sum of the sub array
#include<iostream>
#include<vector>
using namespace std;

int KA(vector<int> arr){
	int G=INT_MIN;
	int cur=0;
	for(int i=0;i<5;i++){
		cur+=arr[i];
		if(cur>G)	G=cur;
		if(cur<0)	cur=0;
}
	return G;
}
int main(){
	vector<int> arr(5);
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<KA(arr)<<endl;
}


