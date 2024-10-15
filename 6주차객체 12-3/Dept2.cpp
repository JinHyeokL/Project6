#include <iostream>
#include "Dept.h"
using namespace std;

Dept::Dept(int size) {
	this->size = size;
	scores = new int[size];
}

Dept::~Dept() {
	delete[] scores;
}

void Dept::read() {
	cout <<"10개 점수 입력" << endl;
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	return scores[index] > 60;
}