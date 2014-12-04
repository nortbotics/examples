/*
# Last Edited by Joe Norton
# www.NORTBOTICS.com
#
*/
#define up_button	8
#define down_button	A1
#define left_button	9
#define right_button	12

#define stick_button	A0
#define level_stick	A2
#define vertical_stick	A3

void setup () 
{
	Serial.begin (9600);

	pinMode (left_button, INPUT);
	pinMode (right_button, INPUT);
	pinMode (up_button, INPUT);
	pinMode (down_button, INPUT);

	pinMode (stick_button  , INPUT);
	pinMode (level_stick   , INPUT);
	pinMode (vertical_stick, INPUT);
}


void loop () {
	int left_state = digitalRead (left_button);
	int right_state = digitalRead (right_button);
	int up_state = digitalRead (up_button);
	int down_state = digitalRead (down_button);

	int stick_state = digitalRead (stick_button);

	int level_value = analogRead (level_stick);
	int vertical_value = analogRead (vertical_stick);

	Serial.print (up_state);
	Serial.print (" ");
	Serial.print (down_state);
	Serial.print (" ");
	Serial.print (left_state);
	Serial.print (" ");
	Serial.print (right_state);
	Serial.print (" ");
	Serial.print (vertical_value);
	Serial.print (" ");
	Serial.print (level_value);
	Serial.print (" ");
	Serial.println (stick_state);
	delay (500);
}
