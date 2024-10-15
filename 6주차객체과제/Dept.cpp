#include <iostream>
#include "Dept.h"
using namespace std;

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[size];
	for (int i = 0; i < size; i++) {
		this->scores[i] = dept.scores[i];
	}
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