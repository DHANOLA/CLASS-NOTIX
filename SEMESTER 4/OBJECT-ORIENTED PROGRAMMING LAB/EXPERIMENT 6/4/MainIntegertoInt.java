class MainIntegertoInt {
    public static void main(String[] args) {
        Integer myInteger = new Integer(5000);
        // call a method and pass the Integer
        coolMethod(myInteger);
    }

    public static void coolMethod(int n) {

        // Java converts to int at runtime
        System.out.println(n);
    }
}