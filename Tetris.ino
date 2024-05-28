byte col = 0;
 
// variável byte para a matriz de leds 8 linhas por 8 colunas
byte leds[8][8];
 
// vetor que relaciona as portas do Arduino às saídas do display
// 14 - 19 é a conversão em portas digitais das portas analógicas A0 - A5
int pinos[17] = { 0, 5, 4, 3, 2, 14, 15, 16, 17, 13, 12, 11, 10, 9, 8, 7, 6};
 
// vetor de 8 inteiros que são as portas digitais que representam as colunas
int colunas[8] = {9, 3, 2, 12, 15, 11, 7, 6};
 
// vetor de 8 inteiros que são as portas digitais que representam as linhas
int linhas[8] = {13, 8, 17, 10, 5, 16, 4, 14};
 
// variável de leitura que representa a quantidade de termos
const int termos = 11;
 
int padrao = 0;
 
void setup() {
 
  for (int i = 0; i <= 17; i++) {
    pinMode(pinos[i], OUTPUT);
  }
  //setpadrao(padrao);
}
int i = 0; 
void loop() {
  digitalWrite(colunas[1], HIGH);
  digitalWrite(linhas[4], LOW);
}
 
 
/*void setpadrao(int padrao) {
  // percorre as linhas 'i' e as colunas 'j' uma por uma
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 7; j++) {
      leds[i][j] = padroes[padrao][i][j];
    }
  }
}*/
// função ininterrupta da biblioteca
/*void display() {
  
  // apaga toda a coluna anterior
  digitalWrite(colunas[col], HIGH);
  col++;
  if (col == 7) {
    col = 0;
  }
  for (int linha = 0; linha < 7; linha++) { 
    if (leds[col][7 - linha] == 1) {
      // liga este led
      digitalWrite(linhas[linha], HIGH);
    }
    else {
      // apaga este led
      digitalWrite(linhas[linha], LOW);
    }
  }
  
  // liga a coluna inteira de uma só vez (para tempos de iluminação iguais)
  digitalWrite(colunas[col], LOW);
}*/
