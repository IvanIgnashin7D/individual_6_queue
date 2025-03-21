#include <iostream>
#include "QueueVector.h"


int main() {
	try {
		QueueVector<int> queueue(2);
		std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		queueue.enQueue(5);
		queueue.enQueue(2);

		queueue.print();
		
		queueue.deQueue();
		
		queueue.print();
		
		queueue.enQueue(3);
		queueue.enQueue(9);
		
		queueue.print();
		
		queueue.deQueue();

		queueue.print();

		queueue.deQueue();
		queueue.print();
		queueue.deQueue();
		queueue.print();

		queueue.enQueue(1);
		queueue.print();
		queueue.deQueue();
		queueue.print();
		std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		//queueue.enQueue("Fifth");
		//queueue.enQueue("Sixth");
		//queueue.enQueue("Seventh");
		//queueue.enQueue("Eighth");
		//queueue.enQueue("Nineth");
		//queueue.enQueue("Tenth");

		//std::cout << queueue.deQueue() << '\n';
		//std::cout << queueue.deQueue() << '\n';
		//std::cout << queueue.deQueue() << '\n';
		//std::cout << queueue.deQueue() << '\n';
		//std::cout << queueue.deQueue() << '\n';
		//std::cout << queueue.deQueue() << '\n';

		//std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		//std::cout << queueue.deQueue() << '\n';
	}
	catch (QueueUnderflow error) {
		std::cerr << error.what() << '\n';
	}
	catch (WrongQueueSize error) {
		std::cerr << error.what() << '\n';
	}
	catch (...) {
		std::cerr << "Unknown error" << '\n';
	}
}