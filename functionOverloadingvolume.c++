#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void volume(float r){
    float pi = 3.14;
    cout << "Volume of sphere: " <<  (4/3)*(pi*r*r*r) << endl;
}
void volume(float l,float b,float h){
    cout << "Volume of cuboid" << (l*b*h) << endl;
}
int main(){
    volume(3);
    volume(3,4,5);
    return 0;
}