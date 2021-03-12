int redpin = 11; //紅色LED腳位為11
int bluepin = 10; //藍色LED腳位為10
int greenpin = 9; //綠色LED腳位為9
int val=0;
void setup () {
pinMode (redpin, OUTPUT);
pinMode (bluepin, OUTPUT);
pinMode (greenpin, OUTPUT);
Serial.begin (9600);
}

void loop () {
for (val=0; val<255; val++)
{
analogWrite (redpin, val); // LED紅慢慢變亮
delay (10);
}
analogWrite (redpin, 0); // LED紅變暗

for (val=0; val<255; val++)
{
analogWrite (bluepin, val);
delay (10);
}
analogWrite (bluepin, 0);

for (val=0; val<255; val++)
{
analogWrite (greenpin, val);
delay (10);
}
analogWrite (greenpin, 0);
}
