#include "svgfile.h"
#include <iostream>
#include "sphere.h"

/// VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
/// VVVV DEBUT DU CODE ETUDIANT VVVV
/// VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV

/// Voir implémentation après le main
void svgTest();

int main()
{
    Sphere terre(10,10,10,10,"bleu");
    terre.affichage();
    svgTest();

    return 0;
}

/// Code initial pour comprendre les ajouts de primitives
void svgTest()
{
    /// Sortie graphique dans le fichier output.svg
    /// ( options à voir svgfile.h ligne 23 )
    Svgfile svgout;

    /// Dessin du repère cartésien
    // svgout.addGrid();

    /// Dessins de sphères
    svgout.addDisk(100, 100, 90, "redball");
    svgout.addDisk(300, 100, 70, "greenball");
    svgout.addDisk(500, 100, 50, "blueball");
    svgout.addDisk(700, 100, 30, "greyball");

    /// Dessins de disques
    svgout.addDisk(100, 300, 30, "red");
    svgout.addDisk(300, 300, 50, "green");
    svgout.addDisk(500, 300, 70, "blue");
    svgout.addDisk(700, 300, 90, "grey");

    /// Dessins de croix
    svgout.addCross(300, 300, 50);

    for (int y=50; y<400; y+=50)
        svgout.addCross(400, y, 15);

    /// L'objet svgout est automatiquement libéré à la sortie
    /// de ce sous-programme : le fichier output.svg est alors fermé
}
