//h file
//using namespace std;
//#include <assert.h>
//#include <cstddef> 
//#include <iostream>

class Node {
private:
	long* _Node;
public:
    Node();
	~Node();
	Node(unsigned int _length);
    long* reCreate(unsigned int _length);
	long* get_array()const;
};




