#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//creatiing a function to solve sum of n numbers
void sumofN(int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        sum = sum + i;
    }
    cout << sum << endl;
}
int main(){
    int n;
    cout << "Enter the number you want sum of: " << endl;
    cin >> n; 
    sumofN(n);
    return 0;
}