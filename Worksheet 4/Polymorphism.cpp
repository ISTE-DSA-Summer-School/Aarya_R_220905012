#include<iostream>

using namespace std;

class fruit{
    public:
    void fruitcolor(){
        cout<< "Fruit has color \n";
    }
};

class apple : public fruit{
    public:
    void fruitcolor(){
        cout<< "Apple is red \n";
    }
};

class orange : public fruit{
    public:
    void fruitcolor(){
        cout<< "Orange is orange";
    }
};

int main(){
    fruit f1;
    apple a1;
    orange o1;
    f1.fruitcolor();
    a1.fruitcolor();
    o1.fruitcolor();
    return 0;
}