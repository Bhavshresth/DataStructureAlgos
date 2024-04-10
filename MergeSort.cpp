//Merge sort
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void merge(vector<int> &arr,vector<int> &temp,int low,int mid,int high){
	int i=low;//pointer low to mid
	int j=mid+1;//pointer mid+1 to high
	
	int y=0;
	while(i<=mid && j<=high){
		if(arr[i]>=arr[j]){
			temp[y++]=arr[i];//filling element into the temp array
			i++;
		}
		else{
			temp[y++]=arr[j];
			j++;
		}
	} 
//	if i was not finish till the mid
	while(i<=mid){
		temp[y++]=arr[i];i++;
	}
//if j was not finish till end
	while(j<=high){
		temp[y++]=arr[j];j++;
	}
//	fill all element into the main  array
	for(int k=low,y=0;k<=high;k++,y++){
	arr[k]=temp[y];
	}
}


void mergeSort(vector<int> &arr,vector<int> &temp,int low,int high){//&arr is a reference variable if we change any 
//element in the arr it wilb be reflect to the main array
	if(low>=high) return;
	
	int mid=(low+high)/2;
	//Breaking into two pieces
	mergeSort(arr,temp,low,mid);
	mergeSort(arr,temp,mid+1,high);
	//then sort and merge them both
	merge(arr,temp,low,mid,high);
}

int main(){
	vector<int> data (10);
	for(int i=0;i<data.size();i++){
		cin>>data[i];
	}
	vector<int> temp(data.size());
	int low=0,high=data.size()-1;
	mergeSort(data,temp,low,high);//calling merge!
	
	for(int i=0;i<=high;i++){
		cout<<data[i]<<",";
	}
	cout<<endl;
	return 0;
}
