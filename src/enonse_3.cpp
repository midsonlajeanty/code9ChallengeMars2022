#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){

    string entry;

	cout << "Antre yon Fraz : ";
	getline(cin, entry);

	cout << "Antre : " << entry << endl;

	for(unsigned int i = 0; i < entry.length(); i++){

		if(isupper(entry[i]))
			entry[i] = entry[i] + 32;

		if((i == 0 or entry[i - 1] == ' ') and islower(entry[i]))
			if(entry[i] >= 'a' and entry[i] <= 'z')
				entry[i] = entry[i] - 32;
	}

	cout << "Soti : " << entry << endl;

    return 0;
}