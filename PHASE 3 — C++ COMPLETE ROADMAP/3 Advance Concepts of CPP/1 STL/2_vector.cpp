#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v1;
	v1.push_back(1);
	v1.emplace_back(2);
	
	cout<<v1[0]<<" "<<v1[1]<<endl;
	
	vector <pair <int,int>> v2;
	
	v2.push_back({1,2});
	cout<<v2[0].first<<" "<<v2[0].second<<endl;
	v2.emplace_back(3,4);
	cout<<v2[1].first<<" "<<v2[1].second<<endl;
	
	/* 
	1 2
    1 2
    3 4
	*/
	
	vector <int> v3(5,100);
	cout<<v3[0]<<" "<<v3[4]<<endl; //100 100
	
	vector <int> v5(5);
	cout<<v5[0]<<" "<<v5[4]<<endl; // 0 0
	
	
	 vector <int> v6(5,20);
	 vector <int> v7(v6);
	 
	 cout<<v6[0]<<" "<<v6[4]<<endl; // 20 20
	 cout<<v7[0]<<" "<<v7[4]<<endl; // 20 20 
	 
	return 0;

}
