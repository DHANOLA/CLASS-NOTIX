class Main extends Number implements Arithmetic {
    public int add(int a, int b) {
        return (a + b);
    }

    public int sub(int a, int b) {
        return (a - b);
    }

    public static void main(String args[]) {
        Main ui = new Main();
        System.out.println("Addition --- >" + ui.add(2, 3));
        System.out.println("Subtraction ----- >" + ui.sub(2, 1));
    }
}