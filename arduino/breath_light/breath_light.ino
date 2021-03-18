int brightness = 0;

int fadeAmount = 0;

int delayDuration = 0;

void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  fadeAmount = 5;
  delayDuration = 30;
  analogWrite(3, brightness);
  brightness = (brightness + fadeAmount);
  if (brightness <= 0 || brightness >= 225) {
    fadeAmount = (fadeAmount - 1);
  }
  delay(delayDuration); // Wait for delayDuration millisecond(s)
}
