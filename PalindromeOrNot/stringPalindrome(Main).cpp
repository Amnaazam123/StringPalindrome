//Amna Azam- BSEF19M009- DSA_Assignment#01

#include<iostream>
#include<string>
#include"stack.cpp"
using namespace std;
int main()
{
	int check = 1;                //to keep check for palindrome
	char poped;                   //to store poped character from stack
	stack<char> obj(15);
	string str;                   //used to take input from user
	string result = "";           //used to store final poped data from stack
	string temp = "";             //used to stored pushed data in this string
	cout << "\n\n\n\t\t\t\t\t\t\t_____   Palindromania    _____ \n\n\n";
	cout << "   Enter your string here to check whether it is palindrome or not:: ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < 'a' || str[i] > 'z')          //if input is not in b/w a-z  
		{
			if (str[i] < 'A' || str[i]>'Z')         //and if input is not in b/w A-Z 
			{
				if(str[i]<'0'||str[i]>'9')          //and also if input is not in b/w 0-9 
					continue;                       //do not push it
			}
				
		}
		obj.push(str[i]);                   //else push it
		string s(1, str[i]);                //convert the character into string for concatenation
		temp = temp + s;                     //concatenate.
	}
	cout << endl;
	int size = 0;                      //to keep the size of pushed elements
	while(1)
	{
		poped = obj.pop();              //pop data from stack
		string s(1, poped);           
		result = result + s;            //convert the character into string for concatenation
		size++;
		if (obj.isEmpty() == true)       //if stck is empty
			break;
	}
	for (int i = 0; i < size; i++)
	{
		if (result[i] - temp[i] != 32 && temp[i] - result[i] != 32)    //to remove the difference b/w small and capital alphabets (97-62=32)
		{
			if (result[i] != temp[i])        //if the charcters are not capital and small of each other and neither are same
				check = 0;                 
		}
	}
	cout << "\n\n\n\t\t\t\t  __________________________ RESULT Announcement __________________________ \n";
	if (check == 1)      //if all the characters getted in reverse order are same as in front order
		cout << "\n\t\t\t\t\t\t\t   Given string is Palindrome  \n\n\n";   
	else
		cout << "\n\t\t\t\t\t\t\t   Given string is not Palindrome  \n\n\n";
	return 0;
}