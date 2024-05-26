#include <iostream>
#include <stack>
using namespace std;

int main() {
	// empty пуст, size размер ,push нажать ,pop хлопать ,top сверху;
	stack<int> numbersStack;
	 
	if (numbersStack.empty()) {
		cout << "\tSteck is empty\n";
	}
	else {
		cout << "\tSteck is not empty\n";
	}

	cout << "\tSteck size is " << numbersStack.size() << endl;
	system("pause>0");
}
