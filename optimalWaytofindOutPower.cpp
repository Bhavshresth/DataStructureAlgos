//to find power of a number 
#include<iostream>
using namespace std;
int power(int a,int n){
	int ans=1;//use long long int for high values
	while(n>0){
		if(n%2==1){
			ans*=a;
		}
		n/=2;
		a*=a;//use mod for higher values mod=10^9+7	%mod
		
	}
	return ans;
}
int main(){
	int n=2,a=6;
	cout<<power(n,a)<<endl;
	return 0;
}
