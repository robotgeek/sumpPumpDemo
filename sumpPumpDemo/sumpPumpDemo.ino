/***********************************************************************************
 * Sump Puomp Activation Demo
 *     ______________
 *    |  _________  |
 * ___| |___      | |
 * |      |       | |
 * |      |       | |
 * |      |      _|_|_
 * |      |      |   |
 * |______|      |___|
 *
 *  This demo will show you how to control a RobotGeek Pumping Station (or any other
 *  motor/pump via relay) based on input from a float switch. This will allow you to
 *  build an automated sump pump, pumping liquid out of a container when the liquid
 *  gets too high
 *
 *  Wiring
 *  Pin 2 - Float Switch
 *  Pin 4 - RobotGeek Pushbutton relay/pumping station 1
 *  Pin 7 - RobotGeek LED 
 *
 *  Control Behavior:
 *    If the float switch is not floating (i.e. empty tank) then turn off the pump and led
 *    If the float switch is floating (i.e. full tank) turn on the pump and LED
 *
 *  External Resources
 *
 ***********************************************************************************/
//define the input/output pins
#define FLOAT_SWITCH_PIN 2
#define PUMP_1_PIN 4
#define LED_PIN 7

//setup runs once
void setup()
{
  //setup input pins for float switch 
  //Too use a bare switch with no external pullup resistor, set the pin mode to INPUT_PULLUP to use internal pull resistors. This will invert the standard high/low behavior
  pinMode(FLOAT_SWITCH_PIN, INPUT_PULLUP);
  
  //setup output pins for relays/pumping station and LED board
  pinMode(PUMP_1_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  
}

//loop() runs indefinitely 
void loop()
{
  //check to see the state of the float switch. These states are assuming the pin is using an internal pullup resistor. 
  // LOW corresdponds to the float switch being at its lowest point (i.e. low water)
  if(digitalRead(FLOAT_SWITCH_PIN) == HIGH)
  {
     digitalWrite(PUMP_1_PIN, HIGH); //turn on the pump
     digitalWrite(LED_PIN, HIGH);    //turn on the LED
  }
  
  //otherwise the float switch is HIGH
  // HIGH corresponds to the float switch being at its higest point (i.e. full water)
  else
  {
     digitalWrite(PUMP_1_PIN, LOW); //turn off the pump
     digitalWrite(LED_PIN, LOW);    //turn off the LED
  }
}
