/// PRINT SERIES AS RECTANGLE



#include<iostream>
using namespace std;

int main(){
    
    int n,i=1,count=1;
    cout<<"ENTER:";
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
        
    }
}