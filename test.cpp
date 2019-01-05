#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void foo(string word)
{	
	for(int i = word.size(); i > 0; i--)
	{
		cout << word[i];
	}
}


int main()
{
	string letter;
	cout << "Hello world!" << endl;
	cout << "Type a word: ";
	cin >> letter;

	foo(letter);

	return 0;
}
