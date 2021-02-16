#include "card.hpp"

int main(int argc, char** argv)
{
    Card* KingKrush = new Card("King Krush", 8, 8, 8);
    KingKrush->display();
  
  
Card* ImprisonedAntaen = new Card("Imprisoned Antaen", 6, 10, 6);
    ImprisonedAntaen->display();

Card* BladedLady = new Card("Bladed Lady", 6, 6, 6);
    BladedLady->display();

Card* EmeraldExplorer = new Card("Emerald Explorer", 6, 4, 8);
    EmeraldExplorer->display();

Card* ForestWardenOmu = new Card("Forest Warden Omu", 6, 5, 4);
    ForestWardenOmu->display();




}