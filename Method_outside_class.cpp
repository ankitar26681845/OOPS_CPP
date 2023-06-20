#include<iostream>
using namespace std;
class Father{
    public:
    int age;
    int fun(int x);
};
int Father::fun(int x){
    return x*x;
}
int main(){
    Father myobj;
    cout<<myobj.fun(5);
}
