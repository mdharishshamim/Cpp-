#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n1,n2,max;
    cout << "Enter the two numbers of want to find L.C.M of : ";
    cin >> n1>>n2 ;
    max = (n1 > n2) ? n1 : n2;
    do{
        if (max % n1 == 0 && max % n2 ==0){
            cout << "LCM is " << max;
            break;
        }
        else {
            ++max;
        }
    }while(true);

    return 0;
}