#include <iostream>
#include <vector>

using namespace std;

int main(){

    int tay = 5;

	cout << "Antre tay sekans ou an : ";
	cin >> tay;

	int sekans[tay];

	for (int x = 0; x < tay; ++x) {
		sekans[x] = x;
	}

	vector<int> nouvoSekans;

	for(int i = 0; i < tay; i++){
		cout << "\nTou nimero : " << i+1 << endl;

		for(int j = (tay - 1 - i); j >= 0; j--)
			nouvoSekans.push_back(sekans[j]);

		for (unsigned int i = 0; i < nouvoSekans.size(); i++)
			sekans[i] = nouvoSekans[i];

		for (int i = 0; i < tay; i++)
			cout << sekans[i] << ", ";
		cout << endl;

		nouvoSekans.erase(nouvoSekans.begin(), nouvoSekans.end());
	}
	
	int r;

	cout << "\nAntre eleman nan enteval sa ou vle cheche a [0, " << tay << "] : ";
	cin >> r;

	for (int i = 0; i < tay; i++)
		if(sekans[i] == r){
			cout << "Eleman " << r << "] la nan position -> " << i << endl;
			break;
		}

    return 0;
}