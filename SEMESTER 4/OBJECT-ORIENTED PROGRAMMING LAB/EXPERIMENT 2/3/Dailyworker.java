class Dailyworker extends Worker {
    int rate;

    Dailyworker(int no, String n, int r) {
        super(no, n);
        rate = r;
    }

    void compay(int h) {
        show();
        System.out.println("Salary : " + rate * h);
    }
}
