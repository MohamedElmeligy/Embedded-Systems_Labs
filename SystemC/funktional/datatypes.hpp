#ifndef INCLUDED_DATATYPES_H
#define INCLUDED_DATATYPES_H

#define SC_INCLUDE_FX
#include <systemc.h>

// TODO:
// Dieser Datentyp wird im Datenpfad des Differentialgleichungslösers
// verwendet, und muss entsprechend angepasst werden.  (Aufgabe 2.1.1:
// Fließkommazahlen; Aufgabe 2.1.2: Festkommazahlen)
typedef sc_fixed<32,16> eq_fixed_t;

#endif // INCLUDED_DATATYPES_H
