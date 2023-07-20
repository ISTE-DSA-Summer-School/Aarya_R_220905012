#include<iostream>

using namespace std;

class person{
    private: 
    string name;
    public:
    void setname(string n){
        name = n;
    }
    string getname(){
        return name;
    }
};

int main(){
    person p1;
    p1.setname("Aarya");
    cout<<"Name: "<< p1.getname();
    return 0;
}