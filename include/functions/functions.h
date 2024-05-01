#pragma once
#include <iostream>

namespace Set {
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
