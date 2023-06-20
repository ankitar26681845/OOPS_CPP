#include<iostream>
using namespace std;
class Father{
    protected:
    int salary;
};
class Son: public Father{
    public:
    void setSalary(int x){
        salary = x;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Son myobj;
    myobj.setSalary(48393);
    cout<<myobj.getSalary();
}
