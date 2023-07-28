#include <iostream>
#include <stdbool.h>

using namespace std;

class FiguraGeometrica{
private:
    int quantidade;
    string cor;
public:
    void setCor(string cor ){
        this->cor = cor;
    }
    void setQuantidade(int quantidade ){
        this->quantidade = quantidade;
    }
    int getQuantidade(){
        return this->quantidade;
    }
    string getCor(){
        return this->cor;
    }
    void leiaCor(){
        string cor;
        printf("\n COR : ");
        cin >> cor;
        setCor(cor);
    }
    void escrevaCor(){
        cout << "Cor : " << getCor();
    }
    virtual float area(){
        return 0.0;
    };
    virtual float perimetro(){
        return 0.0;
    };
};

class Circulo : public FiguraGeometrica{
private:
    float raio;
    int quantidade;
public:
    Circulo(){
        quantidade++;
    }
    void setRaio(float raio){
        this->raio = raio;
    }
    int getRaio(){
        return this->raio;
    }
    void leiaRaio(){
        int raio;
        cout << "\n Digite o raio : ";
        cin >> raio;
        setRaio(raio);
    }
     void escrevaRaio(){
        cout << "\n Informacoes do Circulo \n" << endl;
        cout << "Cor: " << getCor() << endl;
        cout << "Raio: " << getRaio() << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimetro: " << perimetro() << endl;
    }
    virtual float area(){
        float raio2= getRaio();
        float area2;
        area2 = 3.14 * (raio2*raio2);
        return area2;
    }
    virtual float perimetro(){
        float rraio = getRaio();
        float pperimetro;
        pperimetro = 2*3.14*rraio;
        return pperimetro;
    }
};
class Quadrado : public FiguraGeometrica{
private:
    float lado;
    int quantidade;
public:
    Quadrado(){
        quantidade++;
    }
    void setLado(float lado){
        this->lado = lado;
    }
    int getLado(){
        return this->lado;
    }
    void leiaLado(){
        int lado;
        cout << "\n Digite um Lado : ";
        cin >> lado;
        setLado(lado);
    }
     void escrevaLado(){
        cout << "\n Informacoes do Quadrado \n" << endl;
        cout << "Cor: " << getCor() << endl;
        cout << "Lado: " << getLado() << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimetro: " << perimetro() << endl;
    }
    virtual float area(){
        float lado2= getLado();
        float area2;
        area2 = lado2*lado2;
        return area2;
    }
    virtual float perimetro(){
        float lado = getLado();
        float pperimetro;
        pperimetro = lado*4;
        return pperimetro;
    }
};
class Triangulo : public FiguraGeometrica{
private:
    float a;
    float b;
    float c;
public:
    void setA(float a){
        this->a=a;
    }
    float getA(){
        return this->a;
    }
    void setB(float b){
        this->b=b;
    }
    float getB(){
        return this->b;
    }
    void setC(float c){
        this->c=c;
    }
    float getC(){
        return this->c;
    }
    void leiaABC(){
        float a,b,c;
        cout << "\n Digite Base: ";
        cin >> a;
        cout << "\n Digite Lado 2: ";
        cin >> b;
        cout << "\n Digite Lado 3: ";
        cin >> c;
        setA(a);
        setB(b);
        setC(c);
    }
    void escrevaTriangulo(){
        cout << "\n Informacoes do Quadrado \n" << endl;
        cout << "Cor: " << getCor() << endl;
        cout << "Base: " << getA() << endl;
        cout << "Lado 1: " << getB() << endl;
        cout << "Lado 2: " << getC() << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimetro: " << perimetro() << endl;
    }
    virtual float area() {
        if (valido(a, b, c)) {
            float altura = (a + b + c) / 2;
            float area2 = a * altura / 2;
            return area2;
        }
        return 0.0;
    }
    virtual float perimetro(){
        float lado1 = getA();
        float lado2 = getB();
        float lado3 = getC();
        float pperimetro;
        if (valido(a, b, c)) {
        pperimetro = lado1+lado2+lado3;
        return pperimetro;
        }
        return 0.0;
    }
    bool valido(float a, float b, float c){
    if (a + b > c && b + c > a && c + a > b){
        return true;
    }
    printf("\n LADOS NAO VALIDOS !");
    return false;
}

};

int main()
{
    Circulo circulo;
    circulo.leiaCor();
    circulo.leiaRaio();
    circulo.escrevaRaio();

    Quadrado quadrado;
    quadrado.leiaCor();
    quadrado.leiaLado();
    quadrado.escrevaLado();

    Triangulo triangulo;
    triangulo.leiaCor();
    triangulo.leiaABC();
    triangulo.escrevaTriangulo();

    return 0;
}
