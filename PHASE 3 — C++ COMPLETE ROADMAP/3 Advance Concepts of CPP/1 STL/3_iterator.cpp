#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v = {10,20,30,40,50};
    cout<<v[0]<<endl; //10
    
    vector<int>::iterator it = v.begin();
    cout<<*it<<endl; //10
    it++;
    cout<<*it<<endl; //20
    
    it = it + 2;
    cout<<*it<<endl; //40
    
    it = v.end();
    cout<<*it<<endl; // one adreess above end vecotr element 0
    it--;
    cout<<*it<<endl; // 50
    
    cout<<v[0]<<" "<<v.at(1)<<endl; // 10 20
    
    cout<<v.back()<<endl; //50
    
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" "; // 10 20 30 40 50 
    } cout<<endl;
    
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" "; // 10 20 30 40 50 
    } cout<<endl;
    
    for (auto it:v){
        cout<<it<<" "; //10 20 30 40 50 
    }cout<<endl;
	 
	return 0;

}
