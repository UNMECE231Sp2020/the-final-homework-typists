#include <iostream>
// Do not include GeneralList.hpp, because 
// GeneralStack.hpp already includes it.
/* #include "GeneralList.hpp" */

template <class Q>
class Queue {
	private:
		List<Q> _data; // A list class that comes from GeneralList.hpp.
		size_t _size;

	public:
		// Default constructor.
		Queue() {
			_size = 0;
		}

		// Default copy constructor.
		Queue(const Queue &q) {
			_data = q._data;
			_size = _data.size();
		}

		// Getters.
		size_t size() const {
			return _size;
		}	

		Q &front() const {
			return _data.front(); 
		}

		Q &back() const {
			return _data.back();
		}

		// Push to queue.
		// They are similar to Getters.
		// There is no "return" when using void.
		void enqueue(Q value) {
			_data.push_back(value);
		}

		// Pop from queue.
		void dequeue() {
			_data.pop_front();
		}

		void print() {
			_data.print();
		}

		bool search(Q value) {
			return _data.search(value);
		}

		bool empty() const {
			return _data.empty();
		}

		// This overload operator is empty. Please implement.
		Queue<Q> operator = (const Queue<Q> q) {
			_data = q._data;
			_size = _data.size();
		}

		template <class U>
		friend std::ostream &operator<<(std::ostream &out, 
				const Queue<U> &q);

		template <class U>
		friend bool operator==(const Queue<U> &left_queue, 
				const Queue<U> &right_queue);

		template <class U>
		friend bool operator!=(const Queue<U> &left_queue, 
				const Queue<U> &right_queue);
};

template <class U>
std::ostream &operator<<(std::ostream &out, const Queue<U> &q) {
	out << q._data;
	return out;
}

template <class U>
bool operator==(const Queue<U> &left_queue, const Queue<U> &right_queue) {
	return left_queue._data == right_queue._data;
}

template <class U>
bool operator!=(const Queue<U> &left_queue, const Queue<U> &right_queue) {
	return left_queue._data != right_queue._data;
}

