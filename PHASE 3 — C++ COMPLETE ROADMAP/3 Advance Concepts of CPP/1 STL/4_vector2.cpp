#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v = {10,20,30,40,50,60,70,80,90,100};
    
    for(auto i:v){
        cout<<i<<" ";
    } 
    cout<<endl;
    
    v.erase(v.begin()+1);
    for(auto i:v){
        cout<<i<<" "; // 10 30 40 50 60 70 80 90 100 
    } 
    cout<<endl;
    
    v.erase(v.begin()+2,v.begin()+4);
    for(auto i:v){
        cout<<i<<" "; //10 30 60 70 80 90 100 
    } cout<<endl;
    
    //insert
    
    v.insert(v.begin(),101);
    v.insert(v.begin()+1,102);
    v.insert(v.begin()+2,2,20);
    
    for(auto i :v){
        cout<<i<<" "; //101 102 20 20 10 30 60 70 80 90 100 
    }cout<<endl;
    
    vector<int> copy(3,50);
    v.insert(v.begin(),copy.begin(),copy.end());
    
    for(auto i:copy){
        cout<<i<<" "; //50 50 50 
    }cout<<endl;
    
    for(auto i: v){
        cout<<i<<" "; //50 50 50 101 102 20 20 10 30 60 70 80 90 100 
    }cout<<endl;
    
    //size
    
    cout<<v.size()<<endl; // 14
    
    copy.swap(v);
    
     for(auto i:copy){
        cout<<i<<" "; //50 50 50 101 102 20 20 10 30 60 70 80 90 100 
    }cout<<endl;
    
    for(auto i: v){
        cout<<i<<" "; //50 50 50  
    }cout<<endl;
    
    v.clear();
    cout<<v.empty()<<endl; //1
    cout<<v.size(); //0
    
    for(auto i:v){
        cout<<i<<" "<<endl; //nothing print
    }
    
    

	 
	return 0;

}
