#include <iostream>
#include "QueueVector.h"


int main() {
	try {
		QueueVector<std::string> queueue(3);
		std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		queueue.enQueue("First");
		queueue.enQueue("Second");
		queueue.enQueue("Third");
		queueue.enQueue("Fourth");

		std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';

		std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		queueue.enQueue("Fifth");
		queueue.enQueue("Sixth");
		queueue.enQueue("Seventh");
		queueue.enQueue("Eighth");
		queueue.enQueue("Nineth");
		queueue.enQueue("Tenth");

		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';
		std::cout << queueue.deQueue() << '\n';

		std::cout << (queueue.isEmpty() ? "Empty" : "Not empty") << '\n';

		std::cout << queueue.deQueue() << '\n';
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