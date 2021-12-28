class Class2 extends Class1 {
    int h;

    Class2(int x, int y, int z) {
        super(x, y);
        h = z;
    }

    int volume() {
        return (area() * h);
    }
}
