/* what logic should be folowed
we can toggle the light on/ of
when put on we use the last_duty
when put off we make current_duty zero
slider > 0 dimmer_state true else dimmer_state false
*/

void set_dim_level(int level)
{
    level = constrain(level, 0, 100); // level is between 0 and 100
    consoleOut("set_dim_level to " + String(level) );
    //target_duty = (level * LEDC_MAX_DUTY) / 100; // eg when level 60 this becomes 81,91*60 = 4914
    current_duty = level;
    
    if(current_duty > 0) 
    {
        last_duty = current_duty;
        dimmer_state = true;
    } else {
        dimmer_state = false;
    }
    
    //consoleOut("set_dim_level to " + String(current_duty));
   // Update RainMaker
    if (my_device) {
       consoleOut("update to rainmaker"); 
       my_device->updateAndReportParam(ESP_RMAKER_DEF_POWER_NAME, dimmer_state);
       my_device->updateAndReportParam(ESP_RMAKER_DEF_BRIGHTNESS_NAME, (int)current_duty);
    }
        
    if(settings.Mqtt_Format != 0) sendMqttswitch(); 
    
    // this is the real changing of the level
    fade_pwm(current_duty);

}




