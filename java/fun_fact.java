import java.util.Random;

public class FunFact {
    public static void main(String[] args) {
        String[] facts = {
            "Honig verdirbt nie.",
            "Eine Gruppe von Flamingos wird 'Flamboyance' genannt.",
            "Bananen sind Beeren, aber Erdbeeren sind es nicht.",
            "Der Eiffelturm kann sich im Sommer um bis zu 15 cm dehnen."
        };
        
        Random rand = new Random();
        System.out.println(facts[rand.nextInt(facts.length)]);
    }
}
