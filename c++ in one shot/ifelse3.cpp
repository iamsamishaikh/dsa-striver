// ifelse3.cpp

// take the age from user and then decide accordingly

// 1. if age < 18, p -> not eligible for job
// 2. if age > = 18 and age<=54, p -> u r eligible for job
// 3. if age>= 55 and age<=57, p -> eligible for job but, retirement soon
// 4. if age > 57 , p -> retirement time


#include<iostream>
using namespace std;

int main()
{
    int age;
    cin>> age;

    if(age<18)
    {
        cout<<" You are not eligible for job";
    }
    else if(age=18 && age<=57)
       { cout<<" You are eligible for job";
    }
    else if(age >=55 && age<=57)
    {
    
        cout<<" You are eligible for job butt.. retirement soon";
        }
    else
    // if(age > 57)
    {
        cout<<" retirement time uncle!";
    }
    return 0;
}