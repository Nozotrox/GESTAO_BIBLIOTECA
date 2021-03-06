//
// Created by nozotrox on 10/4/19.
//

#include "ExemplarLivro.h"
#include "Leitor.h"


ExemplarLivro::ExemplarLivro() : Exemplar() {
    ultimoLeitor = NULL;
}

ExemplarLivro::ExemplarLivro(bool situacao, Estado estado, int codigo, Livro *livro) : Exemplar(situacao, estado, codigo, livro) {
    ultimoLeitor = NULL;
}

ExemplarLivro::ExemplarLivro(const ExemplarLivro &exmplar) : Exemplar(exmplar) {
    this->ultimoLeitor = exmplar.ultimoLeitor;
}

ExemplarLivro::~ExemplarLivro() {

}

Leitor* ExemplarLivro::getUltimoLeitor() {
    return ultimoLeitor;
}


void ExemplarLivro::setUtlimoLeitor(Leitor *leitor) {
    this->ultimoLeitor = leitor;
}

void ExemplarLivro::toString(){
    string titulo = documento->getTitulo();
    string nomeUltimo = ultimoLeitor->getNome();
    printf("%-10d %-20s %-30s\n", codigo, titulo.c_str(), nomeUltimo.c_str());
}