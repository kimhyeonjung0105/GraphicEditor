#include <iostream>
using namespace std;

#include "Shape.h"

void Shape::draw() {
    cout << "--Shape--" << endl;
}
Shape::Shape() {
    next = NULL;
}
void Shape::paint() {
    draw();
}
void Shape::setNext(Shape* p) {
    this->next = p->next;
}
