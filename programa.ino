//        andares:    1   2   3   4   5 
const int andares[5] = {53, 50, 48, 52, 46};

//        colunas:        1   2   3   4   5   6   7   8   9  10  
const int colunas[25] = {43, 45, 47, 49, 51, 33, 35, 37, 39, 41, 
  23, 25, 27, 29, 31, 30, 28, 26, 24, 22, 40, 38, 36, 34, 32};
//11  12  13  14  15  16  17  18  19  20  21  22  23  24  25

int tempo = 100;

void Coluna_1(){
  int i;
  int j;

  for(i = 0; i < 25; i++){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
    for(j = 0; j < 2; j++){
      digitalWrite (andares[0], HIGH);
      digitalWrite (andares[1], HIGH);
      digitalWrite (andares[2], HIGH);
      digitalWrite (andares[3], HIGH);
      digitalWrite (andares[4], HIGH);

      pinMode (andares[0], OUTPUT);
      pinMode (andares[1], OUTPUT);
      pinMode (andares[2], OUTPUT);
      pinMode (andares[3], OUTPUT);
      pinMode (andares[4], OUTPUT);
      // ativa o andar
      delay (tempo); 
      pinMode (andares[0], INPUT);
      pinMode (andares[1], INPUT);
      pinMode (andares[2], INPUT);
      pinMode (andares[3], INPUT);
      pinMode (andares[4], INPUT);//desativa o andar
    }
    pinMode (colunas[i], INPUT);// desativa o GND
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Coluna_2(){
  int i;
  int j;

  for(i = 0; i < 25; i++){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);
    if(i==24){
      pinMode (colunas[0], OUTPUT);
      digitalWrite (colunas[0], LOW);
      }
    else{
      pinMode (colunas[i+1], OUTPUT);
      digitalWrite (colunas[i+1], LOW);
      }
    
    
    for(j = 0; j < 2; j++){
      digitalWrite (andares[0], HIGH);
      digitalWrite (andares[1], HIGH);
      digitalWrite (andares[2], HIGH);
      digitalWrite (andares[3], HIGH);
      digitalWrite (andares[4], HIGH);

      pinMode (andares[0], OUTPUT);
      pinMode (andares[1], OUTPUT);
      pinMode (andares[2], OUTPUT);
      pinMode (andares[3], OUTPUT);
      pinMode (andares[4], OUTPUT);
      // ativa o andar
      delay (tempo); 
      pinMode (andares[0], INPUT);
      pinMode (andares[1], INPUT);
      pinMode (andares[2], INPUT);
      pinMode (andares[3], INPUT);
      pinMode (andares[4], INPUT);//desativa o andar
    }
    pinMode (colunas[i], INPUT);
    if(i==24){
      pinMode (colunas[0], INPUT);
      }
    else{
      pinMode (colunas[i+1], INPUT);// desativa o GND
      }   
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Ampulheta(){
  int i,r;
  for (r = 0;r<5;r++){
    if(r == 1||r == 3){
      digitalWrite(andares[r],HIGH);
      pinMode(andares[r],OUTPUT);
    
      digitalWrite(colunas[6],LOW);
      digitalWrite(colunas[7],LOW);
      digitalWrite(colunas[8],LOW);
      digitalWrite(colunas[11],LOW);
      digitalWrite(colunas[12],LOW);
      digitalWrite(colunas[13],LOW);
      digitalWrite(colunas[16],LOW);
      digitalWrite(colunas[17],LOW);
      digitalWrite(colunas[18],LOW);
      
      pinMode(colunas[6],OUTPUT);
      pinMode(colunas[7],OUTPUT);
      pinMode(colunas[8],OUTPUT);
      pinMode(colunas[11],OUTPUT);
      pinMode(colunas[12],OUTPUT);
      pinMode(colunas[13],OUTPUT);
      pinMode(colunas[16],OUTPUT);
      pinMode(colunas[17],OUTPUT);
      pinMode(colunas[18],OUTPUT);
  
      delay(tempo);
      
      pinMode(andares[r],INPUT);
      
      pinMode(colunas[6],INPUT);
      pinMode(colunas[7],INPUT);
      pinMode(colunas[8],INPUT);
      pinMode(colunas[11],INPUT);
      pinMode(colunas[12],INPUT);
      pinMode(colunas[13],INPUT);
      pinMode(colunas[16],INPUT);
      pinMode(colunas[17],INPUT);
      pinMode(colunas[18],INPUT);
    }
    else if(r == 0||r == 4){
      for(i=0;i<25;i++){
        digitalWrite(colunas[i],LOW);
        pinMode(colunas[i],OUTPUT);
      }
      digitalWrite(andares[r],HIGH);
      pinMode(andares[r],OUTPUT);
      
      delay(tempo);
      
      pinMode(andares[r],INPUT);
      for(i=0;i<25;i++){
        pinMode(colunas[i],INPUT);
      }
      
    }
    else if(r == 2){
      digitalWrite(colunas[12],LOW);
      pinMode(colunas[12],OUTPUT);
      
      digitalWrite(andares[r],HIGH);
      pinMode(andares[r],OUTPUT);
      
      delay(tempo);
      
      pinMode(andares[r],INPUT);
      pinMode(colunas[12],INPUT);
      }
      
    }
    for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Chuva(){
  for(int r = 0; r<15;r++){
  int i = random(0,26);
  int j;
  if (i==1){
    digitalWrite (colunas[0], LOW);
    pinMode (colunas[0], OUTPUT);
  }else{
    digitalWrite (colunas[i-1], LOW);
    pinMode (colunas[i-1], OUTPUT);
  }
    for(j = 4; j >= 0; j--){
      digitalWrite (andares[j], HIGH);
      digitalWrite (andares[j+1], HIGH);
      pinMode (andares[j], OUTPUT);
      pinMode (andares[j+1], OUTPUT);
      delay (tempo); 
      pinMode (andares[j], INPUT);
      pinMode (andares[j+1], INPUT);
    }
    pinMode (colunas[i-1], INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Colunas_Aleatorias(){
  for (int r = 0; r<15;r++){
  int i = random(0,25);
  int j;
  for(j=0;j<5;j++){
    digitalWrite (andares[j], HIGH);
    pinMode (andares[j], OUTPUT);
  }
  digitalWrite (colunas[i], LOW);
  pinMode (colunas[i], OUTPUT);// ativa os GND
  delay (tempo); 
  pinMode (colunas[i], INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Colunas_Girando(){
  for(int r = 0; r<10;r++){
  int j;
    for (j = 0;j<5;j++){
    digitalWrite (andares[j], HIGH);
    pinMode (andares[j], OUTPUT);
  }
  int i;
  for(i=0;i<25;i=i+6){
    digitalWrite (colunas[i],LOW);
    pinMode (colunas[i],OUTPUT);
  }    
  
    delay(tempo);
    
  for(i=0;i<25;i=i+6){
    pinMode (colunas[i],INPUT);
  }       
  for(i=2;i<23;i=i+5){
    digitalWrite (colunas[i],LOW);
    pinMode (colunas[i],OUTPUT);
  }
  
    delay(tempo);
    
  for(i=2;i<23;i=i+5){
    pinMode (colunas[i],INPUT);
  }   
    
  for(i=4;i<21;i=i+4){
    digitalWrite (colunas[i],LOW);
    pinMode (colunas[i],OUTPUT);
  }
  
    delay(tempo);
    
  for(i=4;i<21;i=i+4){
    pinMode (colunas[i],INPUT);
  }  
   
  for(i=10;i<15;i++){
    digitalWrite (colunas[i],LOW);
    pinMode (colunas[i],OUTPUT);
  }
  
    delay(tempo);
    
  for(i=10;i<15;i++){
    pinMode (colunas[i],INPUT);
  } 
 }
 for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Full_Aleatorio(){
  for (int r = 0; r<25; r++){
  int i = random(0,25);
  int j = random(0,5);
  digitalWrite (andares[j], HIGH);
  pinMode (andares[j], OUTPUT);
  
  digitalWrite (colunas[i], LOW);
  pinMode (colunas[i], OUTPUT);// ativa os GND
  delay (tempo); 
  pinMode (andares[j], INPUT);
  pinMode (colunas[i], INPUT);
  }
}

void Diagonais(){
  int r;
  for (r = 0;r<5;r++){
    digitalWrite(andares[r],HIGH);
    pinMode(andares[r],OUTPUT);
    
    digitalWrite(colunas[0+6*r],LOW);
    digitalWrite(colunas[4+4*r],LOW);
    digitalWrite(colunas[24-6*r],LOW);
    digitalWrite(colunas[20-4*r],LOW);
    
    pinMode(colunas[0+6*r],OUTPUT);
    pinMode(colunas[4+4*r],OUTPUT);
    pinMode(colunas[24-6*r],OUTPUT);
    pinMode(colunas[20-4*r],OUTPUT);

    delay(tempo);
    
    pinMode(andares[r],INPUT);
    
    pinMode(colunas[0+6*r],INPUT);
    pinMode(colunas[4+4*r],INPUT);
    pinMode(colunas[24-6*r],INPUT);
    pinMode(colunas[20-4*r],INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Diagonal_Cruzando(){
  int j;
  for (j = 0;j<5;j++){
    digitalWrite (andares[j], HIGH);
    pinMode (andares[j], OUTPUT);
    digitalWrite (colunas[0+5*j], LOW);
    digitalWrite (colunas[1+5*j], LOW);
    digitalWrite (colunas[2+5*j], LOW);
    digitalWrite (colunas[3+5*j], LOW);
    digitalWrite (colunas[4+5*j], LOW);
    pinMode (colunas[0+5*j], OUTPUT);
    pinMode (colunas[1+5*j], OUTPUT);
    pinMode (colunas[2+5*j], OUTPUT);
    pinMode (colunas[3+5*j], OUTPUT);
    pinMode (colunas[4+5*j], OUTPUT);
    delay (tempo); 
    pinMode (andares[j], INPUT);
    pinMode (colunas[0+5*j], INPUT);
    pinMode (colunas[1+5*j], INPUT);
    pinMode (colunas[2+5*j], INPUT);
    pinMode (colunas[3+5*j], INPUT);
    pinMode (colunas[4+5*j], INPUT);
  }
  for (j=4;j>=0;j--){
    digitalWrite (andares[4], HIGH);
    pinMode (andares[4], OUTPUT);    
    digitalWrite (colunas[0+5*j], LOW);
    digitalWrite (colunas[1+5*j], LOW);
    digitalWrite (colunas[2+5*j], LOW);
    digitalWrite (colunas[3+5*j], LOW);
    digitalWrite (colunas[4+5*j], LOW);
    pinMode (colunas[0+5*j], OUTPUT);
    pinMode (colunas[1+5*j], OUTPUT);
    pinMode (colunas[2+5*j], OUTPUT);
    pinMode (colunas[3+5*j], OUTPUT);
    pinMode (colunas[4+5*j], OUTPUT);
    delay (tempo); 
    pinMode (andares[4], INPUT);
    pinMode (colunas[0+5*j], INPUT);
    pinMode (colunas[1+5*j], INPUT);
    pinMode (colunas[2+5*j], INPUT);
    pinMode (colunas[3+5*j], INPUT);
    pinMode (colunas[4+5*j], INPUT);
  }
  for (j = 4;j>=0;j--){
    digitalWrite (andares[j], HIGH);
    pinMode (andares[j], OUTPUT);
    digitalWrite (colunas[20-5*j], LOW);
    digitalWrite (colunas[21-5*j], LOW);
    digitalWrite (colunas[22-5*j], LOW);
    digitalWrite (colunas[23-5*j], LOW);
    digitalWrite (colunas[24-5*j], LOW);
    pinMode (colunas[20-5*j], OUTPUT);
    pinMode (colunas[21-5*j], OUTPUT);
    pinMode (colunas[22-5*j], OUTPUT);
    pinMode (colunas[23-5*j], OUTPUT);
    pinMode (colunas[24-5*j], OUTPUT);

    delay (tempo); 
    pinMode (andares[j], INPUT);
    pinMode (colunas[24-5*j], INPUT);
    pinMode (colunas[23-5*j], INPUT);
    pinMode (colunas[22-5*j], INPUT);
    pinMode (colunas[21-5*j], INPUT);
    pinMode (colunas[20-5*j], INPUT);
  }
  for (j=0;j<5;j++){
    digitalWrite (andares[0], HIGH);
    pinMode (andares[0], OUTPUT);    
    digitalWrite (colunas[20-5*j], LOW);
    digitalWrite (colunas[21-5*j], LOW);
    digitalWrite (colunas[22-5*j], LOW);
    digitalWrite (colunas[23-5*j], LOW);
    digitalWrite (colunas[24-5*j], LOW);
    pinMode (colunas[20-5*j], OUTPUT);
    pinMode (colunas[21-5*j], OUTPUT);
    pinMode (colunas[22-5*j], OUTPUT);
    pinMode (colunas[23-5*j], OUTPUT);
    pinMode (colunas[24-5*j], OUTPUT);

    delay (tempo); 
    pinMode (andares[4], INPUT);
    pinMode (colunas[24-5*j], INPUT);
    pinMode (colunas[23-5*j], INPUT);
    pinMode (colunas[22-5*j], INPUT);
    pinMode (colunas[21-5*j], INPUT);
    pinMode (colunas[20-5*j], INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Espiral_Andar(){
  int i,j,k,l,m,n,o,p,q;
  for(q=0; q<5; q++){
    digitalWrite (andares[q], HIGH);
    pinMode (andares[q], OUTPUT);
    if(q==0||q==2||q==4){
      for(i = 0; i < 4; i++){
        digitalWrite (colunas[i], LOW);
        pinMode (colunas[i], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[i], INPUT);
      }
      for (j = 4;j < 25; j=j+5){
        digitalWrite (colunas[j], LOW);
        pinMode (colunas[j], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[j], INPUT);   
      }
      for (k = 23;k > 20; k--){
          digitalWrite (colunas[k], LOW);
          pinMode (colunas[k], OUTPUT);// ativa os GND
            delay (tempo); 
          pinMode (colunas[k], INPUT);   
        }
      for (l = 20;l > 1; l=l-5){
        digitalWrite (colunas[l], LOW);
        pinMode (colunas[l], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[l], INPUT);   
      }
      for (m = 6;m < 8; m++){
        digitalWrite (colunas[m], LOW);
        pinMode (colunas[m], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[m], INPUT);   
      }
      for (n = 8;n < 18; n=n+5){
        digitalWrite (colunas[n], LOW);
        pinMode (colunas[n], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[n], INPUT);   
      }
      for (o = 18;o > 15; o--){
        digitalWrite (colunas[o], LOW);
        pinMode (colunas[o], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[o], INPUT);   
      }
      for (p = 11;p < 13; p++){
        digitalWrite (colunas[p], LOW);
        pinMode (colunas[p], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[p], INPUT);   
      }
    }
    else if(q==1||q==3){
      for (p = 12;p > 10; p--){
        digitalWrite (colunas[p], LOW);
        pinMode (colunas[p], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[p], INPUT);   
      }
      for (o = 16;o < 18; o++){
        digitalWrite (colunas[o], LOW);
        pinMode (colunas[o], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[o], INPUT);   
      }
      for (n = 18;n > 7; n=n-5){
        digitalWrite (colunas[n], LOW);
        pinMode (colunas[n], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[n], INPUT);   
      }
      for (m = 7;m > 5; m--){
        digitalWrite (colunas[m], LOW);
        pinMode (colunas[m], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[m], INPUT);   
      }
      for (l = 5;l < 21; l=l+5){
        digitalWrite (colunas[l], LOW);
        pinMode (colunas[l], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[l], INPUT);   
      }
      for (k = 21;k < 24; k++){
        digitalWrite (colunas[k], LOW);
        pinMode (colunas[k], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[k], INPUT);   
      }
      for (j = 24;j > 5; j=j-5){
        digitalWrite (colunas[j], LOW);
        pinMode (colunas[j], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[j], INPUT);   
      }
      for(i = 4; i >= 0; i--){
        digitalWrite (colunas[i], LOW);
        pinMode (colunas[i], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[i], INPUT);
      }
    }
  digitalWrite(andares[q],INPUT);
  }
  for(q=4; q>=0; q--){
    digitalWrite (andares[q], HIGH);
    pinMode (andares[q], OUTPUT);
    if(q==1||q==3){
      for(i = 0; i < 4; i++){
        digitalWrite (colunas[i], LOW);
        pinMode (colunas[i], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[i], INPUT);
      }
      for (j = 4;j < 25; j=j+5){
        digitalWrite (colunas[j], LOW);
        pinMode (colunas[j], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[j], INPUT);   
      }
      for (k = 23;k > 20; k--){
          digitalWrite (colunas[k], LOW);
          pinMode (colunas[k], OUTPUT);// ativa os GND
            delay (tempo); 
          pinMode (colunas[k], INPUT);   
        }
      for (l = 20;l > 1; l=l-5){
        digitalWrite (colunas[l], LOW);
        pinMode (colunas[l], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[l], INPUT);   
      }
      for (m = 6;m < 8; m++){
        digitalWrite (colunas[m], LOW);
        pinMode (colunas[m], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[m], INPUT);   
      }
      for (n = 8;n < 18; n=n+5){
        digitalWrite (colunas[n], LOW);
        pinMode (colunas[n], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[n], INPUT);   
      }
      for (o = 18;o > 15; o--){
        digitalWrite (colunas[o], LOW);
        pinMode (colunas[o], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[o], INPUT);   
      }
      for (p = 11;p < 13; p++){
        digitalWrite (colunas[p], LOW);
        pinMode (colunas[p], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[p], INPUT);   
      }
    }
    else if(q==0||q==2||q==4){
      for (p = 12;p > 10; p--){
        digitalWrite (colunas[p], LOW);
        pinMode (colunas[p], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[p], INPUT);   
      }
      for (o = 16;o < 18; o++){
        digitalWrite (colunas[o], LOW);
        pinMode (colunas[o], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[o], INPUT);   
      }
      for (n = 18;n > 7; n=n-5){
        digitalWrite (colunas[n], LOW);
        pinMode (colunas[n], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[n], INPUT);   
      }
      for (m = 7;m > 5; m--){
        digitalWrite (colunas[m], LOW);
        pinMode (colunas[m], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[m], INPUT);   
      }
      for (l = 5;l < 21; l=l+5){
        digitalWrite (colunas[l], LOW);
        pinMode (colunas[l], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[l], INPUT);   
      }
      for (k = 21;k < 24; k++){
        digitalWrite (colunas[k], LOW);
        pinMode (colunas[k], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[k], INPUT);   
      }
      for (j = 24;j > 5; j=j-5){
        digitalWrite (colunas[j], LOW);
        pinMode (colunas[j], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[j], INPUT);   
      }
      for(i = 4; i >= 0; i--){
        digitalWrite (colunas[i], LOW);
        pinMode (colunas[i], OUTPUT);// ativa os GND
          delay (tempo); 
        pinMode (colunas[i], INPUT);
      }
    }
  digitalWrite(andares[q],INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Espiral_Coluna_Entrando(){
  int i,j,k,l,m,n,o,p;
  digitalWrite (andares[0], HIGH);
  digitalWrite (andares[1], HIGH);
  digitalWrite (andares[2], HIGH);
  digitalWrite (andares[3], HIGH);
  digitalWrite (andares[4], HIGH);

  pinMode (andares[0], OUTPUT);
  pinMode (andares[1], OUTPUT);
  pinMode (andares[2], OUTPUT);
  pinMode (andares[3], OUTPUT);
  pinMode (andares[4], OUTPUT);

  for(i = 0; i < 4; i++){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[i], INPUT);
  }
  for (j = 4;j < 25; j=j+5){
    digitalWrite (colunas[j], LOW);
    pinMode (colunas[j], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[j], INPUT);   
  }
for (k = 23;k > 20; k--){
    digitalWrite (colunas[k], LOW);
    pinMode (colunas[k], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[k], INPUT);   
  }
  for (l = 20;l > 1; l=l-5){
    digitalWrite (colunas[l], LOW);
    pinMode (colunas[l], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[l], INPUT);   
  }
  for (m = 6;m < 8; m++){
    digitalWrite (colunas[m], LOW);
    pinMode (colunas[m], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[m], INPUT);   
  }
  for (n = 8;n < 18; n=n+5){
    digitalWrite (colunas[n], LOW);
    pinMode (colunas[n], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[n], INPUT);   
  }
  for (o = 18;o > 15; o--){
    digitalWrite (colunas[o], LOW);
    pinMode (colunas[o], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[o], INPUT);   
  }
  for (p = 11;p < 13; p++){
    digitalWrite (colunas[p], LOW);
    pinMode (colunas[p], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[p], INPUT);   
  }
  for(i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
  }
}

void Espiral_Coluna_Entrando_Saindo(){
  int i,j,k,l,m,n,o,p;
  digitalWrite (andares[0], HIGH);
  digitalWrite (andares[1], HIGH);
  digitalWrite (andares[2], HIGH);
  digitalWrite (andares[3], HIGH);
  digitalWrite (andares[4], HIGH);

  pinMode (andares[0], OUTPUT);
  pinMode (andares[1], OUTPUT);
  pinMode (andares[2], OUTPUT);
  pinMode (andares[3], OUTPUT);
  pinMode (andares[4], OUTPUT);

  for(i = 0; i < 4; i++){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[i], INPUT);
  }
  for (j = 4;j < 25; j=j+5){
    digitalWrite (colunas[j], LOW);
    pinMode (colunas[j], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[j], INPUT);   
  }
for (k = 23;k > 20; k--){
    digitalWrite (colunas[k], LOW);
    pinMode (colunas[k], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[k], INPUT);   
  }
  for (l = 20;l > 1; l=l-5){
    digitalWrite (colunas[l], LOW);
    pinMode (colunas[l], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[l], INPUT);   
  }
  for (m = 6;m < 8; m++){
    digitalWrite (colunas[m], LOW);
    pinMode (colunas[m], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[m], INPUT);   
  }
  for (n = 8;n < 18; n=n+5){
    digitalWrite (colunas[n], LOW);
    pinMode (colunas[n], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[n], INPUT);   
  }
  for (o = 18;o > 15; o--){
    digitalWrite (colunas[o], LOW);
    pinMode (colunas[o], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[o], INPUT);   
  }
  for (p = 11;p < 13; p++){
    digitalWrite (colunas[p], LOW);
    pinMode (colunas[p], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[p], INPUT);   
  }
  for (p = 12;p > 10; p--){
    digitalWrite (colunas[p], LOW);
    pinMode (colunas[p], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[p], INPUT);   
  }
  for (o = 16;o < 18; o++){
    digitalWrite (colunas[o], LOW);
    pinMode (colunas[o], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[o], INPUT);   
  }
  for (n = 18;n > 7; n=n-5){
    digitalWrite (colunas[n], LOW);
    pinMode (colunas[n], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[n], INPUT);   
  }
  for (m = 7;m > 5; m--){
    digitalWrite (colunas[m], LOW);
    pinMode (colunas[m], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[m], INPUT);   
  }
  for (l = 5;l < 21; l=l+5){
    digitalWrite (colunas[l], LOW);
    pinMode (colunas[l], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[l], INPUT);   
  }
  for (k = 21;k < 24; k++){
    digitalWrite (colunas[k], LOW);
    pinMode (colunas[k], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[k], INPUT);   
  }
  for (j = 24;j > 5; j=j-5){
    digitalWrite (colunas[j], LOW);
    pinMode (colunas[j], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[j], INPUT);   
  }
  for(i = 4; i >= 0; i--){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[i], INPUT);
  }
  for(i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
  }
}

void Espiral_Coluna_Saindo(){
  int i,j,k,l,m,n,o,p;
  digitalWrite (andares[0], HIGH);
  digitalWrite (andares[1], HIGH);
  digitalWrite (andares[2], HIGH);
  digitalWrite (andares[3], HIGH);
  digitalWrite (andares[4], HIGH);

  pinMode (andares[0], OUTPUT);
  pinMode (andares[1], OUTPUT);
  pinMode (andares[2], OUTPUT);
  pinMode (andares[3], OUTPUT);
  pinMode (andares[4], OUTPUT);
  
  for (p = 12;p > 10; p--){
    digitalWrite (colunas[p], LOW);
    pinMode (colunas[p], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[p], INPUT);   
  }
  for (o = 16;o < 18; o++){
    digitalWrite (colunas[o], LOW);
    pinMode (colunas[o], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[o], INPUT);   
  }
  for (n = 18;n > 7; n=n-5){
    digitalWrite (colunas[n], LOW);
    pinMode (colunas[n], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[n], INPUT);   
  }
  for (m = 7;m > 5; m--){
    digitalWrite (colunas[m], LOW);
    pinMode (colunas[m], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[m], INPUT);   
  }
  for (l = 5;l < 21; l=l+5){
    digitalWrite (colunas[l], LOW);
    pinMode (colunas[l], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[l], INPUT);   
  }
  for (k = 21;k < 24; k++){
    digitalWrite (colunas[k], LOW);
    pinMode (colunas[k], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[k], INPUT);   
  }
  for (j = 24;j > 5; j=j-5){
    digitalWrite (colunas[j], LOW);
    pinMode (colunas[j], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[j], INPUT);   
  }
  for(i = 4; i >= 0; i--){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
      delay (tempo); 
    pinMode (colunas[i], INPUT);
  }
  for(i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
  }
}

void Explosao(){
  int i;
  int r;
  for (r = 0; r < tempo; r++){
    digitalWrite (colunas[12], LOW);
    pinMode (colunas[12], OUTPUT);
    digitalWrite (andares[2], HIGH);
    pinMode (andares[2], OUTPUT);
    delay (10); 
    pinMode (andares[2], INPUT);
    pinMode (colunas[12], INPUT);//desativa o andar
  }
  for(i = 0; i < 25; i++){
    pinMode (colunas[i], INPUT);// ativa os GND
  }
  for (r = 0; r < tempo; r++){
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==2||j==3){
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[7], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[11], OUTPUT);
        pinMode (colunas[12], OUTPUT);
        pinMode (colunas[13], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[17], OUTPUT);
        pinMode (colunas[18], OUTPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[12], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
      }
    }
  }
    for(i = 0; i < 25; i++){
      digitalWrite (colunas[i], LOW);
      pinMode (colunas[i], OUTPUT);// ativa os GND
  }
    for (r = 0; r < tempo; r++){
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==2||j==3){
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[12], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[7], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[11], OUTPUT);
        pinMode (colunas[12], OUTPUT);
        pinMode (colunas[13], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[17], OUTPUT);
        pinMode (colunas[18], OUTPUT);
      }
      else{
        digitalWrite (andares[j], HIGH);
        pinMode (andares[j], OUTPUT);
        delay (4); 
        pinMode (andares[j], INPUT);//desativa o andar        
      }
    }
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Explosao_Aresta(){
  int i;
  int r;
  for (r = 0; r < tempo; r++){//meio
    digitalWrite (colunas[12], LOW);
    pinMode (colunas[12], OUTPUT);
    digitalWrite (andares[2], HIGH);
    pinMode (andares[2], OUTPUT);
    delay (10); 
    pinMode (andares[2], INPUT);
    pinMode (colunas[12], INPUT);//desativa o andar
  }
  for(i = 0; i < 25; i++){
    pinMode (colunas[i], INPUT);// ativa os GND
  }
  for (r = 0; r < tempo; r++){//segunda camada
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==3){
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[7], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[11], OUTPUT);
        pinMode (colunas[13], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[17], OUTPUT);
        pinMode (colunas[18], OUTPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
      }
      else if(j==2){
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[18], OUTPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);
        pinMode (colunas[6], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[18], INPUT);      
        }
    }
  }
    for(i = 0; i < 25; i++){//casca
      pinMode (colunas[i], INPUT);
  }
    for (r = 0; r < tempo; r++){
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==2||j==3){
        pinMode (colunas[0], OUTPUT);
        pinMode (colunas[4], OUTPUT);
        pinMode (colunas[20], OUTPUT);
        pinMode (colunas[24], OUTPUT);
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[12], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
      }
      else if (j==0||j==4){
        for(i=0;i<25;i++){
          digitalWrite (colunas[j], LOW);
          pinMode (colunas[i], OUTPUT);
        }
        digitalWrite (andares[j], HIGH);
        pinMode (andares[j], OUTPUT);
        delay (4); 
        pinMode (andares[j], INPUT);//desativa o andar        
      }
        for(i=0;i<25;i++){
          pinMode (colunas[i], INPUT);
        }
    }
  }
for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Implosao(){
  int i;
  for(i = 0; i < 25; i++){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
  }
  int r;
  for (r = 0; r < tempo; r++){
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==2||j==3){
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[12], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[7], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[11], OUTPUT);
        pinMode (colunas[12], OUTPUT);
        pinMode (colunas[13], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[17], OUTPUT);
        pinMode (colunas[18], OUTPUT);
      }
      else{
        digitalWrite (andares[j], HIGH);
        pinMode (andares[j], OUTPUT);
        delay (4); 
        pinMode (andares[j], INPUT);//desativa o andar        
      }
    }
  }
  for(i = 0; i < 25; i++){
    pinMode (colunas[i], INPUT);// ativa os GND
  }
  for (r = 0; r < tempo; r++){
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==2||j==3){
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[7], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[11], OUTPUT);
        pinMode (colunas[12], OUTPUT);
        pinMode (colunas[13], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[17], OUTPUT);
        pinMode (colunas[18], OUTPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[12], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
      }
    }
  }
  for(i = 0; i < 25; i++){
    pinMode (colunas[i], INPUT);// ativa os GND
  }
  for (r = 0; r < tempo; r++){
      pinMode (colunas[12], OUTPUT);
        digitalWrite (andares[2], HIGH);
        pinMode (andares[2], OUTPUT);
        delay (10); 
        pinMode (andares[2], INPUT);//desativa o andar
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Implosao_Aresta(){
  int i;
  int r;
  for (r = 0; r < tempo; r++){//fora
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==2||j==3){
        pinMode (colunas[0], OUTPUT);
        pinMode (colunas[4], OUTPUT);
        pinMode (colunas[20], OUTPUT);
        pinMode (colunas[24], OUTPUT);
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[12], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
      }
      else if (j==0||j==4){
        for(i=0;i<25;i++){
          digitalWrite (colunas[j], LOW);
          pinMode (colunas[i], OUTPUT);
        }
        digitalWrite (andares[j], HIGH);
        pinMode (andares[j], OUTPUT);
        delay (4); 
        pinMode (andares[j], INPUT);//desativa o andar        
      }
        for(i=0;i<25;i++){
          pinMode (colunas[i], INPUT);
        }
    }
  }
  for(i = 0; i < 25; i++){
    pinMode (colunas[i], INPUT);// ativa os GND
  }
  for (r = 0; r < tempo; r++){//segunda camada
    int j;
    for(j = 0; j < 5; j++){
      if(j==1||j==3){
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[7], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[11], OUTPUT);
        pinMode (colunas[13], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[17], OUTPUT);
        pinMode (colunas[18], OUTPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);//desativa o andar
        pinMode (colunas[6], INPUT);
        pinMode (colunas[7], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[11], INPUT);
        pinMode (colunas[13], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[17], INPUT);
        pinMode (colunas[18], INPUT);
      }
      else if(j==2){
        pinMode (colunas[6], OUTPUT);
        pinMode (colunas[8], OUTPUT);
        pinMode (colunas[16], OUTPUT);
        pinMode (colunas[18], OUTPUT);
          digitalWrite (andares[j], HIGH);
          pinMode (andares[j], OUTPUT);
          delay (4); 
          pinMode (andares[j], INPUT);
        pinMode (colunas[6], INPUT);
        pinMode (colunas[8], INPUT);
        pinMode (colunas[16], INPUT);
        pinMode (colunas[18], INPUT);      
        }
    }
  }
    for(i = 0; i < 25; i++){
      pinMode (colunas[i], INPUT);
  }
    
  for (r = 0; r < tempo; r++){//meio
    digitalWrite (colunas[12], LOW);
    pinMode (colunas[12], OUTPUT);
    digitalWrite (andares[2], HIGH);
    pinMode (andares[2], OUTPUT);
    delay (10); 
    pinMode (andares[2], INPUT);
    pinMode (colunas[12], INPUT);//desativa o andar
  }
   for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Linha_Sobe_Desce(){
  int i,j;
  for(j=0;j<5;j++){
    digitalWrite (colunas[0+5*j], LOW);
    digitalWrite (colunas[1+5*j], LOW);
    digitalWrite (colunas[2+5*j], LOW);
    digitalWrite (colunas[3+5*j], LOW);
    digitalWrite (colunas[4+5*j], LOW);
    pinMode (colunas[0+5*j], OUTPUT);
    pinMode (colunas[1+5*j], OUTPUT);
    pinMode (colunas[2+5*j], OUTPUT);
    pinMode (colunas[3+5*j], OUTPUT);
    pinMode (colunas[4+5*j], OUTPUT);
    if(j==0||j==2||j==4){
      for(i=4;i>=0;i--){
        digitalWrite (andares[i], HIGH);
        pinMode (andares[i], OUTPUT);
        delay(tempo);
        pinMode (andares[i], INPUT);
      }
     }
    else if(j==1||j==3){
      for(i=0;i<5;i++){
        digitalWrite (andares[i], HIGH);
        pinMode (andares[i], OUTPUT);
        delay(tempo);
        pinMode (andares[i], INPUT);
      }
    }
    pinMode (colunas[0+5*j], INPUT);
    pinMode (colunas[1+5*j], INPUT);
    pinMode (colunas[2+5*j], INPUT);
    pinMode (colunas[3+5*j], INPUT);
    pinMode (colunas[4+5*j], INPUT);    
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Linha_Sobe_Desce_Vai_Volta(){
  int i,j;
  for(j=0;j<5;j++){
    digitalWrite (colunas[0+5*j], LOW);
    digitalWrite (colunas[1+5*j], LOW);
    digitalWrite (colunas[2+5*j], LOW);
    digitalWrite (colunas[3+5*j], LOW);
    digitalWrite (colunas[4+5*j], LOW);
    pinMode (colunas[0+5*j], OUTPUT);
    pinMode (colunas[1+5*j], OUTPUT);
    pinMode (colunas[2+5*j], OUTPUT);
    pinMode (colunas[3+5*j], OUTPUT);
    pinMode (colunas[4+5*j], OUTPUT);
    if(j==0||j==2||j==4){
      for(i=4;i>=0;i--){
        digitalWrite (andares[i], HIGH);
        pinMode (andares[i], OUTPUT);
        delay(tempo);
        pinMode (andares[i], INPUT);
      }
     }
    else if(j==1||j==3){
      for(i=0;i<5;i++){
        digitalWrite (andares[i], HIGH);
        pinMode (andares[i], OUTPUT);
        delay(tempo);
        pinMode (andares[i], INPUT);
      }
    }
    pinMode (colunas[0+5*j], INPUT);
    pinMode (colunas[1+5*j], INPUT);
    pinMode (colunas[2+5*j], INPUT);
    pinMode (colunas[3+5*j], INPUT);
    pinMode (colunas[4+5*j], INPUT);    
  }
  for(j=5;j>=0;j--){
    digitalWrite (colunas[4+5*j], LOW);
    digitalWrite (colunas[3+5*j], LOW);
    digitalWrite (colunas[2+5*j], LOW);
    digitalWrite (colunas[1+5*j], LOW);
    digitalWrite (colunas[0+5*j], LOW);
    pinMode (colunas[4+5*j], OUTPUT);
    pinMode (colunas[3+5*j], OUTPUT);
    pinMode (colunas[2+5*j], OUTPUT);
    pinMode (colunas[1+5*j], OUTPUT);
    pinMode (colunas[0+5*j], OUTPUT);
    if(j==1||j==3){
      for(i=4;i>=0;i--){
        digitalWrite (andares[i], HIGH);
        pinMode (andares[i], OUTPUT);
        delay(tempo);
        pinMode (andares[i], INPUT);
      }
     }
    else if(j==0||j==2||j==4){
      for(i=0;i<5;i++){
        digitalWrite (andares[i], HIGH);
        pinMode (andares[i], OUTPUT);
        delay(tempo);
        pinMode (andares[i], INPUT);
      }
    }
    pinMode (colunas[4+5*j], INPUT);
    pinMode (colunas[3+5*j], INPUT);
    pinMode (colunas[2+5*j], INPUT);
    pinMode (colunas[1+5*j], INPUT);
    pinMode (colunas[0+5*j], INPUT);   
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Andar(){
  int i;
  for(i = 0; i < 25; i++){
    digitalWrite (colunas[i], LOW);
    pinMode (colunas[i], OUTPUT);// ativa os GND
  }
  int j;
    for(j = 0; j < 5; j++){
        digitalWrite (andares[j], HIGH);
        pinMode (andares[j], OUTPUT);
        delay (tempo); 
        pinMode (andares[j], INPUT);
      }
  for(i = 0; i < 25; i++){
    pinMode (colunas[i], INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
}

void Andar_Girando() {
  int i,j;
  for (j = 0;j<10;j++){
    digitalWrite (andares[j/2], HIGH);
    pinMode (andares[j/2], OUTPUT);
    for(i=0;i<25;i=i+6){
      digitalWrite (colunas[i],LOW);
      pinMode (colunas[i],OUTPUT);
    }    
    
      delay(tempo);
      
    for(i=0;i<25;i=i+6){
      pinMode (colunas[i],INPUT);
    }       
    for(i=2;i<23;i=i+5){
      digitalWrite (colunas[i],LOW);
      pinMode (colunas[i],OUTPUT);
    }
    
      delay(tempo);
      
    for(i=2;i<23;i=i+5){
      pinMode (colunas[i],INPUT);
    }   
      
    for(i=4;i<21;i=i+4){
      digitalWrite (colunas[i],LOW);
      pinMode (colunas[i],OUTPUT);
    }
    
      delay(tempo);
      
    for(i=4;i<21;i=i+4){
      pinMode (colunas[i],INPUT);
    }  
     
    for(i=10;i<15;i++){
      digitalWrite (colunas[i],LOW);
      pinMode (colunas[i],OUTPUT);
    }
    
      delay(tempo);
      
    for(i=10;i<15;i++){
      pinMode (colunas[i],INPUT);
    }   
    pinMode (andares[j/2], INPUT);
  }
  for (int i=0;i<25;i++){
    pinMode (colunas[i],INPUT);
    pinMode (andares[i],INPUT);
 }
} 
void setup() {
  Serial.begin(9600);
  Serial.print("Qual animação você deseja?");
}
void loop() {
  char a = '#';
  a = Serial.read();
  switch(a){
    case('0'):{
      Coluna_1();
      break;
    }
    case('1'):{
      Coluna_2();
      break;
    }
    case('2'):{
      Ampulheta();
      break;
    }
    case('3'):{
      Chuva();
      break;
    }
    case('4'):{
      Colunas_Aleatorias();
      break;
    }
    case('5'):{
      Colunas_Girando();
      break;
    }
    case('6'):{
      Full_Aleatorio();
      break;
    }
    case('7'):{
      Diagonais();
      break;
    }
    case('8'):{
      Diagonal_Cruzando();
      break;
    }
    case('9'):{
      Espiral_Andar();
      break;
    }
    case('a'):{
      Espiral_Coluna_Entrando();
      break;
    }
    case('b'):{
      Espiral_Coluna_Entrando_Saindo();
      break;
    }
    case('c'):{
      Espiral_Coluna_Saindo();
      break;
    }
    case('d'):{
      Explosao();
      break;
    }
    case('e'):{
      Explosao_Aresta();
      break;
    }
    case('f'):{
      Implosao();
      break;
    }
    case('g'):{
      Implosao_Aresta();
      break;
    }
    case('h'):{
      Linha_Sobe_Desce();
      break;
    }
    case('i'):{
      Linha_Sobe_Desce_Vai_Volta();
      break;
    }
    case('j'):{
      Andar();
      break;
    }
    case('k'):{
      Andar_Girando();
      break;
    }
  }
}
