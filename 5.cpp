#include <iostream>
using namespace std;
//printing the characters in a cstring in a reverse order.
int main(){
	char c[10] ="abcde";
	char* cptr;
	cptr=c;
	//using the loops
	for(int i=10;i>=0;i--)
       cout<<*(cptr+i);
	cout<<endl;
return 0;
}
