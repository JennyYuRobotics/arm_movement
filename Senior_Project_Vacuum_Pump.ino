char serialData;
int pin = 9;
void setup() 
{
 pinMode(pin, OUTPUT);
 Serial.begin(9600);
}

void loop() {
    serialData = Serial.read();    

    if(serialData == '0')
    {
      digitalWrite(pin, HIGH);
    }
    else if(serialData == '1')
    {
      digitalWrite(pin, LOW);
    }
    Serial.println(serialData);
}
