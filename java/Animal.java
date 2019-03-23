public class Animal {
  protected String Nom;

  public Animal(String Name) {
    Nom=Name;
  }

  public Animal() {
    Nom="";
  }

  public String getType() {
    if (Nom=="") return "Je suis un animal.";
    else return ("Je suis un animal de nom "+Nom+". ");
  }
}
