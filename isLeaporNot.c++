#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void isLeap(int year){
    if (year%400==0) cout << "Is Leap year";
    else if(year%100==0) cout << "Is not leap year";
    else if(year%4==0) cout << "Is Leap Year";
    else cout << "Is Not Leap Year";
}
int main(){
    int year;
    cout << "Enter the year: ";
    cin >> year;
    isLeap(year);
    return 0;
}   