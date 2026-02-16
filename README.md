# ESP32C3-SMART-LIGHT
This is software for a very smart led controller voice control, built-in timers and dim function. It is meant for 5v led lights, e.g. a ledstrip. You can apply it in many cases.
For instance, you can wind the strip around a hollow plastic pipe to create a bulb that you can mount in a lantern or armature.
This way you can have a very intelligent and low-energy garden light that switches on about sunset and goes out at sunrise. 

Example of an application: I have a ledstip under a piece of furniture in my hallway. The light switches on 10 minutes after sunset, at a high level. After midnight another timer switches it to a low level (and energy) nightlight. 

The features it has are:
- easy to connect to wifi via espressif rainmaker app
- can be controlled via google home (voice), webui, timers, http and optional button.
- dimmable by moving a slider in the webui, google home (voice} or via button(optional)
- 4 timers with advanced options (a.o. own dim level)
- soft switch on and off
- simple hardware
- it has a journal that logs all kinds of events
 
  
## download
[ESP32-C3-DIMMER-v0_3](https://github.com/patience4711/ESP32C3-SMART-LIGHT/blob/main/ESP32_C3_DIMMER_v0_3.ino.bin)


## hardware
- esp32c3 super mini
- a mosfet module
- 3mm wide ledstrip 5v
- a 5v power supply

![frontpage](https://github.com/user-attachments/assets/ffd2b610-0207-406d-a784-8bd20329a7b8)
  
