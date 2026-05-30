#include <bits/stdc++.h>
using namespace std;

int main() {
	pair <int,int> p = {1,2};
	cout<<p.first<<" "<<p.second<<endl;
	
	pair <int, pair<int,int>> q = {1,{2,3}};
	cout<<q.second.first<<endl;
	
	pair <int,int> arr[] = {{1,2},{3,4},{5,6}};
	cout<<arr[1].second;
	
	return 0;

}


/*
Output:
1 2
2
4

*/