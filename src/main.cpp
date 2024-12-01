#include <iostream>
#include "basicds.h"

int main() {
  std::string hellomsg = "Hello, World!";

  mylibrary::helloWorld(hellomsg);

  std::cout << "Testing custom linked list" << "\n";
  mylibrary::LinkedListInt myLinkedList;
  for (int i = 0; i < 20; ++i) {
    myLinkedList.append(i);
  }

  for (int i = 0; i < myLinkedList.len(); ++i) {
    std::cout << myLinkedList.get(i) << ", ";
  }
  std::cout << std::endl;

  return 0;
}