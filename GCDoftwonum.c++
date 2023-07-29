#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n1,n2,min;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;
    min = (n1 < n2) ? n1 : n2;
    for (int i=1;i<=min;i++){
        if (n1%i==0 && n2%i==0){
            cout << i << "is the gcd of these two numbers";
        }
    }
    return 0;
}