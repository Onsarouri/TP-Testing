#include "temp_controller.h"
#include "temp_sensor.h"

int check_temperature(void) {
    int temperature = read_temperature_sensor();

    if (temperature > 30) {
        return 1; // Trop chaud
    } else if (temperature < 15) {
        return -1; // Trop froid
    } else {
        return 0; // Température normale
    }
}