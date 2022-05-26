/**
 * file name:  Configure.h
 * author:     GES233
 * version:    0.0.1
 * discription:
 * Configure the sensor and save the environment of program.
*/

#ifndef __CONFIGURE_H__
#define __CONFIGURE_H__

/**
 * whole option = sensor option + pig type
*/

// SENSOR_OPTIONS: one part of oprations.
enum SENSOR_OPTIONS {
    SNOUT_EDA,
    FACIAL_EMG,
    MULTIPLE
};

// PIG_TYPE: one part of oprations.
enum PIG_TYPE {
    PIGLET,
    CASTRATE_PIG,
    BOAR,
    SOW
};

/***/

struct FinalHead {
    // Device info.
    int id;
    // Terget info.
};

class Settings {
    public:
        // Methods:
        void load_Configure(); // input
        void dump_Configure(); // display
        // add delete.
    private:
        // Methods:
        void initialze_Configure();
        // Values:
        struct FinalHead SensorHead;
        enum SENSOR_OPTIONS OP_1;
        enum PIG_TYPE OP_2;
};

#endif
