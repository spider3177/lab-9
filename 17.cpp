//first include the library
#include <iostream>
using namespace std;

char* copy(char* str2,char* str){
	if (str==NULL)
		return NULL;
	char* ptr=str2;
	while(*str!='\0')
	{
		*str2=*str;
		str2++;
		str++;
	}
	*str2='\0';
	return ptr;
}




char* cat(char* str,char* str3){
	int size1=0;//size2=0;
	char* z=str;
	while(*z!='\0')
	{
		size1++;
		z++;
	}
	char* p=str+size1;
	while(*str3!='\0')
	{
		*p++=*str3++;
	}
	*p='\0';
	return str;
}



int len(char* str)
{
	int size=0;
	while(*str!='\0')
	{
		size++;
		str++;
	}
	return size;
}



int compare(char* a,char*b)
{
int result=0;
	for (int i = 0;*(a+i)!='\0' || *(b+i)!='\0' ; i++)
	{
		if (*(a+i) != *(b+i))
		{
		    result= *(a+i)-*(b+i);
			break;
		}
	}
return result;

}



char* ckch(char* str,char c)
{
	char* p=str;
	if(str==NULL)
	return NULL;
	
	else
	{
		for(int i=0;*(p+i)!='\0';i++)
		{
			if(*(p+i)==c)
			{
				return p+i;
			}
		}
	}
}



// returns true if strings are same
int comp(const char *str1, const char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return 0;
		str1++;
		str2++;
	}

	return (*str2=='\0');
}
// Function to implement strstr() function
const char* strstr(const char* str1,const char* str2)
{
	while(*str1!='\0')
	{
		if(*str1==*str2 && comp(str1,str2))
			return str1;
		str1++;
	}
}




int main()
{
     //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    cout<<endl;
 //Implementation of strcpy function
	cout<<"Use of strcpy"<<endl;
    char str2[20];
    cout<<"Output of str2 which is copy of the string given:"<<endl<<copy(str2,str)<<endl<<endl;


   
    //Implementation of strcat function
	char str3[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str3,20);
    cout<<"Output after strcat function:"<<cat(str,str3)<<endl<<endl;




   //Implementation of strlen function
    cout<<"Use of strlen function"<<endl;
	char* p=str;
    cout<<"Length of str(after concatenation):"<<len(p)<<endl<<endl;
 


   
    //Implementation of strcmp function
    cout<<"Use of strcmp function"<<endl;
	char str4[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str4,20);
    int result=compare(str,str4);//Compares the lengthof two strings
    if(result==0)
    cout<<"Strings are same"<<endl<<endl;
    else if(result>0)
    cout<<"The ascii value of the character of str after 1st mismatch is more than that of str2 with ascii difference:"<<result<<endl<<endl;
    else
    cout<<"The ascii value of the character of str after 1st mismatch is less than that of str2 with ascii difference:"<<result<<endl<<endl;



    
  //Implementation of strchr function
   cout<<"Use of strchr function"<<endl;
    char c;
    cout<<"Enter the character you want to find in the string"<<endl;
    cin>>c;
char* p1=str;
if(ckch(p1,c)==NULL)
{
cout<<"The character is absent in the string"<<endl;
}
else{
while(ckch(p1,c)!=NULL)
{
	cout<<"Found at:"<<(ckch(p1,c)-str+1)<<endl;
	p1=ckch(p1,c)+1;
}
}
cout<<endl;



   //Implementation of strstr function
    cout<<"Use of strstr function"<<endl;
	cin.ignore();
    char str5[50];
    cout<<"Enter str0"<<endl;
    cin.getline(str5,50);
    cout<<"Str5="<<str5<<endl;
    char str6[50];
    cout<<"Enter str6"<<endl;
    cin.getline(str6,50);
    cout<<"Str6="<<str6<<endl;
	cout<<strstr(str5,str6)<<endl;


    return 0;
}
