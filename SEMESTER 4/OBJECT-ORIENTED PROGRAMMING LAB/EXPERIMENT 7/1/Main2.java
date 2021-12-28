//implementing runnable interface
public class Main2 implements Runnable {
    public void run() {
        System.out.println("runnable");
    }

    public static void main(String[] args) {

        Main2 t = new Main2();
        Thread t1 = new Thread(t);
        Thread t2 = new Thread(t);
        t1.start();
        t2.start();
    }
}