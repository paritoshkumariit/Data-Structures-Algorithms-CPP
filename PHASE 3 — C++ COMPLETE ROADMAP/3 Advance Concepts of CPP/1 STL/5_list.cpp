#include <bits/stdc++.h>
using namespace std;

int main() {
	list <int> ls;
	
	ls.push_back(1);
	ls.emplace_back(2);
	
	for(auto i:ls){
	    cout<<i<<" ";
	}cout<<endl;
	
	ls.push_front(3);
	ls.emplace_front(4);
	
	for(auto i:ls){
	    cout<<i<<" ";
	}
	
	//1 2 
	//4 3 1 2 
	return 0;
	

}
