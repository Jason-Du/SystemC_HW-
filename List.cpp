#include <string>
#include <iostream>
#include Node.h
List::List()
{
	int _Length=0;
	Node();
}

List::List(unsigned int _length)
{
	Node(unsigned int _length);
	_Length=_length;
	
}
List::List(constList& other)
{
	_Length = other._Length;
	if (_Length > 0) {
		_Array = new int[_Length];
		assert(_Array != 0);
		for (inti= 0; i< _Length; i++)
			_Array[i] = other._Array[i];
	}
	else
		_Array = NULL;
}
// Assignment operator
/*
List& List::operator=(constList& other)
{
	if (this != &other) 
	{ // if the same one, do nothing
		delete [] _Array; // _Array may not be NULL
		_Length = other._Length;
		if (_Length > 0)
		{
			_Array = new int[_Length];
			assert(_Array != 0);
			for (inti= 0; i< _Length; i++)
			_Array[i] = other._Array[i];
		}
		else
		_Array = NULL;
	}
	return *this; // return this object
}
*/
List::~List() 
{
		~Node();
		_Length=0;
}

