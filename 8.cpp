//first the library
#include <iostream>
using namespace std;
//function myStrLen(char*) which returns the length of the parameter cstring. 
//function without using the C++ function strlen.
//using the function
int myStrLen(char* p){
    int count=0;
    for(int i=0;*(p+i)!='\0';i++){
        *(p+i);
        count++;
    }
    return count;
}
int main(){
    char ar[100];
    cout<<"Enter the string:"<<ar;
    cin.getline(ar,100);//getting a string line
    char* p=&ar[0];
    cout<<"Length of the string:"<<myStrLen(p)<<endl;
    return 0;
}
