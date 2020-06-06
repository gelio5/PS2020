//
// Created by vlrez on 07.04.2020.
//

#include "Sort.h"

struct Node *newNode(int item)
{
    auto *temp = new Node;
    temp->key = item;
    temp->left = temp->right = nullptr;
    return temp;
}

void storeSorted(Node *root, int arr[], int &i)
{
    if (root != nullptr)
    {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}

Node* insert(Node* node, int key)
{
    if (node == nullptr)
        return newNode(key);
    if (less(key, node->key))
        node->left  = insert(node->left, key);
    else if (greater(key, node->key))
        node->right = insert(node->right, key);
    return node;
}

void treeSort(int arr[], int n)
{
    struct Node *root = nullptr;
    root = insert(root, arr[0]);
    for (int i=1; less(i, n); i++)
        root = insert(root, arr[i]);
    int i = 0;
    storeSorted(root, arr, i);
}
