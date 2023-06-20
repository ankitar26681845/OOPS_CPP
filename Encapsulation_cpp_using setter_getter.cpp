#include<iostream>
using namespace std;
class Father{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Father myobj;
    myobj.setSalary(30000);
    cout<<myobj.getSalary();
    return 0;
}
