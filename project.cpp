#include <iostream>
using namespace std; 

int main(){
    int n;
    cout << "Donner le nombre des Etudiants : ";
    cin >> n;
    char (*nom)[20] = new char[n][20];
    float (*informatique) = new float[n];
    float (*math) = new float[n];
    float (*physique) = new float[n];
    float (*developpement) = new float[n];
    float somme = 0;
    float moyenne ;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "Donner le nom de l'etudiant " << i+1 << " : ";
        cin >> nom[i];
    }
    cout << "--- RESULTATS DES ETUDIANTS ---" << endl;
    for( int i = 0 ; i < n ; i++){
  cout << "--- LES NOTES POUR L'ETUDIANT " << nom[i] << " ---" << endl;
        cout << "la note de module informatiques de l'etudiant " << nom[i] << " : ";
        cin >> informatique[i];

        cout << "la note de module math de l'etudiant " << nom[i] << " : ";
        cin >> math[i];

        cout << "la note de module physique de l'etudiant " << nom[i] << " : ";
        cin >> physique[i];

        cout << "la note de module developpement de l'etudiant " << nom[i] << " : ";
        cin >> developpement[i];

        somme = somme + informatique[i] + math[i] + physique[i] + developpement[i]; // Ajouter la note à la somme totale
       
        }
    moyenne = somme / 4 ; // Diviser par le nombre total de notes
    cout << "La moyenne est des notes donnees : " << moyenne << endl;

    return 0;
}