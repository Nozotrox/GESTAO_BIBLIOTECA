#include <iostream>
#include <stdio.h>
#include "Documento.h"

using namespace std;

int main() {

    Documento* doc = new Documento("Hunter Prey","metus vitae ipsum aliquam non mauris morbi non lectus aliquam sit amet diam in magna bibendum","Torphy and Sons",1988,24);
    Documento* doc1 = new Documento("19th Wife"," The facilisi cras non velit nec nisi vulputate nonummy maecenas tincidunt lacus at velit vivamus vel nulla","Corwin Inc",2005,28);
    Documento* doc2 = new Documento("Jealousy","magna vestibulum aliquet ultrices erat tortor sollicitudin mi sit amet lobortis","Gorczany, Larkin and Weber",2006,36);
    Documento* doc3 = new Documento("Silent Witness (Do Not Disturb)","pede ac diam cras pellentesque volutpat dui maecenas tristique est et tempus semper est quam pharetra magna","Littel LLC",1992,24);
    Documento* doc4 = new Documento("Have Rocket, Will Travel","magnis dis parturient montes nascetur ridiculus mus etiam vel augue vestibulum rutrum rutrum neque","Cruickshank, Monahan and Crooks",2010,41);
    Documento* doc5 = new Documento("Baadasssss! (How to Get the Man's Foot Outta Your Ass)","pellentesque quisque porta volutpat erat quisque erat eros viverra eget", "Hauck Inc",2012,67);

    doc->toString();
    doc1->toString();
    doc2->toString();
    doc3->toString();
    doc4->toString();
    doc5->toString();
    cout << "Exemplar1: " << doc1->getExemplares()[0].getCodio();
    return 0;
}