#pragma once

class Shape {
    Shape* next;
protected:
    virtual void draw();
public:
    Shape();
    virtual ~Shape() {}
    Shape* add(Shape* p) {
        this->next = p;
        return p;
    }
    Shape* getNext() {
        return next;
    }
    void paint();
    void setNext(Shape* p);
};