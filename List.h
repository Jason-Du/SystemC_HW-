#include Node.h
#include <stdio.h>
class List:public Node{
private:
	long* _Node;
	int _Length;
public:
    List();
	~List();
    long* reCreate(unsigned int _length);
};
List::List()
{
	_Length=0;
	Node();
}

List::List(unsigned int _length)
{
	Node(unsigned int _length);
	_Length=_length;
	
}
List::List(const List& other)
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
List::~List() 
{
	~Node();
	_Length=0;
}

// Assignment operator

List& List::operator=(const List& other)
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
List::~List() 
{
	~Node();
	_Length=0;
}
/*

} If the original length is 0, the function sets a new length, uses
reCreate() to allocates an array of size length to _Node,
then returns 1.
} If the original length is not 0, the function prints an error
message then returns 0.
*/
int setLength(unsigned int length)
{
	if(_Length==0)
	{
		reCreate(length);
		return 1;
	}
	else
	{
		 printf("ERROR ! array length is not 0");
		 return 0;
	}
	
}

unsigned int getLength()
{
	return _Length;
}
int setElement(unsigned int pos, long val)
{
	if (pos>_Length)
	{
		printf("ERROR! pos is not legal;")
		return 1;
	}
	else
	{
		_Node[pos]=val;
		return 0;
	}
}
long getElement(unsigned int pos)
{
	if (pos>_Length)
	{
		printf("ERROR! pos is not legal;");
		return -99999;
	}
	else
	{
		return _Node[pos];
	}

}
/*
◦ List operator+(const List &);
◦ List& operator+=(const List &);
◦ List operator++();
◦ List operator++(long);
◦ List operator--();
◦ List operator--(long);
◦ friend ostream& operator<<(ostream &, List);
◦ friend istream& operator>>(istream, List &);
*/

List List::operator+(const List &other) {
    unsigned int loop =
                 _Size < other._Size ? _Size:other._Size;
    // create a return object is required
    List lt(loop);
    for (int i = 0; i < loop; i++) {
        lt._Array[i] = _Array[i] + other._Array[i];

    return lt;
}
List List::operator+=(const List &other) {
    unsigned int loop =
                 _Size < other._Size ? _Size:other._Size;
    for (int i = 0; i < loop; i++) {
        _Array[i] += other._Array[i];

    return *this;
}
List List::operator++() {
    for (int i = 0; i < _Size; i++) {
        ++_Array[i];  // prefix ++

    return *this;
}
List List::operator++(long) {
    List tmp(*this);   // Retain a copy first
    for (int i = 0; i < _Size; i++) {
        _Array[i]++;   // postfix++

    return tmp;
}
List List::operator--() {
    for (int i = 0; i < _Size; i++) {
        --_Array[i];  // prefix ++

    return *this;
}
List List::operator--(long) {
    List tmp(*this);   // Retain a copy first
    for (int i = 0; i < _Size; i++) {
        _Array[i]--;   // postfix++

    return tmp;
}
ostream& operator<<(ostream &out, List list) {
    for (int i = 0; i < list._Size; i++)
        out << list._Array[i] << “ “;
    out << endl;
    return out;
}
istream& operator>>(istream &in, List &list) {
    for (int i = 0; i < list._Size; i++)
        in >> list._Array[i];
    return in;
}














