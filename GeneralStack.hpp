#include <iostream>
#include "GeneralList.hpp"

template <class T>
class Stack {
	private:
		List<T> _data; // A list class that comes from GeneralList.hpp.
		size_t _size;
		
	public:
		// Default constructor.
		Stack() {
			_size = 0;
		}

		// Default copy constructor.
		Stack(const Stack<T> &t) {
			_data = t.data;
			_size = _data.size();
		}

		// Getters.
		size_t size() const {
			return _size;
		}

		T &front() const {
			return _data.front();
		}

		T &back() const {
			return _data.back();
		}

		// Adding data to the data structure.
		// They are similar to Getters.
		// There is no "return" when using void.
		void push(T value) {
			_data.push_front(value);
		}

		// Removing data from the data structure.
		void pop(T value) {
			_data.pop_back(value);
		}

		void print() {
			_data.print();
		}

		bool search(T value) {
			return _data.search(value);
		}

		bool empty() const {
			return _data.empty();
		}	

		// This overloaded operator is empty. Please implement.
		Stack<T> operator = (const Stack<T> t) {
				_data = t._data;
				_size = _data.size();
		}

		template <class S>
		friend std::ostream &operator<<(std::ostream &out, const Stack<S> &t);
		template <class S>
		friend bool operator==(const Stack<S> &left_side, const Stack<S> &right_side);
		template <class S>
		friend bool operator!=(const Stack<S> &left_side, const Stack<S> &right_side);
};
