public class Main extends Thread {
    public void run() {
        System.out.println("thread is running");// creating thread by extending thread class
    }

    public static void main(String[] args) {
        Main t = new Main();
        t.start();
    }
}