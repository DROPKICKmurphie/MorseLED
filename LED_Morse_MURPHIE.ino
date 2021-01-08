int LED1 = 12;
int button = 2;
int buttonValue = 0;
int dot = 300;
int gap = 500;
int dash = 1500;
int endOfWord = 3500;

void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {

  buttonValue = digitalRead(button);
  if (buttonValue == HIGH) {
    digitalWrite(LED1, HIGH);
    delay(dash);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dash);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dash);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dash);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dash);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dash);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
       digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(gap);
    digitalWrite(LED1, HIGH);
    delay(dot);
      digitalWrite(LED1, LOW);
      delay(endOfWord);
  }else{
    digitalWrite(LED1, LOW);
  }

}
