/*
 * function.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: mds
 */

#include "function.hpp"

#include <iostream>
#include <ctype.h>
#include <vector>
using namespace std;


void challenge_1(void){

	string ip;
	int result = 0;

	cout << "Antre adres ip w la : ";
	getline(cin, ip);

	for(unsigned int i =0; i < ip.length(); i++){
		if(isdigit(ip[i]))
			result += ip[i] - 48;
	}

	result *= ip[0] - 48;

	cout << "Pot ki louvri a se : " << result << endl;
}

void challenge_2(void){
	int val;

	cout << "Antre yon Vale : ";
	cin >> val;

	cout << ((val % 4 != 0) ? "OK" : "NOK") << endl;
}

void challenge_3(void){

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

}

void challenge_4(void){
	int a, b, limit;

	cout << "Antre de Vale : ";
	cin >> a >> b;


	cout << "Antre limit lan : ";
	cin >> limit;

	vector<int> milA, milB, milAB, pMilAB;

	for(int i = 1; i <= limit; i++){
		if(i % a == 0 and i % b != 0)
			milA.push_back(i);

		if(i % a != 0 and i % b == 0)
			milB.push_back(i);

		if(i % a == 0 and i % b == 0)
			milAB.push_back(i);

		if(i % a != 0 and i % b != 0)
			pMilAB.push_back(i);
	}

	for(unsigned int i = 0; i < milA.size(); i++)
		cout << milA[i] << ", ";
	cout << " -> Nonb : " << milA.size() << endl;

	for(unsigned int i = 0; i < milB.size(); i++)
		cout << milB[i] << ", ";
	cout << " -> Nonb : " << milB.size() << endl;

	for(unsigned int i = 0; i < milAB.size(); i++)
		cout << milAB[i] << ", ";
	cout << " -> Nonb : " << milAB.size() << endl;

	for(unsigned int i = 0; i < pMilAB.size(); i++)
		cout << pMilAB[i] << ", ";
	cout << " -> Nonb : " << pMilAB.size() << endl;
}

void challenge_5(void){
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
}

void challenge_6(void){
	string text;

	cout << "Antre teks ou a : ";
	getline(cin, text);

	string nouvoText;

	for(int i = (text.size() - 1); i >= 0; i--)
		if(!isspace(text[i]))
			nouvoText += text[i];

	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;
}

void challenge_7(void){
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
}

void challenge_8(void){

	string nouvoText, text;

	cout << "Antre teks ou a : ";
	getline(cin, text);

	for(unsigned int i = 0; i < text.length(); i++){
		if(text[i] != ' ')
			nouvoText += text[i];
	}

	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;
}

void challenge_9(void){
	int m, n;

	cout << "Antre enteval lan (x, y) : ";
	cin >> m >> n;
	int som = 0;

	for(int i = m; i <= n; i++)
		if(i % 2 ==0)
			som += i;
	
	cout << "Rezilta a se : " << som << endl;

}

void challenge_10(void){
	string text = "web-insecure;34829sjdfnsj32984madsdkj";
	string nouvoText;

	for(int i = text.size(); i >= 0; i--)
		if(text[i] == ';')
			break;
		else
			nouvoText = text[i] + nouvoText;

	cout << "Antre : " << text << endl
		 << "Soti : " << nouvoText << endl;
}

void challenge_11(void){
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
}

void challenge_12(void){
	int a, b;

	cout << "Antre de Vale : ";
	cin >> a >> b;

	cout << "Rezilta a se : "<< ((a < b) ? a : b) << endl;
}

void challenge_13(void){
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

}

void challenge_14(void){
	int a, b;

	cout << "Antre de Vale : ";
	cin >> a >> b;

	cout << "Reziltat a se : " << (float)b/a/2 << endl;
}

void challenge_15(void){
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
}
