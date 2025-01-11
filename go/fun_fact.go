package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	facts := []string{
		"Honig verdirbt nie.",
		"Eine Gruppe von Flamingos wird 'Flamboyance' genannt.",
		"Bananen sind Beeren, aber Erdbeeren sind es nicht.",
		"Der Eiffelturm kann sich im Sommer um bis zu 15 cm dehnen.",
	}

	rand.Seed(time.Now().Unix())
	fmt.Println(facts[rand.Intn(len(facts))])
}
