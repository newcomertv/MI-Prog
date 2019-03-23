public class Chien extends Animal {
  public Chien(String Name) {
    super(Name);
  }

  public Chien() {
    super();
  }

  public String getType() {
    return super.getType()+"Je suis un mammifère. Je suis un Chien.";
  }
}
