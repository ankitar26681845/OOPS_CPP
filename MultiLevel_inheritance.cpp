#include<iostream>
using namespace std;
class Father{
    public:
    int age=7;
    int fun(int x){
        return x*x;
    }
    
};
class Son: public Father{
    public:
    string name="ram";
    
};
class grandson: public Son{
    public:
    string color="white";
};
int main(){
    Son myobj;
    cout<<myobj.fun(4)<<endl;
    cout<<myobj.age<<endl;
    cout<<myobj.name<<endl;
    grandson myobj1;
    cout<<myobj1.name<<endl;
}
