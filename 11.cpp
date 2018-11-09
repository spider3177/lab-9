//first the library
#include<iostream>
using namespace std;
//Write a program to declare variables of all predefined sizes 
//and declare corresponding pointers (of all predefined types). 
//Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
int main()
{
    //int
    int x;
    int *p;
    //char
    char y;
    char *q;
    // bool
    bool z;
    bool *r;
    //float
    float a;
    float *s;
    //double
    double b;
    double *t;
    //Print out the sizes.
    cout<<"size of int:"<<sizeof(x)<<" "<<"and its pointer is"<<sizeof(p)<<endl;
    cout<<"size of char:"<<sizeof(y)<<" "<<"and its pointer is"<<sizeof(q)<<endl;
    cout<<"size of bool:"<<sizeof(z)<<" "<<"and its pointer is"<<sizeof(r)<<endl;
    cout<<"size of float:"<<sizeof(a)<<" "<<"and its pointer is"<<sizeof(s)<<endl;
    cout<<"size of double:"<<sizeof(b)<<" "<<"and its pointer is"<<sizeof(t)<<endl;
}
