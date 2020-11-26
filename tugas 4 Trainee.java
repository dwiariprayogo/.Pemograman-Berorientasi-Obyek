package pbo_4_inherite;

public class Trainee extends Member {
    private int lamaTraining;

    //Constructor 3 parameter
    public Trainee(String nama, int umur, int lamaTraining) {
        super(nama, umur,alamat); //super : mengambil nilai dari parent
        this.lamaTraining = lamaTraining;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Lama Training (bulan) : " + lamaTraining);
    }
}
