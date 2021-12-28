class Main {
    public static void main(String ar[]) {
        try {
            balance.Account a = new balance.Account();
            a.read();
            a.disp();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
