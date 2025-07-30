//Sanskriti Khairnar
//PRN - 24070123054
//Batch - A2
//Experiment 6

#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the no.of rows: ";
    cin>>row;
    
    //1
    for(int i=0 ; i <row ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //2
    for(int i=row ; i > 0 ; i--){
        for(int j=i ; j>=1 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //3
    int d = 1;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<d<<"\t";
            d++;
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //4
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //5
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //6
    for(int i=row ; i>=1 ; i--){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //7
    for(int i=1 ; i<=row-1 ; i++){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=row ; i>=1 ; i--){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //8
    for(int i=row ; i>1 ; i--){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //9
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<i<<"\t";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //10
     for(int i=row ; i>=1 ; i--){
        for(int j=1 ; j<=row-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
     }
        
        cout<<endl;
}


