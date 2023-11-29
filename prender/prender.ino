int conversor(int dedo){
  if(dedo <= 90){
    dedo = 0;
    return dedo;
  }else if(dedo > 90 && dedo <= 300){
    dedo = 1;
    return dedo;
  }else{
    dedo = 2;
    return dedo;
  }
}

int control = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Leer valores de los sensores
  int valorPulgar = analogRead(A0);
  int valorIndice = analogRead(A1);
  int valorMedio = analogRead(A2);
  int valorAnular = analogRead(A3);
  int valorMenique = analogRead(A4);

  // Imprimir letra en el puerto serie
 //Serial.print(valorPulgar);
 //Serial.print(" , ");
 //Serial.print(valorIndice);
 // Serial.print(" , ");
 //Serial.print(valorMedio);
//  Serial.print(" , ");
 //Serial.print(valorAnular);
 //Serial.print(" , ");
//Serial.println(valorMenique);



//************************************CONDICIONALES*****************************//
//-----------CONVERSOR--------------
  valorPulgar = conversor(valorPulgar);
  valorMenique = conversor(valorMenique);

// NINGUNA LETRA //
if (valorPulgar == 0 && valorIndice == 0 && valorMedio == 0 && valorAnular == 0 && valorMenique == 0){
  control = 0;
  delay(10);
}

// A
if (valorPulgar == 2 && valorIndice == 0 && valorMedio == 0 && valorAnular == 0 && valorMenique == 0 && control == 0){
  Serial.println("A");
  control = 1;
  delay(20);
}

// B
if (valorPulgar == 2 && valorIndice == 0 && valorMedio == 0 && valorAnular == 0 && valorMenique == 2 && control == 0){
  Serial.print("B");
  control = 1;
  delay(20);
}

// C
if (valorPulgar == 2 && valorIndice == 0 && valorMedio == 0 && valorAnular == 1 && valorMenique == 2 && control == 0){
  Serial.print("C");
  control = 1;
  delay(20);
}

// D
if (valorPulgar == 2 && valorIndice == 0 && valorMedio == 0 && valorAnular == 0 && valorMenique == 1 && control == 0){
  Serial.print("D");
  control = 1;
  delay(20);
}

// E
if (valorPulgar == 2 && valorIndice == 0 && valorMedio == 0 && valorAnular == 0 && valorMenique == 0 && control == 0){
  Serial.print("E");
  control = 1;
  delay(20);
}

// F
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 1 && valorAnular == 0 && valorMenique == 1 && control == 0){
  Serial.print("F");
  control = 1;
  delay(20);
}

// G
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 1 && valorAnular == 1 && valorMenique == 0 && control == 0){
  Serial.print("G");
  control = 1;
  delay(20);
}

// H
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 1 && valorAnular == 1 && valorMenique == 1 && control == 0){
  Serial.print("H");
  control = 1;
  delay(20);
}

// I
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 0 && valorAnular == 0 && valorMenique == 0 && control == 0){
  Serial.print("I");
  control = 1;
  delay(20);
}

// J
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 0 && valorAnular == 0 && valorMenique == 1 && control == 0){
  Serial.print("J");
  control = 1;
  delay(20);
}

// K
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 0 && valorAnular == 1 && valorMenique == 0 && control == 0){
  Serial.print("K");
  control = 1;
  delay(20);
}

// L
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 0 && valorAnular == 1 && valorMenique == 1 && control == 0){
  Serial.print("L");
  control = 1;
  delay(20);
}

// M
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 1 && valorAnular == 0 && valorMenique == 0 && control == 0){
  Serial.print("M");
  control = 1;
  delay(20);
}

// N
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 1 && valorAnular == 0 && valorMenique == 1 && control == 0){
  Serial.print("N");
  control = 1;
  delay(20);
}

// O
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 1 && valorAnular == 1 && valorMenique == 0 && control == 0){
  Serial.print("O");
  control = 1;
  delay(20);
}

// P
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 1 && valorAnular == 1 && valorMenique == 1 && control == 0){
  Serial.print("P");
  control = 1;
  delay(20);
}

// Q
if (valorPulgar == 1 && valorIndice == 1 && valorMedio == 0 && valorAnular == 0 && valorMenique == 0 && control == 0){
  Serial.print("Q");
  control = 1;
  delay(20);
}

// R
if (valorPulgar == 1 && valorIndice == 1 && valorMedio == 0 && valorAnular == 0 && valorMenique == 1 && control == 0){
  Serial.print("R");
  control = 1;
  delay(20);
}

// S
if (valorPulgar == 1 && valorIndice == 1 && valorMedio == 0 && valorAnular == 1 && valorMenique == 0 && control == 0){
  Serial.print("S");
  control = 1;
  delay(20);
}

// T
if (valorPulgar == 1 && valorIndice == 1 && valorMedio == 0 && valorAnular == 1 && valorMenique == 1 && control == 0){
  Serial.print("T");
  control = 1;
  delay(20);
}

// U
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 1 && valorAnular == 0 && valorMenique == 0 && control == 0){
  Serial.print("U");
  control = 1;
  delay(20);
}

// V
if (valorPulgar == 0 && valorIndice == 1 && valorMedio == 1 && valorAnular == 0 && valorMenique == 1 && control == 0){
  Serial.print("V");
  control = 1;
  delay(20);
}

// W
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 1 && valorAnular == 1 && valorMenique == 0 && control == 0){
  Serial.print("W");
  control = 1;
  delay(20);
}

// X
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 1 && valorAnular == 1 && valorMenique == 1 && control == 0){
  Serial.print("X");
  control = 1;
  delay(20);
}

// Y
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 0 && valorAnular == 1 && valorMenique == 0 && control == 0){
  Serial.print("Y");
  control = 1;
  delay(20);
}

// Z
if (valorPulgar == 1 && valorIndice == 0 && valorMedio == 0 && valorAnular == 1 && valorMenique == 1 && control == 0){
  Serial.print("Z");
  control = 1;
  delay(20);
}

  // Ajustar el retardo según sea necesario
  delay(1000);
}
