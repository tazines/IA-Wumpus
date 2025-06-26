#include <iostream>
#include "Case.h"

int main(){
    Case a= Case(1002);
    Case b= Case(-1002);
    std::cout<<(a<b)<<std::endl;
}
/*
 * Lire la carte du jeu
 * identifier case adjacente
 * Lancer A* pour trouver meilleur chemin et retenir noeud visité
 * Faire action: mouvement et colecter si y a de l'or sinon refaire
 * copter les points
 */