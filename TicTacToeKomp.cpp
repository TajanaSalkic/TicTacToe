//
// Created by DT User on 05/02/2024.
//

#include "TicTacToeKomp.h"

TicTacToeKomp::TicTacToeKomp() {
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

void TicTacToeKomp::zamjeni() {
    if(Igrac=='X'){
        Igrac='O';
    }else if(Igrac=='O'){
        Igrac='X';
    }
}

bool TicTacToeKomp::Pobjeda() {
    if(niz[1][1]==this->Igrac && niz[4][5]==this->Igrac && niz[7][9]==this->Igrac || niz[1][9]==this->Igrac && niz[4][5]==this->Igrac && niz[7][1]==this->Igrac){
        return true;
    }else if(niz[1][1]==this->Igrac && niz[4][1]==this->Igrac && niz[7][1]==this->Igrac || niz[1][5]==this->Igrac && niz[4][5]==this->Igrac && niz[7][5]==this->Igrac || niz[1][9]==this->Igrac && niz[4][9]==this->Igrac && niz[7][9]==this->Igrac){
        return true;
    }else if(niz[1][1]==this->Igrac && niz[1][5]==this->Igrac && niz[1][9]==this->Igrac || niz[4][1]==this->Igrac && niz[4][5]==this->Igrac && niz[4][9]==this->Igrac || niz[7][1]==this->Igrac && niz[7][5]==this->Igrac && niz[7][9]==this->Igrac){
        return true;
    }else{
        return false;
    }
}

void TicTacToeKomp::Komp() {
    int row, col;
    do {
        row = rand() % 3 + 1;
        col = rand() % 3 + 1;
    } while (niz[(row - 1) * 3 + 1][(col - 1) * 4 + 1] != ' '); // Keep generating until an empty spot is found

    niz[(row - 1) * 3 + 1][(col - 1) * 4 + 1] = Igrac;
}

void TicTacToeKomp::Igra() {
    int potezi = 0;
    while (Pobjeda() == false || potezi < 9) {
        int red, kolona;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 11; j++) {
                cout << niz[i][j];
            }

            cout << endl;
        }
        cout << endl;

        if (Igrac == 'X') {
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

        }else{
            Komp();
            potezi++;
            if(Pobjeda()){
                cout << endl<< "Igrac " << Igrac << " je pobjedio!" << endl<< endl;
                break;
            }
            zamjeni();
        }


    }

}