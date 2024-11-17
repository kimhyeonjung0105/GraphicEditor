#pragma once

class GraphicEditor : public UI {
	int count;
	Shape* pStart;
	Shape* pLast;
public:
	GraphicEditor();
	void create(int num);
	void indelete(int num);
	void call();
};