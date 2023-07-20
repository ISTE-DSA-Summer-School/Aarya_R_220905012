#include<iostream>

using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        void readTime();
        void displayTime();
        void addTime(Time t1,Time t2);
        void diffTime(Time t1,Time t2);
};

void Time::readTime(){
    cout<<"Enter time: "<<endl;
    cout<<"Hours: ";
    cin>> hours;
    cout<<"Minutes: ";
    cin>>minutes;
    cout<<"Seconds: ";
    cin>>seconds;
};

void Time::displayTime(){
    cout<< "Time: "<< hours<< ":"<< minutes<< ":"<< seconds;
};

void Time::addTime(Time t1,Time t2){
    this->seconds=t1.seconds+t2.seconds;
    this->minutes=t1.minutes+t2.minutes+this->seconds/60;
    this->hours=t1.hours+t2.hours+this->minutes/60;
    this->minutes%=60;
    this->seconds%=60;
};

void Time::diffTime(Time t1,Time t2){
    if(t1.hours>t2.hours){
        if(t1.minutes>t2.minutes){
            if(t1.seconds>t2.seconds){
                this->seconds=t1.seconds-t2.seconds;
                this->minutes=t1.minutes-t2.minutes-this->seconds/60;
                this->hours=t1.hours-t2.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
            else{
                this->seconds=60+t1.seconds-t2.seconds;
                this->minutes=t1.minutes-1-t2.minutes-this->seconds/60;
                this->hours=t1.hours-t2.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
        }
        else{
            if(t1.seconds>t2.seconds){
                this->seconds=t1.seconds-t2.seconds;
                this->minutes=60+t1.minutes-t2.minutes-this->seconds/60;
                this->hours=t1.hours-1-t2.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
            else{
                this->seconds=60+t1.seconds-t2.seconds;
                this->minutes=60+t1.minutes-1-t2.minutes-this->seconds/60;
                this->hours=t1.hours-1-t2.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
        }
    }
    else{
        if(t1.minutes>t2.minutes){
            if(t1.seconds>t2.seconds){
                this->seconds=60+t2.seconds-t1.seconds;
                this->minutes=60+t2.minutes-1-t1.minutes-this->seconds/60;
                this->hours=t2.hours-1-t1.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
            else{
                this->seconds=t2.seconds-t1.seconds;
                this->minutes=60+t2.minutes-t1.minutes-this->seconds/60;
                this->hours=t2.hours-1-t1.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
        }
        else{
            if(t1.seconds>t2.seconds){
                this->seconds=60+t2.seconds-t1.seconds;
                this->minutes=t2.minutes-1-t1.minutes-this->seconds/60;
                this->hours=t2.hours-t1.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
            else{
                this->seconds=t2.seconds-t1.seconds;
                this->minutes=t2.minutes-t1.minutes-this->seconds/60;
                this->hours=t2.hours-t1.hours-this->minutes/60;
                this->minutes%=60;
                this->seconds%=60;
            }
        }
    }
};

int main(){
    Time t1;
    Time t2;
    Time t3;
    t1.readTime();
    t2.readTime();
    t1.displayTime();
    cout<<endl;
    t2.displayTime();
    cout<<endl;
    t3.addTime(t1,t2);
    cout<<"The added time: "<<endl;
    t3.displayTime();
    cout<<endl;
    t3.diffTime(t1,t2);
    cout<<"The subtracted time: "<<endl;
    t3.displayTime();
    cout<<endl;
    return 0;
}