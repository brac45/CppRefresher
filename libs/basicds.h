//
// Created by Jong Ho Lee on 11/29/24.
//

#ifndef BASICDS_H
#define BASICDS_H

#include <iostream>
#include <string>

namespace mylibrary {
  void helloWorld(const std::string &message);

  int addTwoNumbers(int a, int b);

  class LinkedListInt {
  public:
    LinkedListInt();

    ~LinkedListInt();

    void append(int item);

    void insert(int idx, int item);

    void remove(int idx, int item);

    uint32_t len();

    int get(int idx);

  private:
    class Node {
    public:
      int val;
      Node *next;

      Node(int item);

      Node(int item, Node *next);

      ~Node();
    };

    // Pointer to empty header Node
    Node* hdrPtr;
    // Pointer to last Node
    Node* endPtr;
    // Size of the linked list
    uint32_t size;
  };
}


#endif //BASICDS_H
