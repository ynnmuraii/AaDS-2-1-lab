#pragma once
#include <iostream>
#include <random>

namespace SelfWrittenSet {
	template <typename T>
	struct Node
	{
		T _val;
		Node* _left;
		Node* _right;
		Node(T val, Node* left = nullptr, Node* right = nullptr) : _val(val), _left(left), _right(right) {}
	};

	template <typename T>
	class Set {
	private:
		Node<T>* _root;

		Node<T>* copy_tree(Node<T>* root) {
			if (!root) {
				return nullptr;
			}

			Node<T>* new_node = new Node<T>(root->_val);
			new_node->_left = copy_tree(root->_left);
			new_node->_right = copy_tree(root->_right);

			return new_node;
		}

		void clear(Node<T>* head) {
			if (!head) {
				return;
			}
			clear(head->_left);
			clear(head->_right);
			delete head;
		}

		bool erase_with_root(Node<T>*& root, const int& val) {
			if (!root) {
				return false;
			}

			if (root->_val > val) {
				return erase_with_root(root->_left, val);
			}
			else if (root->_val < val) {
				return erase_with_root(root->_right, val);
			}

			if (!root->_left || !root->_right) {
				Node<T>* temp = root->_left ? root->_left : root->_right;
				delete root;
				root = temp;
				return true;
			}

			Node<T>* succParent = root;
			Node<T>* succ = root->_right;
			while (succ->_left != nullptr) {
				succParent = succ;
				succ = succ->_left;
			}

			root->_val = succ->_val;

			return erase_with_root(succParent->_left == succParent ? root->_right : succParent->_left, succ->_val);
		}

		void recursion(Node<T>* root) {
			if (!root) {
				return;
			}
			recursion(root->_left);
			std::cout << root->_val << ' ';
			recursion(root->_right);
		}

	public:

		Set() : _root(nullptr) {}
		Set(std::vector<T> data) : _root(nullptr) {
			for (const auto& el : data) {
				insert(el);
			}
		}
		Set(const Set& other) {
			_root = copy_tree(other._root);
		}
		~Set() {
			clear(_root);
		}

		Node<T>* get_root() const {
			return _root;
		}

		void print() {
			if (_root) {
				recursion(_root);
			}
			std::cout << std::endl;
		}

		bool erase(const int& val) {
			return erase_with_root(_root, val);
		}

		bool insert(const int& val) {
			Node<T>* new_node = new Node<T>(val);
			if (!_root) {
				_root = new_node;
				return true;
			}
			Node<T>* cur = _root;
			Node<T>** ptr = &_root; 

			while (cur) {
				if (val < cur->_val || val == cur->_val) { 
					ptr = &(cur->_left);
				}
				else { 
					ptr = &(cur->_right);
				}
				if (val == cur->_val) {
					delete new_node; 
					return false;
				}
				cur = *ptr; 
			}
			*ptr = new_node; 
			return true;
		}

		bool contains(const int& val) const {
			Node<T>* cur = _root;
			while (cur) {
				if (cur->_val == val) {
					return true;
				}
				else if (cur->_val < val) {
					cur = cur->_right;
				}
				else {
					cur = cur->_left;
				}
			}
			return false;
		}

		Set& operator= (Set oth) {
			std::swap(_root, oth._root);
			return *this;
		}

	};

	int random(int a, int b, size_t i) {
		std::mt19937 gen(i);
		std::uniform_int_distribution<> distribution(a, b);
		return distribution(gen);
	}

	std::vector<int> random(int a, int b, size_t n, size_t i) {
		std::vector<int> res;
		std::mt19937 gen(i);
		std::uniform_int_distribution<> distribution(a, b);
		for (size_t j = 0; j < n; j++) {
			size_t x = distribution(gen);
			res.push_back(x);
		}
		return res;
	}

}