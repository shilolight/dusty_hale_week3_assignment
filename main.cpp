#include<iostream>
#include"player_character.h"
#include"opponent.h"


using namespace std;

int main() {
    player_character player;
    opponent enemy;
    player.health = 3;
    enemy.health = 3;
    string play = "y";
    string choice;
    cout<<"Dueling Grounds"<<endl;
    cout<<"Last One Standing Wins!"<<endl;
    cout<<"Magic Beats Melee"<<endl<<"Melee Beats Ranged"<<endl<<"Bow and Arrow (ranged) Beats Magic"<<endl;
    while (true) {
        cout<<"Will you use magic, melee, or ranged? (q to quit): ";
        cin>>ws;
        getline(cin,choice);
        string opponent_attack = enemy.opponent::attack();
        cout<<"Opponent uses: "<<opponent_attack<<endl;
        if (choice == "melee" and opponent_attack == "ranged") {
            cout<<"Opponent takes damage!"<<endl;
            cout<<"Your Health: "<<player.player_character::health<<endl;
            enemy.health--;
            cout<<"Opponent Health: "<<enemy.health<<endl;
        }
        else if (choice == "magic" and opponent_attack == "melee") {
            cout<<"Opponent takes damage!"<<endl;
            cout<<"Your Health: "<<player.health<<endl;
            enemy.health--;
            cout<<"Opponent Health: "<<enemy.health<<endl;
        }
        else if (choice == "ranged" and opponent_attack == "magic") {
            cout<<"Opponent takes damage!"<<endl;
            cout<<"Your Health: "<<player.health<<endl;
            enemy.health--;
            cout<<"Opponent Health: "<<enemy.health<<endl;
        }
        else if (choice == "ranged" and opponent_attack == "melee") {
            cout<<"You take damage!"<<endl;
            player.health--;
            cout<<"Your Health: "<<player.health<<endl;
            cout<<"Opponent Health: "<<enemy.health<<endl;
        }
        else if (choice == "magic" and opponent_attack == "ranged") {
            cout<<"You take damage!"<<endl;
            player.health--;
            cout<<"Your Health: "<<player.health<<endl;
            cout<<"Opponent Health: "<<enemy.health<<endl;
        }
        else if (choice == "melee" and opponent_attack == "magic") {
            cout<<"You take damage!"<<endl;
            player.player_character::health--;
            cout<<"Your Health: "<<player.player_character::health<<endl;
            cout<<"Opponent Health: "<<enemy.opponent::health<<endl;
        }
        else if (choice == "ranged" and opponent_attack == "ranged") {
            cout<<"Tie no damage taken!"<<endl;
        }
        else if (choice == "melee" and opponent_attack == "melee") {
            cout<<"Tie no damage taken!"<<endl;
        }
        else if (choice == "magic" and opponent_attack == "magic") {
            cout<<"Tie no damage taken!"<<endl;
        }
        else if (choice == "q") {
            break;
        }
    }
    return 0;
}
