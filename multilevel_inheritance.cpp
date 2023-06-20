#include<iostream>
using namespace std;
class Father{
    public:
    int fun1(int x){
        return x*x;
        
    }
};
class Mother{
    public:
    int fun2(int x){
        return x+x;
    }
};
class Son:public Father,public Mother{
    public:
    int age = 43;
};
int main(){
    Son myobj;
    cout<<myobj.fun2(45);
}
