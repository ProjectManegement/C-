// largest among thre number 

#include<iostream>
using namespace std ;

int main (){
    
    
    int a ,b,c ;
    
    cout<<"ENTER number:";
    cin>> a >>b>>c;
    
    if(a >= b && a >= c)
    
        cout<<"Largest number is "<< a ;
        
    if(b >= a && b >= c)
    
        cout<<"Largest number is "<< b ;
    
    if(c >= a && c >= b)
    
        cout<<"Largest number is "<< c ;    
        
    
    
    
    
}