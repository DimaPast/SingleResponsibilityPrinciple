#include <iostream>
#include <string>


class Employee {
public:
    Employee(std::string name, double salary) : name(name), salary(salary) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << std::endl;
    }
    std::string getName() const {
        return name;
    }
    double getSalary() const {
        return salary;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

private:
    std::string name;
    double salary;
};

void increaseSalary(Employee& employee, double percentage) {
    double newSalary = employee.getSalary() + employee.getSalary() * (percentage / 100.0);
    employee.setSalary(newSalary);
}

int main() {
    Employee employee("John Doe", 50000);

    employee.displayInfo();

    double percentageIncrease;
    std::cout << "Enter the percentage increase for salary: ";
    std::cin >> percentageIncrease;
    increaseSalary(employee, percentageIncrease);
    employee.displayInfo();

    return 0;
}