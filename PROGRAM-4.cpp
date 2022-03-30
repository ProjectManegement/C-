/// PROGRAM TO SWAP TO NUMBER without using thired variable 


#include<iostream>
using namespace std;

int main(){
    
    cout<<"ENTER VALUE OF A ";
    int a;
    cin>> a;
    cout<<"ENTER VALUE OF B ";
    int b ;
    cin>> b;
    cout<<"VALUE OF A = "<<a <<endl;
    cout<<"VALUE OF b = "<<b <<endl;

     a=a+b;
     b=a-b;
     a=a-b;
     
 cout<<"\n";

    
    cout<<"NOW value a is "<< a  << endl;
    cout<<"NOW value of b is "<< b  << endl;
    
    
}