class Manager extends Employee {
    String department;

    Manager(String name, int empid, String dept) {
        this.name = name;
        this.empid = empid;
        this.department = dept;
    }

    void PrintDetails() {
        System.out.println("\nName: " + super.getname());
        System.out.println("Employee ID :" + empid);
        System.out.println("Department:" + department);
        System.out.println("Salary:" + super.getsalary());
    }
}
