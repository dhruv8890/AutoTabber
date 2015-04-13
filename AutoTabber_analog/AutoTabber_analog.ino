const int outF1 = 8;
const int outF2 = 9;
//const int outS1 = 10;
//const int outS2 = 11;
//
const int inF1 = 0;
const int inF2 = 5;
//const int inS1 = 6;
//const int inS2 = 7;

//int analogPin = 3;
int f1State = 0;
int f2State = 0;

void setup()
{
	//pinMode(inF1, INPUT);
	//pinMode(inF2, INPUT);
	//pinMode(inS1, INPUT);
	//pinMode(inS2, INPUT);
	pinMode(outF1, OUTPUT);
	pinMode(outF2, OUTPUT);
	//pinMode(outS1, OUTPUT);
	//pinMode(outS2, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	f1State = analogRead(inF1);
	Serial.print("f1: ");
	Serial.print(f2State);

	if (f1State < 1000)
	{
		//Serial.println(1);
		digitalWrite(outF1, HIGH);
	}
	else
	{
		//Serial.println(0); 
		digitalWrite(outF1, LOW);
	}

	//delay(250);
	f2State = analogRead(inF2);
	Serial.print("f2: ");
	Serial.println(f2State);

	if (f2State < 1000)
	{
		digitalWrite(outF2, HIGH);
	}
	else
	{
		digitalWrite(outF2, LOW);
	}

}