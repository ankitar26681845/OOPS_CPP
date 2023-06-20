#include<iostream>
using namespace std;
class Father{
    public:
    void fun(){
        cout<<"i am Father"<<endl;
    }
};
class Son:public Father{
    public:
    void fun(){
      cout<<"i am son"<<endl;
    }
};
class Grandson: public Son{
    public:
    void fun(){
       cout<<" i am grandson"<<endl;
    }
};
int main(){
    Father myfather;
    Son myson;
    Grandson mygrandson;
    
    mygrandson.fun();
    myson.fun();
    myfather.fun();

}
