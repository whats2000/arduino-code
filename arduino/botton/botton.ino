void setup()
{
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(7) == 0) {
    delay(20); // Wait for 20 millisecond(s)
    if (digitalRead(7) == 0) {
      digitalWrite(11, LOW);
    } else {
      digitalWrite(11, HIGH);
    }
  }
}
