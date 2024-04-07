//Binary Search for sqrt of a number
#include<iostream>
using namespace std;
int BS(int n){
	int first=1,last=n/2+1,ans;
	while(first<=last){
		int mid=(first+last)/2;//start+(last-start)/2;
		if(mid*mid==n)	return mid;
		else if(mid*mid>n)	last=mid-1;
		else{
		first=mid+1;
		ans=mid;
	}
	
	}
	return ans;
}

int main(){
	int n=25;
	cout<<BS(n)<<endl;
}

