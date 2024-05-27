#include <iostream>
#include <stack>
using namespace std;

int main() {
	// empty пуст, size размер ,push -> добавляет, pop -> удаляет элемент изверхней части стэка 
	// // ,top ;
	stack<int> numbersStack;
	numbersStack.push(1);
	numbersStack.push(2);
	numbersStack.push(3);
	numbersStack.pop();


	if (numbersStack.empty()) {
		cout << "\tSteck is empty\n";
	}
	else {
		cout << "\tSteck is not empty\n";
	}

	cout << "\tSteck size is " << numbersStack.size() << endl;
	system("pause>0");
}
