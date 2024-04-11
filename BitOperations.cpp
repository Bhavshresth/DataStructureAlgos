#include<iostream>
using namespace std;
int bruteXOR(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum+=arr[i]^arr[j];
		}
	}
	return sum;
}



int main(){
	int arr[]={5,3352,227,18,9};
	int n=5,base=1;
	int  sum=0;
	cout<<"Brute Solution O(N^2) "<<bruteXOR(arr,n)<<endl;
	
	for(int i=0;i<32;i++){
		int zeroCount=0,oneCount=0;
		for(int j=0;j<n;j++){
			if(arr[j]&1) oneCount++;
			else zeroCount++;
			//a[j]=a[j]/2;
			arr[j]=arr[j]>>1;
		}
		sum+=(oneCount)*zeroCount*base;
		base*=2;
		//base=base<<1;
	}
	cout<<"Optimal Solution O(N) "<<sum<<endl;
	
	return 0;
}
