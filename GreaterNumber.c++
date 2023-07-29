#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// function to check greater between two numbers
int  isGreater(int  a,int b){
    if ( a>b ) cout << "Greater is " << a << endl;
    else      cout<<"Greater is "<<b<<endl;
}
int  isGreater(int  a,int b,int c){
    if ( a>b && a>c ) cout << "Greater is " << a << endl;
    else if ( b>c && b>a )     cout<<"Greater is "<<b<<endl;
    else        cout << "Greater is "<< c<<endl;
}
int main(){
    isGreater(3,4);
    isGreater(2,3,4);
    return 0;
}