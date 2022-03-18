#include <iostream>
#include <string>

using namespace std;

int main(){

    string text, nouvoText, vwayel = "aAeEiIoOuUyY";

	cout << "Antre teks ou a : ";
	getline(cin, text);

	nouvoText = text;

	for(unsigned int i = 0; i < text.length(); i++){
		for (unsigned int j = 0; j < vwayel.length(); j++)
			if(nouvoText[i + 1] == vwayel[j]){
				nouvoText[i] = '*';
				break;
			}
		nouvoText += text[i];
	}
	
	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;

    return 0;
}