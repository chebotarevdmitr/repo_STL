#include <iostream>
#include <stack>
using namespace std;

int main() {
	// empty ����, size ������ ,push ������ ,pop ������� ,top ������;
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
