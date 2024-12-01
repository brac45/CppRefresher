//
// Created by Jong Ho Lee on 11/29/24.
//

#include "basicds.h"

void mylibrary::helloWorld(const std::string &message) {
  std::cout << message << std::endl;
}

int mylibrary::addTwoNumbers(const int a, const int b) {
  return a + b;
}

// LinkedList definitions

mylibrary::LinkedListInt::LinkedListInt() {
  // Header node
  hdrPtr = new Node(-1);
  endPtr = hdrPtr;
  size = 0;
}

mylibrary::LinkedListInt::~LinkedListInt() {
  Node *cur = hdrPtr;
  while (cur->next) {
    cur = cur->next;
    Node *nextPtr = cur->next;
    delete cur;
    cur = nextPtr;
  }
  endPtr = nullptr;
  delete hdrPtr;
}

void mylibrary::LinkedListInt::append(const int item) {
  endPtr->next = new Node(item);
  endPtr = endPtr->next;
  size++;
}

void mylibrary::LinkedListInt::insert(int idx, int item) {
  Node *cur = hdrPtr;
  int curIdx = -1;

  while (cur->next) {
    cur = cur->next;
    curIdx++;
    if (curIdx == idx) {
      Node *temp = new Node(item, cur->next);
      cur->next = temp;
      size++;
      return;
    }
  }
}

void mylibrary::LinkedListInt::remove(int idx, int item) {
}

uint32_t mylibrary::LinkedListInt::len() {
  return size;
}

int mylibrary::LinkedListInt::get(int idx) {
  Node *cur = hdrPtr;
  int curIdx = -1;

  while (cur->next) {
    cur = cur->next;
    curIdx++;
    if (curIdx == idx) {
      return cur->val;
    }
  }
  return -1;
}

mylibrary::LinkedListInt::Node::Node(int item) {
  this->val = item;
  this->next = nullptr;
}

mylibrary::LinkedListInt::Node::Node(int item, Node *next) {
  this->val = item;
  this->next = next;
}

mylibrary::LinkedListInt::Node::~Node() {
}
