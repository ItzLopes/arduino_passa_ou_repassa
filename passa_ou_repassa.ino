const int redButton = 13;
const int redLed = 12;
const int yellowButton = 11;
const int yellowLed = 10;
const int lockTime = 5000;

bool gameLocked = false;

unsigned long startTime = 0;

void setup() {
  pinMode(redButton, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowButton, INPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop() {
  if (!gameLocked) {
    if (digitalRead(redButton) == HIGH) {
      digitalWrite(redLed, HIGH);
      gameLocked = true;
      startTime = millis();
    }
    else if (digitalRead(yellowButton) == HIGH) {
      digitalWrite(yellowLed, HIGH);
      gameLocked = true;
      startTime = millis();
    }
  }
  else if (millis() - startTime >= lockTime) {
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    gameLocked = false;
  }
}