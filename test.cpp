#include <iostream>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

void backToFront(string word)
{	
	for(int i = word.size(); i > -1; i--)
	{
		cout << word[i];
	}
	cout << endl;
}

bool checkIfSameLetter1(string word)
{
	cout << "Set container method " << endl;
	cout << "Are there any duplicated letters? " << endl;
	set<char> str;
	for(int i = 0; i < word.size(); i++)
	{
		 str.insert(word[i]);
	}
	if(str.size() == word.size())
	{
		return false;
	}
	else
	{
		return true;
	}
	 
}

bool checkIfSameLetter2(string word)
{
	cout << "2 Loops method" << endl;
	cout << "Are there any duplicated letters? " << endl;
	int counter = 0;
	for(int i = 0; i <= word.size(); i++)
	{
		for(int j = i+1; j <= word.size(); j++)
		{
			if(word[i] == word[j])
			{
				counter++;
			}
		}
	}

	if(counter > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	cout << endl;
}
int main()
{
	string letter;
	cout << "Hello world!" << endl;
	cout << "Type a word: ";
	cin >> letter;

	backToFront(letter);
	cout << checkIfSameLetter1(letter) << endl;
	cout << checkIfSameLetter2(letter) << endl; 
	return 0;
}
