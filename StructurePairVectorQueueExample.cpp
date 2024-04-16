#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
struct point{//it has two user entry
	int x;
	int y;
};

struct point getPoint(int x,int y){//a function using structure
	struct point data;
	data.x=x;
	data.y=y;
	return data;
}

int main(){
	struct point p=getPoint(5,10);//used to call the function in the main class
	cout<<p.x<<","<<p.y<<endl;
	pair<int,int > point(5,10);
	cout<<point.first<<","<<point.second;
	 
	queue<int> q;
	q.push(122);
	q.push(100);
	cout<<q.front()<<endl;
	
	vector< pair<string,int> > result;
	pair<string,int> data1("hello",5);
	pair<string,int> data2("World",10);
	pair<string,int> data3("Wow",15);	
	
	result.push_back(data1);
	result.push_back(data2);
	result.push_back(data3);
	
	for(int i=0;i<result.size();i++){
		cout<<result[i].first<<":"<<result[i].second<<endl;
	}
	
	return 0;
}
