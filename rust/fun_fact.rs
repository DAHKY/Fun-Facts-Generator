use rand::seq::SliceRandom;

fn main() {
    let facts = [
        "Honig verdirbt nie.",
        "Eine Gruppe von Flamingos wird 'Flamboyance' genannt.",
        "Bananen sind Beeren, aber Erdbeeren sind es nicht.",
        "Der Eiffelturm kann sich im Sommer um bis zu 15 cm dehnen.",
    ];

    let fact = facts.choose(&mut rand::thread_rng()).unwrap();
    println!("{}", fact);
}
