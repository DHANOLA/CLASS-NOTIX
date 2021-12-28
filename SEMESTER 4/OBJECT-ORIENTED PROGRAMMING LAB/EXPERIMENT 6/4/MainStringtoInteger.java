class MainStringtoInteger {
    public static void main(String[] args) {
        String strTest = "100";
        int iTest = Integer.parseInt(strTest);
        System.out.println("Actual String:" + strTest);
        System.out.println("Converted to Int:" + iTest);
        // This will now show some arithmetic operation
        System.out.println("Arithmetic Operation on Int: " + (iTest / 4));
    }
}