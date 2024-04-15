#include<vector>
#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> data;
	int a[]={21,21,12,32,32};
	int size=5;
	for(int i=0;i<size;i++){
		data.insert(a[i]);
	}
	vector<int>arr(data.begin(),data.end());
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}	
}
