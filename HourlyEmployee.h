#ifndef HOURLYEMPLOYEE
#define HOURLYEMPLOYEE

#include <string>
#include "Employee.h"

class HourlyEmployee : public Employee {
private:
    double wageRate;
    double hours;
public:
    HourlyEmployee();
    HourlyEmployee(std::string _name, std::string _id,
                   double _wageRate, double _hours);
    void set_wageRate(double _wageRate);
    void set_hours(double _hours);
    double get_wageRate();
    double get_hours();
    void print_check();
};

#endif
