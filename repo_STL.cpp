#include <iostream>
#include <stack>
using namespace std;

int main() {
	// empty пуст, size размер ,push нажать ,pop хлопать ,top сверху;
	stack<int> numbersStack;
	 
	if (numbersStack.empty()) {
		cout << "\tSteck is empty";
	}
	else {
		cout << "\tSteck is not empty";
	}
	system("pause>0");
}
