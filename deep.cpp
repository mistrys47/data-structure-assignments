#include<iostream>
#include"str.h"
using namespace std;
int main()
{
	char s[100],s1[100],a;
	int n;
	cout<<"give two string for various purpose:";
	gets(s);
	gets(s1);
	cout<<compare_noncasesensitive(s,s1);
	cout<<"length of string1:"<<length(s)<<endl;
	cout<<"length of string2:"<<length(s1)<<endl;
	cout<<"give the character which u wanna find in string1:"<<endl;
	cin>>a;
	cout<<"index of given character:"<<retrive_index(s,a)<<endl;
	cout<<"give the character whose last accurance u wanna find in string1:"<<endl;
	cin>>a;
	cout<<"index of given character's last accurance:"<<last_occurance(s,a)<<endl;
	cout<<"reverse concate of given string:";
	concate_reversal(s);
	puts(s);
	/*{
		cout<<"duplicate concate of given string:";
		concate_duplicate(s);
		puts(s);
	}*/
	/*{
	cout<<"give two strings u wanna comapre with str1";
	char s2[100],s3[100];
	gets(s2);
	gets(s3);
	cout<<compare_string(s2,s1)<<endl;
		}*/
		cout<<retrive_index_substring(s,s1);
		cout<<endl<<palindrome(s1)<<endl;
		replace_substring(s,s1,4);
		puts(s);
	
	
}
