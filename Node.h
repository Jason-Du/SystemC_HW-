

class Node {
protected:
	long* _Node;
public:
    Node();
	~Node();
	Node(unsigned int _length);
    long* reCreate(unsigned int _length);
	long* get_array()const;
};




