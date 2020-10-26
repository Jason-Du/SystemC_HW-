#include "Node.h"
#include <stdio.h>
#include <assert.h>
#include <cstddef> 
#include <iostream>
using namespace std;
//constructor
Node::Node(){
	_Node=NULL;
	//int _Length=0;
}
//constructor
Node::Node(unsigned int _length) {
	//_Length=_length;
    if (_length == 0)
	{
		_Node = NULL;
	}
    else 
	{
        _Node = new long[_length];
        assert(_Node!= NULL);
    }
}
//deconstructor
Node::~Node() {
	if (_Node!=NULL)
	{
		delete [] _Node;
		_Node = NULL;
	}
}
long* Node::reCreate(unsigned int _length) {
	if (_Node!=NULL)
	{
		delete [] _Node;
		_Node = NULL;
	}
	_Node = new long[_length];
	assert(_Node!= NULL);
	return _Node;
}
long* Node::get_array()const
{
	return _Node;
}

