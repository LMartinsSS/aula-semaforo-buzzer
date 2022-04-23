int ledv1 = 2;
int leda1 = 3;
int ledver1 = 4;
int ledv2 = 5;
int ledver2 = 6;
int botao = 7;
int piezo = 9;
int valor;
int contador;

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT);
}
void loop(){
  valor = digitalRead(botao);
  if(valor == HIGH){
    contador++;
    delay(300);
  }
  
  if(contador == 1){
    tone(piezo, 1500);
     digitalWrite(leda1, LOW);
   digitalWrite(ledv2, LOW);
  digitalWrite(ledv1, HIGH);//vermelho automóveis
  digitalWrite(6, HIGH);//verde pedestres
  }
  
  if(contador == 2){
    noTone(piezo);
     digitalWrite(6, LOW);
    digitalWrite(ledv1, LOW);
   digitalWrite(ledver1, HIGH);
  }
   if(contador == 3){
    digitalWrite(ledver1, LOW);  
   digitalWrite(leda1, HIGH);
   digitalWrite(ledv2, HIGH);
   }
  if(contador ==4){
    contador = 1;
  }
}
