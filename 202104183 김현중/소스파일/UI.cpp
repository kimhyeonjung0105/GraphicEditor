#include <iostream>

using namespace std;
#include "UI.h"

int UI::menu() {
    int n;
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
    cin >> n;
    return n;
}
int UI::input() {
    int n;
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> n;
    return n;
}
int UI::del() {
    int n;
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> n;
    return n;
}
