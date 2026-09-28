// Count the number of words, characters, alphabets or letters, vowels, consonants, digits and spaces in a line of text

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
    string str;	
	int words = 0, characters = 0, digits = 0, alphabets = 0, vowels = 0, consonants = 0;
	cout << "Enter a string\n";
	getline(cin, str);
	characters = str.length();	//string length + how many characters are present.

	for (int i = 0; i <= str.length(); ++i)	//accessing the string character by character
	{
		if (isalpha(str[i]))	//checking for alphabets
		{ 	++alphabets;
			if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')	//checking for vowels
				++vowels;
			else
				++consonants;	//if not vowel then it must be a consonant
		}
		else if (isdigit(str[i]))	//checking for digits
			++digits;
		if (str[i] == ' ' || str[i] == '\0')	//counting the umber of words
			++words;
	}

	cout << "Number of words=" << words << endl;
	cout << "Number of alphabets/ letters=" << alphabets << endl;
	cout << "Number of vowels=" << vowels << endl;
	cout << "Number of consonants=" << consonants << endl;
	cout << "Number of digits=" << digits << endl;
	cout << "Number of characters=" << characters << endl;
	cout << "Number of spaces=" << words-1 << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll testcase = 1;
    //cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}
