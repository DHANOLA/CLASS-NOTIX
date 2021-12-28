class Main {
    public static void main(String args[]) {
        Class2 cr = new Class2(10, 20, 15);
        int a1 = cr.area();
        int v1 = cr.volume();
        System.out.println("Area of Room : " + a1);
        System.out.println("Volume of Room : " + v1);
    }
}