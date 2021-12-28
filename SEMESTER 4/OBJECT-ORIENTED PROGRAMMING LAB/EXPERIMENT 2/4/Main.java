class Main {
    public static void main(String[] args) {
        Employee obj1 = new Employee("Jadaish", 9867, 150000.0);
        System.out.println("Name:" + obj1.getname() + "\nSalary:" + obj1.getsalary());
        System.out.println("Increased salary is:" + obj1.IncreaseSalary(15));
        Manager obj2 = new Manager("Pushpander", 9879, "Electrical");
        obj2.PrintDetails();
    }
}