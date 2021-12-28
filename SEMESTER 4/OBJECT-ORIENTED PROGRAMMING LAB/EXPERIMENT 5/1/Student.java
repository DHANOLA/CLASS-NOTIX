class Student

{

    public String Name;

    public int Roll_No;

    public Student() {
    };

    public Student(String N, int R)

    {

        Name = N;

        Roll_No = R;

        System.out.println("Name : " + Name + " " + "Roll_no : " + Roll_No);

    }

    public void print(String P, int K)

    {

        Name = P;

        Roll_No = K;

        System.out.println("Name : " + Name + " " + "Roll_no : " + Roll_No);

    }

}
