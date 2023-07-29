#include<bits/stdc++.h>
using namespace std;
int main(){
int a=3;
int* b= &a;
//& ---> Address of operator 
cout<<"Address Of Variable A is: "<<b<<endl;//Output : "Address Of Variable B
//* deference Operator
cout<<"The value at address b is "<<*b<<endl;
//pointerto pointer 
int** c = &b; 
//(c->(b->(a=3)))
//b holds address of a .a holds value 3.c holds address of b.Both c and b holds value 3 .
return 0; 
}