// ifelse1.cpp

// a school has following rules for grading system
// 1.> below 25 - F
// 2.> 25-44 -> E
// 3.> 45-49 -> D
// 4.> 50-59 -> C
// 5.> 60-79 -> B
// 6.> 80 - 100 -> A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin>> marks;

    if(marks<25)
    {
        cout<< "F";
    }
    else{
        if(marks<=44)
        {
            cout<< "E";
        }
        else{
            if(marks<=49)
            {
                cout<< "D";
            }
            else
            if(marks<=59)
            {
                cout<< "C";
            }
            else
            {
                if(marks<=79)
                {
                    cout<< "B";
                }
                else
                if(marks<=100)
                {
                    cout<< "A";
                }
            }
        }
    } 
    return 0;
}