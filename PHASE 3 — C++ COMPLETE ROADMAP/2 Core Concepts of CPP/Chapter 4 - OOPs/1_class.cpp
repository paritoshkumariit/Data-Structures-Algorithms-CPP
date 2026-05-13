#include <bits/stdc++.h>
using namespace std;

class car{
    public:
        int speed;
        string colour;
        
        void drive(){
            cout<<"Car is driving";
        }
};

int main() {
    
    car c;
    c.speed = 100;
    c.colour = "Red";
    cout<<c.speed<<endl<<c.colour<<endl;
    
    c.drive();
	
	return 0;

}
