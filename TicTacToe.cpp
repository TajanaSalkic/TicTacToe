//
// Created by DT User on 05/02/2024.
//

#include "TicTacToe.h"

TicTacToe::TicTacToe() {
    for(int i=0; i<9; i++ ){
        for( int j=0; j<11; j++){
            if(i%3==2 && i!=8){
                if(j%4==3){
                    niz[i][j]='|';
                }else{
                    niz[i][j]='_';
                }
            }else{
                if(j%4==3){
                    niz[i][j]='|';
                }else{
                    niz[i][j]=' ';
                }
            }
        }
    }
    this->Igrac='X';
}

bool TicTacToe::Pobjeda() {
    if(niz[1][1]==this->Igrac && niz[4][5]==this->Igrac && niz[7][9]==this->Igrac || niz[1][9]==this->Igrac && niz[4][5]==this->Igrac && niz[7][1]==this->Igrac){
        return true;
    }else if(niz[1][1]==this->Igrac && niz[4][1]==this->Igrac && niz[7][1]==this->Igrac || niz[1][5]==this->Igrac && niz[4][5]==this->Igrac && niz[7][5]==this->Igrac || niz[1][9]==this->Igrac && niz[4][9]==this->Igrac && niz[7][9]==this->Igrac){
        return true;
    }else if(niz[1][1]==this->Igrac && niz[1][5]==this->Igrac && niz[1][9]==this->Igrac || niz[4][1]==this->Igrac && niz[4][5]==this->Igrac && niz[4][9]==this->Igrac || niz[7][1]==this->Igrac && niz[7][5]==this->Igrac && niz[7][9]==this->Igrac){
        return true;
    }else{
        return false;
    }
    /*
        for (int i = 1; i <= 7; i += 3) {
            if (niz[i][1] == Igrac && niz[i][5] == Igrac && niz[i][9] == Igrac) {
                return true;
            }
        }

        // Check columns
        for (int j = 1; j <= 9; j += 4) {
            if (niz[1][j] == Igrac && niz[4][j] == Igrac && niz[7][j] == Igrac) {
                return true;
            }
        }

        // Check diagonals
        if ((niz[1][1] == Igrac && niz[4][5] == Igrac && niz[7][9] == Igrac) ||
            (niz[1][9] == Igrac && niz[4][5] == Igrac && niz[7][1] == Igrac)) {
            return true;
        }

        return false;*/
}

void TicTacToe::zamjeni() {
    if(Igrac=='X'){
        Igrac='O';
    }else if(Igrac=='O'){
        Igrac='X';
    }
}

void TicTacToe::Igra() {
    int potezi=0;
    while(Pobjeda()==false || potezi<9){
        int red, kolona;
        for(int i=0; i<9; i++ ){
            for( int j=0; j<11; j++){
                cout << niz[i][j];
            }

            cout << endl;
        }
        cout << endl;

        cout << "Igrac " << Igrac << ": \n";
        do{
            cout << "Unesite red koji zelite: ";
            cin >> red;
        }while(red<1 || red>3);

        do{
            cout << "Unesite kolonu koji zelite: ";
            cin >> kolona;
        }while(kolona<1 || kolona>3);
        if(red==1){
            if(kolona==1){
                if(niz[1][1]==' '){
                    niz[1][1]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;

                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;

                }

            }else if(kolona==2){
                if(niz[1][5]==' '){
                    niz[1][5]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }else{
                if(niz[1][9]==' '){
                    niz[1][9]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }
        }else if(red==2){
            if(kolona==1){
                if(niz[4][1]==' '){
                    niz[4][1]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }else if(kolona==2){
                if(niz[4][5]==' '){
                    niz[4][5]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }else{
                if(niz[4][9]==' '){
                    niz[4][9]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }
            }
        }else{
            if(kolona==1){
                if(niz[7][1]==' '){
                    niz[7][1]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }else if(kolona==2){
                if(niz[7][5]==' '){
                    niz[7][5]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }else{
                if(niz[7][9]==' '){
                    niz[7][9]=Igrac;
                    potezi++;
                    if(Pobjeda()){
                        cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                        break;
                    }
                    zamjeni();
                }else{
                    cout << "To mjesto je vec popunjeno. Pokusajte ponovo!";
                    cout << endl;
                }

            }
        }

        cout << endl;

    }


}