const int outF1 = 8;
const int outF2 = 9;
const int outS1 = 10;
const int outS2 = 11;

const int inF1 = 4;
const int inF2 = 5;
const int inS1 = 6;
const int inS2 = 7;

void setup()
{
	pinMode(inF1, INPUT);
	pinMode(inF2, INPUT);
	pinMode(inS1, INPUT);
	pinMode(inS2, INPUT);
	pinMode(outF1, OUTPUT);
	pinMode(outF2, OUTPUT);
	pinMode(outS1, OUTPUT);
	pinMode(outS2, OUTPUT);
}

void loop()
{
	digitalWrite(outF1, HIGH);
	digitalWrite(outF2, HIGH);
	digitalWrite(outS1, HIGH);
	digitalWrite(outS2, HIGH);
}