// program template
#include<bits/stdc++.h>
using namespace std;
// string data structure is only available in C++(not in C).In C, there is char array(to store strings).
int main(){
	// string str1 = "Hello";
	// // cout<<str<<endl;
	// string str2="World";
	// string result = str1 + str2; //string concatenation
	// cout<<result<<endl;

	// // Comparison(==) operator directly works with strings(we can compare strings using == operator)
	// if(str1==str2){
	// 	cout<<"Equal";
	// }
	// else{
	// 	cout<<"Not Equal";
	// }
	// cout<<str1[0]<<endl;
	// str1[0] = 'a';
	// // str1[0] is a single character(not string)
	// cout<< str1<<endl;

	// // size() function
	// cout<<str1.size()<<endl;

	// // iterating the string
	// for (int i = 0; i < str1.size(); ++i)
	// {
	// 	cout<<str1[i]<<endl;
	// }

	// input,output
	// string str1,str2;
	// cin>>str1>>str2;
	// cout<<str1<<" "<<str2<<endl;

	// displaying both inputs in single string
	// string str1,str2;
	// cin>>str1>>str2;
	// string str3 = str1 + " " + str2;
	// cout<<str3<<endl;

    // but if in input there are multiple spaces between 2 strings like:- 
    // "abc   def" then how to output this same string(since we know spaces are delimeter for cin)
	// Soln:- getline function

	// Defn:- The C++ getline() is a standard library function that is used to read a string or a line from an input stream. It is a part of the <string> header. 
	// Syntax:
	// istream& getline(istream& is, string& str, char delim);
	// is: It is an object of istream class and tells the function about the stream from where to read the input from.
	// str: It is a string object, the input is stored in this object after being read from the stream.
	// delim: It is the delimitation character which tells the function to stop reading further input after reaching this character.
	// string str1,str2;
	// getline(cin,str1);
	// // it takes the input from cin and stores in str1
	// cout<<str1;


	// myth about getline()
	// int t;
	// cin>>t;
	// while(t--){
	// 	string str;
	// 	getline(cin,str);
	// 	cout<<str<<endl;
	// }
	// cin ignores whitespaces and newlines but getline() doesnot ignores it. thats why after 3(3 is given to 1st cin(testcases), since there is newline(\n), getline() will take \n as input for 1st time and outputs that.

	// Soln:
	int t;
	cin>>t;
	cin.ignore();	//to ignore next(whitespace or newline->getline will ignore newline after 3)
	while(t--){
		string str;
		getline(cin,str);
		cout<<str<<endl;
	}
	
    return 0;
}
