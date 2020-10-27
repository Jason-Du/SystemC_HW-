#ifndef LIST
#define LIST
#include "Node.h"

#include <iostream> 


class List : public Node{
protected:
	unsigned int length;
public:
    List();
	~List();
	List(unsigned int _length);
	List(const List& other);
	
	int setLength(unsigned int);
	int setElement(unsigned int pos, long val);
	unsigned int getLength();
	long int getElement(unsigned int pos);
	
	
	List& operator=(const List&);
	
	List operator+(const List&);
	List operator+=(const List&);
	List operator++();
	List operator++(int);
	List operator--();
	List operator--(int);

	friend std::ostream& operator<<(std::ostream &, List);
	friend std::istream& operator>>(std::istream &, List&);
};
#endif