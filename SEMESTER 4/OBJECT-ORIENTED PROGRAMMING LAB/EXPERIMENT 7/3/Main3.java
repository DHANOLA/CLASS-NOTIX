class Main3 extends Main2 implements Runnable {
    Main2 d = this;
    Thread t;

    Main3() {
        t = new Thread(this);
        t.start();
    }

    public void run() {
        d = Syn.increment(d);
    }
}
