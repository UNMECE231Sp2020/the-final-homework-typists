#include <iostream>
#include "GeneralList.hpp"

template <class T>
class Stack {
	private:
		List<T> _data;
		size_t _size;
		
	public:
		// Default constructor.
		Stack() {
			_size = 0;
			_front = nullptr;
			_back = nullptr;
		}

		// Default copy constructor.
		Stack(const Stack &stack) {
			_front = nullptr;
			_back = nullptr;
			_size = 0;
			reccopy(list._front);
		}

		//Getters.
		T top() const {
			return _front->value;
		}

		size_t size() const {
			return _size;
		}

		// Adding data to the data structure.
		void push(T value) {
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

		// Removing data from the data structure.
		void pop() {
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

		bool search(T value) {
			return _data.search(value);
		}


		bool empty() const {
			return ((_front == nullptr) && (_back == nullptr));
		}

		void print() {
			Dlist *temp;
			for(temp = _front; temp != nullptr; temp = temp->next) {
				std:cout << temp->value << " ";
			}
		        std::cout << std::endl;
		}	

		// This overloaded operator is empty. Please implement.
		Stack<T> operator = (const Stack<T> &stack) {
			// Make sure that the stack on the left is empty
			// or empty it to prevent memory leaks.
			while (!empty()) {
				pop();
			}

			_front = nullptr;
			_back = nullptr;
			_size = 0;
			reccopy(list._front);

			return *this;
		}

		template <class S>
		friend std::ostream &operator<<(std::ostream &out, const Stack<S> &stack);
		template <class S>
		friend bool operator==(const Stack<S> &left_side, const Stack<S> &right_side);
		template <class S>
		friend bool operator!=(const Stack<S> &left_side, const Stack<S> &right_side);

}
