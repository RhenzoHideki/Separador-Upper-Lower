//
// Created by sobral on 27/07/19.
//
#include <limits.h>
#include <time.h>
#include <string>
#include <fstream>
#include <algorithm>
#include "Terminal.h"
#include "gtest/gtest.h"

#define PROG "./Prog"

string roda(const string & dado) {
    Terminal term(PROG);

    term.escreva(dado+'\n');
    auto res = term.leLinha();
    strip(res);
    return res;
}

string vector2str(vector<string> & v) {
    string r;

    for (auto & s: v) r += s + ' ';
    return r;
}

string testa_arq(int ind) {
    string dados = "../data/texto"+to_string(ind)+".txt";
    string result = "../data/res"+to_string(ind)+".txt";

    ifstream res(result);
    if (! res.is_open()) return "Erro ao abrir " + result;

    string cmd = PROG;
    cmd += " " + dados;
    Terminal term(cmd);
    auto v = term.lePalavras();
    vector<string> vr;

    string w;
    while (res >> w) vr.push_back(w);

    if (vr.size() != v.size()) {
        return "Esperado: " + vector2str(v) + "\nObtido: "+vector2str(vr);
    }

    auto it = vr.begin();
    for (auto & data: v) {
        if (*it != data) {
            return "Esperado: " + vector2str(v) + "\nObtido: "+vector2str(vr);
        }
        it++;
    }
    return "";

}
TEST(TermTest, Texto1) {
    string r = testa_arq(1);
    if (! r.empty()) {
        FAIL() << r;
    }

}

TEST(TermTest, Texto2) {
    string r = testa_arq(2);
    if (! r.empty()) {
        FAIL() << r;
    }

}
TEST(TermTest, Texto3) {
    string r = testa_arq(3);
    if (! r.empty()) {
        FAIL() << r;
    }

}
TEST(TermTest, Texto4) {
    string r = testa_arq(4);
    if (! r.empty()) {
        FAIL() << r;
    }

}
TEST(TermTest, Texto5) {
    string r = testa_arq(5);
    if (! r.empty()) {
        FAIL() << r;
    }

}
TEST(TermTest, Texto6) {
    string r = testa_arq(6);
    if (! r.empty()) {
        FAIL() << r;
    }

}
TEST(TermTest, Texto7) {
    string r = testa_arq(7);
    if (! r.empty()) {
        FAIL() << r;
    }

}

TEST(TermTest, Maiusculas) {
    string r = testa_arq(8);
    if (! r.empty()) {
        FAIL() << r;
    }

}

TEST(TermTest, Minusculas) {
    string r = testa_arq(9);
    if (! r.empty()) {
        FAIL() << r;
    }

}
