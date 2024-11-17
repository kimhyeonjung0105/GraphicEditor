#include <iostream>

using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "UI.h"
#include "GraphicEditor.h"

int main() {
	GraphicEditor* editor = new GraphicEditor;
	editor->call();
	delete editor;
}