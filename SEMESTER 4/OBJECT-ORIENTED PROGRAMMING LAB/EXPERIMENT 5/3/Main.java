class Main {
    public static void main(String ar[]) {
        int a, b, c = 0;
        try {
            a = Integer.parseInt(ar[0]);
            throw new NonNum();
        } catch (NumberFormatException e) {
            System.out.println(e);
        } catch (NonNum e) {
            System.out.println(e);
        }
    }
}
