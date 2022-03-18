#include <iostream>
#include <string>

using namespace std;

int main(){

    string text = "web-insecure;34829sjdfnsj32984madsdkj";
	string nouvoText;

	for(int i = text.size(); i >= 0; i--)
		if(text[i] == ';')
			break;
		else
			nouvoText = text[i] + nouvoText;

	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;

    return 0;
}