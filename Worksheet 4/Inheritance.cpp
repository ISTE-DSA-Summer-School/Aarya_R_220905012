#include<iostream>

using namespace std;

class person{
    public:
    string firstName = "Aarya";
    void intro(){
        cout<< "Hello, I'm ";
    }
};

class family : public person{
    public:
    string lastName = "Devadiga";
};

int main(){
    family p1;
    p1.intro();
    cout<< p1.firstName + " " + p1.lastName;
    return 0;
}