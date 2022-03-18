#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){

    int som = 0;
	int pro = 1;
	string text;

	cout << "Antre teks ou a : ";
	getline(cin, text);

	for(unsigned int i = 0; i < text.size(); i++){
		if(isdigit(text[i]))
			som += text[i] - 48;
		else{
			pro *= som;
			som = 0;
		}
	}

	cout << "Resiltat a se : " << pro << endl;

    return 0;
}