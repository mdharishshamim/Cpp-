#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Using Function to  calculate the area of a circle.
void calcAreaCircle(int r){
    double pi = 3.14;
    double area = pi*r*r;
    cout << endl;
    cout << area;
}
int main(){
    int radius;
    cout << "Enter the radius of the circle";
    cin >> radius;
    //Calling function for calculating Area Circle
    calcAreaCircle(radius);
    return 0;
}