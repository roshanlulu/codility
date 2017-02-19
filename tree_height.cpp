#include <iostream>

using namespace::std;

struct tree {
  int x;
  struct tree * l;
  struct tree * r;
};

tree T21 = {10, NULL, NULL};
tree T12 = {21, NULL, NULL};
tree T11 = {20, NULL, NULL};
tree T2 = {10, &T21, NULL};
tree T1 = {3, &T11, &T12};
tree T = {5, &T1, &T2};


int calculatetreeheight(tree * T) {
    int heightl = -1, heightr = -1;
    if(T != NULL){
         heightl = 1 + calculatetreeheight(T->l);
         heightr = 1 + calculatetreeheight(T->r);
    }
    return ((heightl > heightr) ? heightl : heightr);
}

int main(){

  cout << calculatetreeheight(&T);
  return 0;
}