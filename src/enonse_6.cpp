#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){

    string text;

	cout << "Antre teks ou a : ";
	getline(cin, text);

	string nouvoText;

	for(int i = (text.size() - 1); i >= 0; i--)
		if(!isspace(text[i]))
			nouvoText += text[i];

	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;

    return 0;
}