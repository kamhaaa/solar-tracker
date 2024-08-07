int i;
int ledPin = 3;
int buttonPin = 2;
int buttonPress = 0;

void setup(){
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  buttonPress = digitalRead(buttonPin);

  if(buttonPress == HIGH){
    analogWrite(ledPin, HIGH);
    tone(buzzer,1000);
  }
  else{
    digitalWrite(ledPin,LOW);
    tone(buzzer,0);
  }
}