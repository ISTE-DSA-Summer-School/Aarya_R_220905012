#include<iostream>
#include<string.h>
#define MAX 100

using namespace std;

class student{
    private:
        string name;
        int rollno;
        char grade;
    public:
        void setDetails();
        void getDetails();
        void sorting(student s[],int n);
};

void student::setDetails(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll no: ";
    cin>>rollno;
    cout<<"Enter grade: ";
    cin>>grade;
};

void student::getDetails(){
    cout<<"Name: "<<name<<"\tRoll No: "<<rollno<< "Grade: "<<grade<<endl;
};

void student::sorting(student s[],int n){
    int temp;
    string str;
    char t;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(s[j].rollno>s[j+1].rollno){
                temp=s[j].rollno;
                s[j].rollno=s[j+1].rollno;
                s[j+1].rollno=temp;
                str = s[j].name;
                s[j].name = s[j+1].name;
                s[j+1].name = str;
                t=s[j].grade;
                s[j].grade = s[j+1].grade;
                s[j+1].grade = t;
            }
        }
    }
};

int main(){
    student s[MAX];
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Student number "<<i+1<<" : "<<endl;
        s[i].setDetails();
    }
    s[MAX].sorting(s,n);
    cout<<"Student details: "<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<". ";
        s[i].getDetails();
    }
    return 0;
}