#include <string>
#include <cstdlib>
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee() : name(""), id(""), net_pay(0) {
    // deliberately empty
}

Employee::Employee(string _name, string _id)
    : name(_name), id(_id), net_pay(0) {
    // deliberately empty
}

string Employee::get_name() {
    return name;
}

string Employee::get_id() {
    return id;
}

double Employee::get_net_pay() {
    return net_pay;
}
int main(int argc, char *argv[])
{
	return 0;
}
