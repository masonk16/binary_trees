# C - Binary trees


## Authors
- [Isaac Neuwelt](https://github.com/neuwelt)
- [Mason Mapfundematsva](https://github.com/masonk16/)

## Resources
Read or watch:

- [Binary tree](https://alx-intranet.hbtn.io/rltoken/1F2x42-8vUbOmU4L1C1KMg)
- [Data Structure and Algorithms - Tree](https://alx-intranet.hbtn.io/rltoken/QmcTMCkQyrgMjrqoWxYdhw) 
- [Tree Traversal](https://alx-intranet.hbtn.io/rltoken/nMxoYQdZR_guroan8JeqBQ) 
- [Binary Search Tree](https://alx-intranet.hbtn.io/rltoken/qO5dBlMnYJzbaWG3xVpcnQ) 
- [Data structures: Binary Tree](https://alx-intranet.hbtn.io/rltoken/BeyJ2gjlE7_djwRiDyeHig) 


## Requirements
### General
•	Allowed editors: vi, vim, emacs
•	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
•	All your files should end with a new line
•	A README.md file, at the root of the folder of the project, is mandatory
•	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
•	You are not allowed to use global variables
•	No more than 5 functions per file
•	You are allowed to use the standard library
•	In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
•	The prototypes of all your functions should be included in your header file called binary_trees.h
•	Don’t forget to push your header file
•	All your header files should be include guarded



## More Info
### Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

#### Basic Binary Tree
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

#### Binary Search Tree
typedef struct binary_tree_s bst_t;

#### AVL Tree
typedef struct binary_tree_s avl_t;

#### Max Binary Heap
typedef struct binary_tree_s heap_t;
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

### Print function
To match the examples in the tasks, you are given [this function](https://github.com/holbertonschool/0x1C.c)

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction


## Tasks

0. New node:    Write a function that creates a binary tree node
1. Insert left: Write a function that inserts a node as the left-child of another node
2. Insert right:    Write a function that inserts a node as the right-child of another node
3. Delete:  Write a function that deletes an entire binary tree
4. Is leaf: Write a function that checks if a node is a leaf
5. Is root: Write a function that checks if a given node is a root
6. Pre-order traversal: Write a function that goes through a binary tree using pre-order traversal
7. In-order traversal:  Write a function that goes through a binary tree using in-order traversal
8. Post-order traversal:    Write a function that goes through a binary tree using post-order traversal
9. Height:  Write a function that measures the height of a binary tree
10. Depth:  Write a function that measures the depth of a node in a binary tree
11. Size:   Write a function that measures the size of a binary tree
12. Leaves: Write a function that counts the leaves in a binary tree
13. Nodes:  Write a function that counts the nodes with at least 1 child in a binary tree
14. Balance factor: Write a function that measures the balance factor of a binary tree
15. Is full:    Write a function that checks if a binary tree is full
16. Is perfect: Write a function that checks if a binary tree is perfect
17. Sibling:    Write a function that finds the sibling of a node
18. Uncle:  Write a function that finds the uncle of a node
19. Lowest common ancestor: Write a function that finds the lowest common ancestor of two nodes
20. Level-order traversal:  Write a function that goes through a binary tree using level-order traversal
21. Is complete:    Write a function that checks if a binary tree is complete
22. Rotate left:    Write a function that performs a left-rotation on a binary tree
23. Rotate right:   Write a function that performs a right-rotation on a binary tree
24. Is BST: Write a function that checks if a binary tree is a valid [Binary Search Tree](https://alx-intranet.hbtn.io/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
25. BST - Insert:   Write a function that inserts a value in a Binary Search Tree
26. BST - Array to BST: Write a function that builds a Binary Search Tree from an array
27. BST - Search:   Write a function that searches for a value in a Binary Search Tree
28. BST - Remove:   Write a function that removes a node from a Binary Search Tree
29. Big O #BST: What are the average time complexities of those operations on a Binary Search Tree (one answer per line):
30. Is AVL: Write a function that checks if a binary tree is a valid [AVL Tree](https://alx-intranet.hbtn.io/rltoken/fMAZ9aBS-rDWgeIAvdTKWw)
31. AVL - Insert:   Write a function that inserts a value in an AVL Tree
32. AVL - Array to AVL: Write a function that builds an AVL tree from an array
33. AVL - Remove:   Write a function that removes a node from an AVL tree
34. AVL - From sorted array:    Write a function that builds an AVL tree from an array
35. Big O #AVL Tree:    What are the average time complexities of those operations on an AVL Tree (one answer per line)
36. Is Binary heap: Write a function that checks if a binary tree is a valid [Max Binary Heap](https://alx-intranet.hbtn.io/rltoken/TU_7dyDvU6XqO_T0elQk4Q)
37. Heap - Insert:  Write a function that inserts a value in Max Binary Heap
38. Heap - Array to Binary Heap:    Write a function that builds a Max Binary Heap tree from an array
39. Heap - Extract: Write a function that extracts the root node of a Max Binary Heap
40. Heap - Sort:    Write a function that converts a Binary Max Heap to a sorted array of integers
41. Big O #Binary Heap: What are the average time complexities of those operations on a Binary Heap (one answer per line)
