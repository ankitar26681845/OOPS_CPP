#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream Myfile("myfile1.txt");
    Myfile<<"this is my first time when i am creating any file or anything by using this";
    Myfile.close();
}
