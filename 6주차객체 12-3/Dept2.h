class Dept {
	int size;
	int* scores;
public:
	Dept(int size);
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};