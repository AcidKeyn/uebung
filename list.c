#include <stdio.h>
#include <stdlib.h>
struct leaf {
    char *name;
    struct leaf *left;
    struct leaf *right;
};

struct leaf* createLeaf(char *name) {
    struct leaf* newLeaf=malloc(sizeof(struct leaf));
    newLeaf->name=name;
    newLeaf->left=NULL;
    newLeaf->right=NULL;
    return newLeaf;
}

struct leaf* insertRight(struct leaf *root, char *name) {
    root->right=createLeaf(name);
    return root->right;
}

struct leaf* insertLeft(struct leaf *root, char *name) {
    root->left=createLeaf(name);
    return root->left;
}

int main() {
    printf("Binary Tree build\n");
    
    struct leaf *newLeaf=createLeaf("Ahmet");
    printf("name: %s\n", newLeaf->name);

    insertLeft(newLeaf, "Joe");
    insertRight(newLeaf, "Doe");

    return 0;
}