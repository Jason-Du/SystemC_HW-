#include <string>
#include <cstdlib>
#include <iostream>
class Employee {
private:
    std::string name;
    std::string id;
    double net_pay;
public:
    Employee();
    Employee(std::string _name, std::string _id);
    std::string get_name();
    std::string get_id();
    double get_net_pay();
    void set_name(std::string _name);
    void set_id(std::string _id);
    void set_net_pay(double _net_pay);
    void print_check();
};