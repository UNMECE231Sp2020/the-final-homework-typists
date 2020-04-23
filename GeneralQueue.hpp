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

		// We are here, Lloyd, on Thursday, 23 April 2020.
		// The next three "void"s and the next two "bool"s
		// must be completed and filled out correctly.
		// Push to queue. Similar to Getters. No return in void.
		void enqueue(Q value) {
			Dlist *newNode = new Dlist;
			newNode->value = data;
			newNode->prev = nullptr;

			if(_front == nullptr) {
				newNode->next = nullptr;
				_back = newNode;
			}

			else {
				newNode->next = _front;
				_front->prev = newNode;
			}

			_front = newNode;
			_size++;
		}

		// Pop from queue.
		void dequeue(Q value) {
			Dlist *front_to_delete = _front;
			_front = _front->next;

			if(_front == nullptr) {
				_back = nullptr;
			}

			else {
				_front->prev = nullptr;
			}

			delete front_to_delete;
			_size -= 1;
		}

		void print() {
			Dlist *temp;
			for(temp = _front; temp != nullptr; temp = temp->next) {
				std::cout << temp->value << " ";
			}
			std::cout << std::endl;
		}

		bool search(Q value) {
			Dlist *temp;
			for(temp = _front; temp != nullptr; temp = temp->next) {
				if(temp->value == search_value) {
					return true;
				}
			}
			return false;
		}

		bool empty() const {
			return ((_front == nullptr) && (_back == nullptr));
		}

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
}
