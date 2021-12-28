class Cricket_player extends Player {
    String type;

    Cricket_player(String n, String t, int a) {
        super(n, a);
        type = t;
    }

    public void show() {
        super.show();
        System.out.println("Player type : " + type);
    }
}
