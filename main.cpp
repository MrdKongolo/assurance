#include <iostream>

using namespace std;

int main()
{
    int Age = -1,NbAcc = -1;
    cout << "Entrez l'age du client : ";
    cin >> Age;
    while(Age<0){
        cout << "\nErreur, recommencez !!!";
        cout << "\nEntrez l'age du client : " << endl;
        cin >> Age;
    }

    cout << "Entrez le nombre d'accidents : ";
    cin >>  NbAcc;
    while(NbAcc<0){
        cout << "\nErreur, recommencez !!";
        cout << "\nLe nombre d'accidents : ";
        cin >> NbAcc;
    }
    cout << "Age = " << Age << " et nombre d'accidents = " <<NbAcc << endl;
    if(Age<25){
        if(NbAcc == 0) cout << "Orange" <<endl;
        else if((NbAcc == 1) || (NbAcc == 2)) cout << "Rouge" <<endl;
        else if((NbAcc >= 3) && (NbAcc <= 6)) cout << "Pas assure" <<endl;
        else if(NbAcc >= 7) cout << "Pas assure" <<endl;
    }
    if(Age >= 25){
        if(NbAcc == 0) cout << "Vert" <<endl;
        else if((NbAcc == 1 )|| (NbAcc == 2)) cout << "Orange" <<endl;
        else if((NbAcc >= 3) && (NbAcc <= 6)) cout << "Rouge" <<endl;
        else if(NbAcc >= 7) cout << "Pas assure" <<endl;
    }
    return 0;
}
