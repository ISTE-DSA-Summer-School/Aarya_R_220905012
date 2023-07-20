#include<iostream>

using namespace std;

class constructor{
    public:
    string name;
    int age;
    char gender;
    constructor(string a, int b, char c){
        name = a;
        age = b;
        gender = c;
    } 
};

int main(){
    constructor obj1("Aarya", 18, 'M');
    constructor obj2("Nehal", 13, 'M');
    cout<<"First person: "<< endl<< obj1.name<< endl<< obj1.age<< endl<< obj1.gender<< endl;
    cout<<"Second person: "<< endl<< obj2.name<< endl<< obj2.age<< endl<< obj2.gender<< endl;
    return 0;
}