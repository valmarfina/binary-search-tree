#include <iostream>
#include "BinarySearchTree.hpp"

template<class T>
void printTree(std::ostream &out, BinarySearchTree<T> &tree)
{
  std::cout << "Amount of elements in the tree: ";
  std::cout << tree.getCount() << "\n";
  std::cout << "Height of tree: ";
  std::cout << tree.getHeight() << "\n";
  std::cout << "\nInfix (recursive):\n";
  tree.printInorderRecurs(out);
  std::cout << "\nInfix (iterative):\n";
  tree.printInorderIterative(out);
  std::cout << "\nIterative (recursive):\n";
  tree.printPreorderRecurs(out);
  std::cout << "\n";
}

int main()
{
  BinarySearchTree<int> tree;
  std::cout << "Tree: 6 3 11 2 0 7 5 10\n";
  tree.insert(6);
//  tree.insert(3);
//  tree.insert(3);
  tree.insert(11);
//  tree.insert(2);
  tree.insert(0);
  tree.insert(7);
  tree.insert(5);
  tree.insert(10);
  tree.insert(100);
  tree.insert(101);
  tree.insert(106);
  printTree(std::cout, tree);

  std::cout << "11 ?";
  std::cout << (tree.iterativeSearch(11) ? "Yes" : "No") << "\n";
  std::cout << "22 ?";
  std::cout << (tree.iterativeSearch(22) ? "Yes" : "No") << "\n";

  std::cout << "\nDelete 5 and 10 \n";
  tree.deleteKey(5);
  tree.deleteKey(10);

  printTree(std::cout, tree);

  std::cout << "\nDelete 6 and 2 \n";
  tree.deleteKey(6);
  tree.deleteKey(2);

  printTree(std::cout, tree);

  std::cout << "\nDelete all nodes \n";
  tree.deleteKey(0);
  tree.deleteKey(3);
  tree.deleteKey(11);
  tree.deleteKey(7);

  printTree(std::cout, tree);

  BinarySearchTree<int> tree1;
  std::cout << "Tree1: add 3 4 6 7 8 90 102\n";
  tree1.insert(3);
  tree1.insert(4);
  tree1.insert(6);
  tree1.insert(7);
  tree1.insert(8);
  tree1.insert(90);
  tree1.insert(102);
  printTree(std::cout, tree1);

  std::cout << "\nDelete 7 \n";
  tree1.deleteKey(7);

  printTree(std::cout, tree1);

  BinarySearchTree<int> tree2;
  std::cout << "Tree2: add 99 88 77 66 55 44 33\n";
  tree2.insert(99);
  tree2.insert(88);
  tree2.insert(77);
  tree2.insert(66);
  tree2.insert(55);
  tree2.insert(44);
  tree2.insert(33);
  printTree(std::cout, tree2);

  BinarySearchTree<int> tree3;
  std::cout << "Tree3: add 99 88 77 66 55 44 33\n";
  tree3.insert(99);
  tree3.insert(88);
  tree3.insert(77);
  tree3.insert(66);
  tree3.insert(55);
  tree3.insert(44);
  tree3.insert(33);

  std::cout << "\nDelete 66 \n";
  tree2.deleteKey(66);

  printTree(std::cout, tree2);

  if (!(tree3 == tree2))
    std::cout << "tree3 != tree2";

  return 0;
}
