#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

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

/**
 * struct avl_data_s - combined recrusive height and AVL balance
 *
 * @height: height of a subtree
 * @is_AVL: 0 if balance factor of subtree is < -1 or > 1; 1 otherwise
 */
typedef struct avl_data_s
{
	int height;
	int is_AVL;
} avl_data_t;

/* mandatory tasks 0-18 + advanced tasks 19-24, 30, 36 */
typedef struct binary_tree_s binary_tree_t;

/* for output formatted to match project examples */
void binary_tree_print(const binary_tree_t *);

/* mandatory tasks 0-9 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);

/* helper to task 9 */
size_t max_size_t(size_t a, size_t b);

/* mandatory tasks 10-18 */
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* helpers to task 14 */
int max_int(int a, int b);
int binary_tree_balance_height(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
