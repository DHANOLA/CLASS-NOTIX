class Player {
    String name;
    int age;

    Player(String n, int a) {
        name = n;
        age = a;
    }

    void show() {
        System.out.println("\n");
        System.out.println("Player name : " + name);
        System.out.println("Age : " + age);
    }
}
