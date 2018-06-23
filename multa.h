#ifndef MULTA_H
#define MULTA_H


class multa {

public:
    int valor;
    int fechadepago;
    int fechademulta;

    multa();
    multa(int valor,int fechadepago, int fechademulta);
    ~multa();
    void darvalor (int valor);
    int obtenervalor();
    void darfechadepago (int fechadepago);
    int obtenerfechadepago();
    void darfechamulta(int fechamulta);
    int obtenerfechamulta();
};



#endif // MULTA_H
