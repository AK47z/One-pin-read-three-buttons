
void setup()
{
  Serial.begin(9600);
pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
}

void loop(){Serial.available();
            Serial.println(analogRead(A0));
  if(analogRead(A0)==0){digitalWrite(4,1); digitalWrite(3,0);digitalWrite(2,0);}
  else if (analogRead(A0)==512){digitalWrite(2,1); digitalWrite(4,0); digitalWrite(3,0);}
  else if (analogRead(A0)==682){digitalWrite(3,1); digitalWrite(4,0); digitalWrite(2,0);}

}