package pbo_4_inherite;

public class main {

    public static void main(String[] args) {
        //Deklarasi Tim
        Tim Mawar = new Tim("Mawar");

        //Deklarasi Member
        Member orang_1 = new Member("yoga", 19);
        Member orang_2 = new Member("yogi", 21);
        Member orang_3 = new Member("bintang", 25);

        //Deklarasi Trainee
        Member orang_4 = new Trainee("dwi", 32, 7);
        Member orang_5 = new Trainee("hamit", 23, 9);
        Member orang_6 = new Trainee("bagus", 22, 8);

        //Menambahkan data pada ArrayList
        Mawar.addMember(orang_1);
        Mawar.addMember(orang_2);
        Mawar.addMember(orang_3);
        Mawar.addMember(orang_4);
        Mawar.addMember(orang_5);
        Mawar.addMember(orang_6);

        //Output
        Mawar.displayFullMember();
        Mawar.displayTrainee();
    }

}
