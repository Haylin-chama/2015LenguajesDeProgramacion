#ifndef POLINOMIO2_H
#define POLINOMIO2_H

class Polinomio2
{
    public:
        Polinomio2();
        ~Polinomio2();
        bool Validar(Polinomio2);
        void Llenar();
        void Sumar(Polinomio2, Polinomio2);
        void Multiplicar(Polinomio2, Polinomio2);
        void Derivar(Polinomio2);
        void Evaluar(Polinomio2);
        void Mostrar();
    private:
        POLINOMIO2 poli;

#endif // POLINOMIO2_H

