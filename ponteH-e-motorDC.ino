  #define IN1 6
  #define IN2 7
  #define ENA 5
  #define POTENCIOMETRO 0
  
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(POTENCIOMETRO, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int valorPotenciometro = analogRead(POTENCIOMETRO);
  float valorMapeado = map(valorPotenciometro,0,1023,0,255);
  //int velocidade = 0;
  delay(500);
  Serial.println(valorMapeado);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  analogWrite(ENA, 200);
  analogWrite(ENA, 100);
  analogWrite(ENA, 20); 
}
