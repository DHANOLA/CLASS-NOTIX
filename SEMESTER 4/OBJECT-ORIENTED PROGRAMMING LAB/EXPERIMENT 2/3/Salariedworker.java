class Salariedworker extends Worker {
    int rate;

    Salariedworker(int no, String n, int r) {
        super(no, n);
        rate = r;
    }

    int hour = 40;

    void compay() {
        show();
        System.out.println("Salary : " + rate * hour);
    }
}
