void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(2, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, HIGH);
}
