class Main {
    public static void main(String args[]) {
        Rectangle rect = new Rectangle();
        Circle cr = new Circle();
        Area ar;
        ar = rect;
        System.out.println("Area of the rectangle= " + ar.compute(10, 20));
        ar = cr;
        System.out.println("Area of the circle= " + ar.compute(10, 0));
    }
}
