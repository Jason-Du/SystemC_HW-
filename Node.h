//h file
class Node {
private:
	long* _Node;
public:
    Node();
	~Node();
    long* reCreate(unsigned int _length);
};
Node::Node(){
	long* _Node=NULL;
	//int _Length=0;
}

Node::Node(unsigned int _length) {
	//_Length=_length;
    if (_length == 0)
        _Node = NULL;
    else {
        _Node = new int [_length];
        assert(_Array != NULL);
    }
}
Node::~Node() {
	if (_Node!=NULL)
	delete [] _Node;
	_Node = NULL;
}
long* Node::reCreate(unsigned int _length) {
	if (_Node!=NULL)
	{
		delete [] _Node;
		_Node = NULL;
	}
	_Node = new int [_length];
	assert(_Array != NULL);
}