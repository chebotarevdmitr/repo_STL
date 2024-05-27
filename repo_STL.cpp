#include <iostream>
#include <stack>
using namespace std;
 
void printStackElements (stack<int> stack) {
	while (!stack .empty()){
		cout << stack.top() << endl;
		stack.pop();
	}
}

int main() {
	// empty пуст, size размер ,push -> добавляет, pop -> удаляет элемент изверхней части стэка 
	// // ,top ;
	stack<int> numbersStack;
	numbersStack.push(1);
	numbersStack.push(2);
	numbersStack.push(3);
	
    /*
	if (numbersStack.empty()) {
		cout << "\tSteck is empty\n";
	}
	else {
		cout << "\tSteck is not empty\n";
	}

	cout << "\tSteck size is " << numbersStack.size() << endl;
	*/
	
	printStackElements(numbersStack);



	system("pause>0");
}
