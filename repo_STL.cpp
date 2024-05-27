#include <iostream>
#include <queue>
using namespace std;
// funkciya kotoraya pechataet polnuyu ochered
void printQueue(queue<int> queue) {
	while (!queue.empty()){
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;
}


int main() {
	cout << "\tochered\n";
	queue<int>myQueue;
	myQueue.push(1);//1funkciya dobavleniya v konec ocheredi
	myQueue.push(2);
	myQueue.push(3);
	cout << "Size is " << myQueue.size() << endl;
	cout << "First element is " << myQueue.front() << endl;
	cout << "Last element is" << myQueue.back() << endl;

	cout << "My queue :";
	printQueue(myQueue);

	system("pause>0");
}
