make:
	g++ text_based_rpg.cpp classes/Kud/Kud.cpp -o Kud_RPG -std=c++20 -Wall -g

clean:
	rm Kud_RPG
