class Football_player extends Player {
    String type;

    Football_player(String n, String t, int a) {
        super(n, a);
        type = t;
    }

    public void show() {
        super.show();
        System.out.println("Player type : " + type);
    }
}
