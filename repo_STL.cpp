#include <iostream>
#include<map> // ne uporyadochen <unordered_map>
#include<string>

using namespace std;

int main() {
	map<string, string> myDictionary;//ne uporyadochen <unordered_map>
	myDictionary.insert(pair<string, string>("apple", "der Apfel"));
	myDictionary.insert(pair<string, string>("banana", "die Banane"));
	myDictionary.insert(pair<string, string>("orange", "die Orange , die Apfelsine"));//apelsin
	myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));//klubnika

	for (auto pair : myDictionary) {
		cout << pair.first << " - " << pair.second << endl;
	}


	system("pause>0");
}
