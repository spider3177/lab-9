//first the library
#include <iostream>
using namespace std;
//STRING] Create a string and store your name in it. 
//Use a loop to print string character by character
//using the normal index method as well as the pointer method.
int main(){
    char str[20];
    cout<<"Enter your name:";
    cin>>str;
    //using the normal index method
    cout<<"using normal index method"<<endl;
    int i;
    for( i=0; i<20; i++){ 
        cout<<str[i]; 
    }
    cout<<endl;
    char *p;
    p = str; /* for string, only this declaration will store its base address */
    //using the pointer method
    cout<<" using pointer method"<<endl;
     while( *p != '\0'){
        cout<<*p; 
        p++; 
    }
    cout<<endl;
  return 0;
}
