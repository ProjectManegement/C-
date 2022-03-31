/// UPPER LOWER AND NUMBER 

#include<iostream>
using namespace std;

int main( ){

char ch ;
cout<<"ENTER CHARACTER";

cin>>ch;

if(ch>='a'&&ch<='z'){
    
    cout<<"lower";
    
}
else if(ch>='A'&&ch<='Z'){
    
    cout<<"UPPER CASE";
}
else if(ch>='0'&&ch<='9'){
    cout<<"number";

}


}