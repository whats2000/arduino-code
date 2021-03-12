int A = 0;

int B = 0;

int C = 0;

int counter;

int counter2;

int counter3;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  A = 255;
  B = 255;
  C = 255;
  for (counter = 0; counter < 256; ++counter) {
    analogWrite(11, A);
    analogWrite(10, 255);
    analogWrite(9, 255);
    A = (A - 1);
    delay(4); // Wait for 4 millisecond(s)
  }
  for (counter2 = 0; counter2 < 256; ++counter2) {
    analogWrite(11, 255);
    analogWrite(10, B);
    analogWrite(9, 255);
    B = (B - 1);
    delay(4); // Wait for 4 millisecond(s)
  }
  for (counter3 = 0; counter3 < 256; ++counter3) {
    analogWrite(11, 255);
    analogWrite(10, 255);
    analogWrite(9, C);
    C = (C - 1);
    delay(4); // Wait for 4 millisecond(s)
  }
}
