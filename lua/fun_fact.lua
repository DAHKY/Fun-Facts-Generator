math.randomseed(os.time())

local facts = {
    "Honig verdirbt nie.",
    "Eine Gruppe von Flamingos wird 'Flamboyance' genannt.",
    "Bananen sind Beeren, aber Erdbeeren sind es nicht.",
    "Der Eiffelturm kann sich im Sommer um bis zu 15 cm dehnen."
}

print(facts[math.random(1, #facts)])
