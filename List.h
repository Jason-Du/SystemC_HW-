#ifndef LIST
#define LIST
#include "Node.h"
//#include <stdio.h>
//#include <iostream>
//using namespace std;
#include <stdio.h>


class List : public Node{
private:
	unsigned int length;
	long* pointer1;
public:
    List();
	~List();
	List(unsigned int _length);
	List(const List& other);
	
	int setLength(unsigned int);
	int setElement(unsigned int pos, long val);
	unsigned int getLength();
	long int getElement(unsigned int pos);
	
	/*
	List& operator=(const List&);
	
	List operator+(const List&);
	List operator+=(const List&);
	List operator++();
	List operator++(int);
	List operator--();
	List operator--(int);

	friend ostream& operator<<(ostream &, List);
	friend istream& operator>>(istream &, List&);

*/
};
#endif