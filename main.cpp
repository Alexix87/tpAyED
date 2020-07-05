#include <iostream>

using namespace std;
const int MAX_PAIS = 200;

void Abrir (FILE* &Paises, FILE* &ParteDiario){
    Paises = fopen("Paises.txt","r");
    ParteDiario = fopen("ParteDiario.txt","r");
}

void Cerrar(FILE* Paises, FILE* ParteDiario){
    fclose(Paises);
    fclose(ParteDiario);
}


int main() {
    FILE *Paises;
    FILE *ParteDiario;

    Abrir (Paises, ParteDiario);
  
    //freopen(nomFisArchivo, modo, stdin);
    //ProcPaises(argumentos...);
    //ProcParteDiario(Argumentos...);
    //Listado(argumentos...); 
    // Desntro del modulo listado debe exstir un freopen(nomFisArchivo,modo,stdout)
    //freopen("CON", modo, stdin);
    
    Cerrar(Paises,ParteDiario);
    return 0;
}
