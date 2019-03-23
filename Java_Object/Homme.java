public class Homme extends Animal {
  public Homme(String Name) {
    super(Name);
  }

  public Homme() {
    super();
  }

  public String getType() {
    return super.getType()+"Je suis un mammifère. Je suis un Homme.";
  }
}
