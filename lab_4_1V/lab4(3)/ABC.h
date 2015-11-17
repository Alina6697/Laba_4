#pragma once

class ABC {
protected:
	static ABC *head;
public:

	ABC *next;
	virtual void add() = 0;
	static void show();
	virtual void print() = 0;
};