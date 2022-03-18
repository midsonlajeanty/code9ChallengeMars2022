#include <iostream>
#include <string>

using namespace std;

int main(){

    string text;

	cout << "Antre teks ou a : ";
	getline(cin, text);

	string nouvoText, wordBegin = "", wordEnd = "";
	int begin, end;

	for(unsigned int i = 0; i < text.length(); i++){

		for(unsigned int j = i; j < (i+6); j++)
			wordBegin += text[j];

		for(unsigned int j = i; j < (i+7); j++)
			wordEnd += text[j];

		if(wordBegin == "hidden")
			begin = i + 6;

		if(wordEnd == "endpass")
			end = i;

		wordBegin = wordEnd = "";
	}

	for(int i = begin; i < end; i++)
		nouvoText += text[i];

	if(nouvoText != "")
		cout << "Antre : " << text << endl
			 << "Soti : " << nouvoText << endl;
	else
		cout << "Text ou an pa gen mo  Kle yo. (hidden - endpass)" << endl;

    return 0;
}