#pragma once
#include "Queue.h"
#include "QueueUnderflow.h"
#include "WrongQueueSize.h"
template<class T>
class QueueVector : public Queue<T> {
private:
	T *q_;
	int size_;
	int length_;
	int first_;
	int last_;
public:
	QueueVector(int size) {
		if (size > 0) {
			q_ = new T[size];
			size_ = size;
			length_ = 0;
			first_ = 0;
			last_ = 0;
		}
		else throw WrongQueueSize::WrongQueueSize();
	}

	void enQueue(const T& e) override {
		if (length_ == size_) {
			T* new_q = new T[size_ * 2];
			for (int i = 0; i <= length_; i++) {
				new_q[i] = q_[first_ + i % size_];
			}
			delete[] q_;
			q_ = new_q;
			first_ = 0;
			last_ = length_ - 1;
			size_ *= 2;
		}
		if (isEmpty()) {
			q_[length_++] = e;
			first_ = 0;
			last_ = 0;
			return;
		}
		q_[++last_] = e;
		length_++;
	}

	T deQueue() override {
		if (isEmpty())
			throw QueueUnderflow::QueueUnderflow();
		T value = q_[first_];
		first_++;
		length_--;
		return value;
	}

	bool isEmpty() override {
		return (length_) ? false : true;
	}
};