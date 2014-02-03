```
/***********************************************************************************
 * Aquarium Pump Refil Demo
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
```