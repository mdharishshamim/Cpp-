#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Rectangle{
    private :
        int length,breadth;
    public:
        void setData(int a,int b){
            a = length;
            b = breadth;
        }
        int getData(){
            int area = length*breadth;
            cout  << "The length of Rectangle is " << length << endl;
            cout << "The breadth of Rectangle is " << breadth << endl;
            cout <<  "The area of Rectangle is " << area ; 
            return area;
        }

};

int main(){
    Rectangle rectangle;
    rectangle.setData(5,7);
    rectangle.getData();
    return 0;
}