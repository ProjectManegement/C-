/// PRINT NUMBER SERIESE AS TRIANGLE 

#include<iostream>
using namespace std;

int main(){
    
    int n,i=1,COUNT=1;
    cout<<"ENTER:";
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< COUNT;
            COUNT++;
            j++;
        
        }
        cout<<endl;
        i++;
        
    }
}