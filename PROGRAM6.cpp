/// SUM OF NATURAL NUMBER FROM 1 TO N

#include<iostream>
using namespace std ;

int main (){
    
    
    int  sum=0, n;
    
    cout<<"ENTER number:";
    cin>> n;
    
    for(int i=0;i<=n;i++){
        
        sum=sum+i;
        
        
    }
    cout<<"SUM IS "<<sum;
    
    
}