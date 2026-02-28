#include "control_logic.h"

#define TEMP_WARNING 32.0
#define TEMP_CRITICAL 35.0

#define HUM_WARNING 45.0
#define HUM_CRITICAL 40.0

ControlLogic::ControlLogic() {
    previousState = SAFE;
}

ControlDecision ControlLogic::compute(float temperature, float humidity, bool sensorHealthy) {

    ControlDecision decision;

    if (!sensorHealthy) {
        decision.fanOn = false;
        decision.sprinklerOn = false;
        decision.alertRequired = false;
        decision.alertMessage = "";
        decision.state = previousState;
        return decision;
    }

    SystemState newState = SAFE;

   
    if (temperature >= TEMP_CRITICAL) {
        newState = CRITICAL;
    }
    else if (temperature >= TEMP_WARNING) {
        newState = WARNING;
    }

    
    if (humidity <= HUM_CRITICAL) {
        newState = CRITICAL;
    }
    else if (humidity <= HUM_WARNING && newState != CRITICAL) {
        newState = WARNING;
    }

    
    decision.fanOn = (temperature >= TEMP_WARNING);
    decision.sprinklerOn = (humidity <= HUM_WARNING);

    
    if (newState != previousState) {
        decision.alertRequired = true;

        if (newState == CRITICAL)
            decision.alertMessage = "CRITICAL ALERT: Threshold exceeded!";
        else if (newState == SAFE)
            decision.alertMessage = "System back to SAFE.";
        else
            decision.alertMessage = "WARNING: Conditions changing.";
    }
    else {
        decision.alertRequired = false;
        decision.alertMessage = "";
    }

    decision.state = newState;
    previousState = newState;

    return decision;
}
