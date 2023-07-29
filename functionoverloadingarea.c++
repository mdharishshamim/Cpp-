#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void area(float r){
    float pi = 3.14;
    cout << "Area of circle" <<  (pi*r*r) << endl;
}
void area(float l,float b){
    cout << "Area  of Rectangle: " << (l*b) << endl;
}
int main(){
    area(3);
    area(3,4);
    return 0;
}