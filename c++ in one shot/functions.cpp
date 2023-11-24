#include<bits/stdc++.h>
#include<iostream>
using namespace std;



//  functions are set of code which performs a certain task. 
//  it is used to use the same code multiple times

// void -> Which does not return anything

//  return -> 1.> parametarized  2.> non parametarized

//  qn 1. > take two nums and and prints its sum
void sum(int num1, int num2){
    int num3 = num1+num2;
    cout<< num3 << endl;

}
int main()
{ int num1, num2;
  cin>> num1 >> num2;

sum(num1, num2);

    return 0;
}