int led = 2;
const int tmp = A0;
const int echo = 3;
const int thig = 4;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(thig, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int vol = analogRead(tmp);
  float voltaje = vol * (5.0 / 1023.0);
  float temp = (voltaje - 0.5) * 100;

 
  float cm = -1;
  if (temp < 40) {
    digitalWrite(thig, LOW);
    delayMicroseconds(2);
    digitalWrite(thig, HIGH);
    delayMicroseconds(10);
    digitalWrite(thig, LOW);
    long dist = pulseIn(echo, HIGH);
    cm = dist * 0.034 / 2;
  }

  
  if (temp > 30) {
    digitalWrite(led, HIGH);  
  } else {
    digitalWrite(led, LOW);    
  }


  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C, ");

  if (temp < 40) {

    Serial.print("Distancia: ");
    Serial.print(cm);
    Serial.println(" cm");
  } else {

    Serial.println("Distancia no valida (Temp mayor o igual a 40 C)");
  }

  delay(1000);
}
