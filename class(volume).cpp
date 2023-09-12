#include<bits/stdc++.h>
using namespace std;

class cube{
public:
double height;
double base ;
double length;
};
int main(){

    class cube c;
    cout<<"Enter the length:";
    cin>>c.length;
    cout<<"Enter the base:";
    cin>>c.base;
    cout<<"Enter the height";
    cin>>c.height;
    int volume = c.length*c.base*c.height;

    cout<<volume<<endl;

}