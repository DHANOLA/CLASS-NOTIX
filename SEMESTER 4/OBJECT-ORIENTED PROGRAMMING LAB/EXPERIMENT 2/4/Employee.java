class Employee {
    String name;
    int empid;
    double salary;

    Employee() {
        salary = 100000;
    }

    Employee(String name, int empid, double salary) {
        this.name = name;
        this.empid = empid;
        this.salary = salary;
    }

    String getname() {
        return name;
    }

    double getsalary() {
        return salary;
    }

    double IncreaseSalary(int inc) {
        salary = salary + 0.01 * inc * salary;
        return salary;
    }
}
