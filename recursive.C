#include<stdio.h>
void add(node* *hd, int v){
node* current = *hd;
if(current == NULL){
    current = (node*)malloc(sizeof(node));
    current->value = v;
}else{
    if(v < current->value){
        add(&current->left, v);
    }else{
        add(&current->right, v);
    }
}
getch;
}
