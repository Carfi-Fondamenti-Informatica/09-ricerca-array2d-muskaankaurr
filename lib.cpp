bool ciao(char nomi[10][20], char nomedue [1][20], int &contatore){
    for (int j=0; j<20; j++){
        if (nomi[contatore][j] != nomedue[0][j]){
            return false;
        }else{
            if (j == 19){
                return true;
            }
        }
    }
}

    bool funzione (char nomi[10][20], char nomedue[1][20], int &contatore){
        for (contatore =0; contatore<10; contatore++){
            if (ciao (nomi, nomedue, contatore)){
                return true;
            }
        }return false;
    }

    void inizio (char nomi[][20], int m){
        for (int i=0; i<m; i++){
            for (int j=0; j<20 ; j++){
                nomi[i][j]=' ';
            }
        }
    }
