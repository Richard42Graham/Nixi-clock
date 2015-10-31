// test code

# A = 3
# B = 4
# C = 5
# D = 6


void setup();
{

pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);

}


void main();
{

while( int I = 0, i < 9, i++)
{

switch(i)
	{
		case 0:
			{
				digitalWrite(A,LOW);
				digitalWrite(B,LOW);
				digitalWrite(C,LOW);
				digitalWrite(D,LOW);
			} break;

		case 1:
			{
				digitalWrite(A,HIGH);
				digitalWrite(B,LOW);
				digitalWrite(C,LOW);
				digtialWrite(D,LOW);
			} break;

		case 2:
			{
				digitalWrite(A,LOW);
				digitalWrite(B,HIGH);
				digtialWrite(C,LOW);
				digitlaWrite(D,LOW);
			} break;

		case 3:
			{
				digitalWrite(A,HIGH);
				digitalWrite(B,HIGH);
				digitalWrite(C,LOW);
				digitalWrite(D,LOW);
			} break;

		case 4:
			{
				digitalWrite(A,LOW);
				digitalWrite(B,LOW);
				digitalWrite(C,HIGH);
				digtialWrite(D,LOW);
			} break;

		case 5:
			{
				digitalWrite(A,HIGH);
				digitalWrite(B,LOW);
				digitalWrite(C,HIGH);
				digitalWrite(D,LOW);
			} break;

		case 6:
			{
				digitalWrite(A,LOW);
				digitalWrite(B,HIGH);
				digitalWrite(C,HIGH);
				digitalWrite(D,LOW);
			} break;

		case 7:
			{
				digitalWrite(A,HIGHT);
				digitalWrite(B,HIGHT);
				digtialWrite(C,HIGH);
				digtialWrite(D,LOW);
			} break;

		case 8:
			{
				digitalWrite(A,LOW);
				digitalWrite(B,LOW);
				digtialWrite(C,LOW);
				digitalWrite(D,LOW);
			} break;

		case 9:
			{
				digitalWrite(A,HIGH);
				digitalWrite(B,LOW);
				digitalWrite(C,LOW);
				digitalWrite(D,HIGH);
			} break;

// are, dont have any controle for the decimal points.

}

delay(1000);

}
