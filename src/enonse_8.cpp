#include <iostream>
#include <string>

using namespace std;

int main(){

    string nouvoText, text;

	cout << "Antre teks ou a : ";
	getline(cin, text);

	for(unsigned int i = 0; i < text.length(); i++){
		if(text[i] != ' ')
			nouvoText += text[i];
	}

	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;

    return 0;
}