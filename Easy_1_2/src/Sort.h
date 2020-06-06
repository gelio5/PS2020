#pragma once

template<typename T> bool less(T arg1, T arg2)
{
    return arg1 < arg2;
}
template<typename T> bool greater(T arg1, T arg2)
{
    return arg1 > arg2;
}

struct Node
{
    int key;
    struct Node *left, *right;
};

void storeSorted(Node *root, int arr[], int &i);
Node* insert(Node* node, int key);
void treeSort(int arr[], int n);
