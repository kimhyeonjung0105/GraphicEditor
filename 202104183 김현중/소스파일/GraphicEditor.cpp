#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "UI.h"
#include "GraphicEditor.h"

GraphicEditor::GraphicEditor() {
    pStart = NULL;
    count = 0;
}

void GraphicEditor::create(int num) {
	switch (num) {
	case 1:
		if (count == 0) {
			pStart = new Line();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Line());
		count++;
		break;

	case 2:
		if (count == 0) {
			pStart = new Circle();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Circle());
		count++;
		break;

	case 3:
		if (count == 0) {
			pStart = new Rect();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Rect());
		count++;
		break;

	}
}

void GraphicEditor::indelete(int num) {
	Shape* p = pStart;
	Shape* del = pStart;

	if (num < count) {
		for (int i = 0; i < num; i++) {
			p = del;
			del = del->getNext();
		}
		if (num == 0)
			pStart = p->getNext();
		else
			p->setNext(del);
		count--;
		if (count == 1) pLast = pStart;
		delete del;

	}
	else
		cout << "�ε����� �߸� �Է��ϼ̽��ϴ�." << endl;
}

void GraphicEditor::call() {
	bool exit = true;
	cout << "�׷��� �������Դϴ�." << endl;
	while (exit) {
		switch (menu()) {
		case 1:
			create(input());
			break;
		case 2:
			indelete(UI::del());
			break;
		case 3: {
			Shape* p = pStart;
			for (int i = 0; i < count; i++) {
				cout << i << ": ";
				p->paint();
				p = p->getNext();
			}
			break;
		}
		case 4:
			exit = false;
			break;
		}
	}
}