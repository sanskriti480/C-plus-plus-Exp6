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
    
    //..........
    for(int i=0 ; i <row ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //..........
    for(int i=row ; i > 0 ; i--){
        for(int j=i ; j>=1 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //.............
    int d = 1;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<d<<"\t";
            d++;
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //...........
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
    
    //............
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
    
    //...............
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
    
    //...........
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
    
    //..............
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
    
    //................
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<i<<"\t";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //...............
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
