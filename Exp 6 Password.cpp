//Sanskriti Khairnar
//PRN - 24070123054
//Batch - A2
//Experiment 6

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char password[15] = "Sanskriti@!480";
    char enter_pass[15];
    int trial = 0;
    while(trial < 5){
            //Input Password
            cout<<"Enter your Password"<<"\t";
            cin>>enter_pass;
            if(strcmp(password,enter_pass) == 0){
                cout<<"Yay!! Unlocked!!"<<endl;
                exit(0);
            }
            else{
                trial++;
            if(trial == 5){
        cout<<"Come Back Later and try again!!"<<endl;
        exit(0);
    }
            cout<<"Oh no, Wrong password, Try again"<<endl;
            continue;
            }
        } 
    
    return 0;
}

//Output

//Enter your Password	sanskriti@!488
//Oh no, Wrong password, Try again
//Enter your Password	Sanskriti@!480
//Yay!! Unlocked!!

