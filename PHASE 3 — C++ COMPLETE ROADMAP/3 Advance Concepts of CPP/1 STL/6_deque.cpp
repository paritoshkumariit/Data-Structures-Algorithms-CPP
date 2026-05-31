#include <bits/stdc++.h>
using namespace std;

int main() {
	deque <int> dq;
	
	dq.push_back(1);
	dq.emplace_back(2);
	
	for(auto i:dq){
	    cout<<i<<" "; //1 2 
	}cout<<endl;
	
	dq.push_front(3);
	dq.emplace_front(4);
	
	for(auto i:dq){
	    cout<<i<<" "; //4 3 1 2 
	}cout<<endl;
	
	dq.pop_back();
	dq.pop_front();
	
	for(auto i:dq){
	    cout<<i<<" "; //3 1 
	}cout<<endl;
	
	cout<<dq.back(); //1
	cout<<dq.front(); //3
	
	return 0;

}
