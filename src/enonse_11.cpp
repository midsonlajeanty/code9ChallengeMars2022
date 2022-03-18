#include <iostream>
#include <string>

using namespace std;

int main(){

    int tay, max, min;
	
	cout << "Antre tay sekans ou an : ";
	cin >> tay;

	int tablo[tay];

	for (int x = 0; x < tay; ++x) {
		cout << "Antre vale nimero " << x+1 << " an : ";
		cin >> tablo[x];
	}

	max = min = tablo[0];

	for(int i = 0; i < tay; i++){
		if(max < tablo[i])
			max = tablo[i];

		if(min > tablo[i])
			min = tablo[i];
	}

	cout << "Pi gro a se : " << max << endl
		 << "Pi piti a se : " << min << endl;

    return 0;
}