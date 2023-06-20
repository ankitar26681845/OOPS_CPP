#include<iostream>
using namespace std;
class Father{
    public:
    int age;
    string name;
    Father(int x,string y){
        age = x;
        name = y;
    }
};
int main(){
    Father myfat(123,"anr");
    cout<<myfat.age;
    return 0;
}
