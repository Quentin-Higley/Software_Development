#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strInput;
	string strCheck;

	getline(cin, strInput);

	for (int i = 0; i < strInput.length(); i++)
		if(strInput[i] == ' ')
			strInput.erase(i, 1);


	for (int i = strInput.length(); i + 1 > 0; i--)
	{
			strCheck += strInput[i];
	}
	strCheck.erase(0, 1);

	if (strCheck == strInput)
	{
		cout << "palindrome" << endl;
	}

	else
	{
		cout << "not palindrome" << endl;
	}
	return 0;
}