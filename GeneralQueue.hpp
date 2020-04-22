#include <iostream>
//Do not include GeneralList.hpp because 
//	GeneralStack.hpp already includes it
/*#include "GeneralList.hpp"*/

template <class Q>
class Queue {
	private:
		List<Q> _data; // A list class that comes from GeneralList.hpp
		size_t _size;
	public:
		//Default constructor
		Queue() {
			_size = 0;
		}

		//Copy constructor
		Queue(const Queue<Q> &q) {
			_data = q._data;
			_size = _data.size();
		}

		//Getters
		size_t size() const {
			return _size;
		}	

		Q &front() const {
			return _data.front(): 
		}

		Q &back() const {
			return _data.back();
		}

		// We are here, Lloyd, on Wednesday, 22 April 2020.
		// The next three "void"s and the next two "bool"s must be completed and filled out correctly.
		//Push to queue. Similar to Getters. No return in void.
		void enqueue(Q value) {
		}

		//Pop from queue
		void dequeue() {
		}

		void print() {
		}

		bool search(Q value) {
		}

		bool empty() {
		}

		Queue<Q> operator=(const Queue<Q> q) {
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
