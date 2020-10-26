#include <string>
#include <iostream>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0) {
    // deliberately empty
}
/*
HourlyEmployee::HourlyEmployee(string _name, string _id,
                               double _wageRate, double _hours)
    : Employee(_name, _id), wageRate(_wageRate), hours(_hours) {
    // deliberately empty
}

void HourlyEmployee::set_wageRate(double _wageRate) {
    wageRate = _wageRate;
}

void HourlyEmployee::set_hours(double _hours) {
    hours = _hours;
}
double HourlyEmployee::get_wageRate() {
    return wageRate;
}

double HourlyEmployee::get_hours() {
    return hours;
}

void HourlyEmployee::print_check() {
    set_net_pay(hours * wageRate);

    cout << "\n_________________________________________\n";
    cout << "Pay to the order of " << get_name() << endl;
    cout << "The sum of " << get_net_pay() << " Dollars\n";
    cout << "\n_________________________________________\n";
    cout << "Check Stub: NOT NEGOTIATABLE\n";
    cout << "Employee Number: " << get_id() << endl;
    cout << "Hourly Employee. \nHours worked: " << hours
         << " Rate: " << wageRate << " Pay: " << get_net_pay() << endl;
}
*/
int main(int argc, char *argv[])
{
	return 0;
}