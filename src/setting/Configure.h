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

// PIG_TYPE: one part of oprations, the param may different.
enum PIG_TYPE {
    PIGLET,
    CASTRATE_PIG,
    BOAR,
    SOW
};

/**
 * This is ALL information with the board.
*/
struct FinalHead {
    /* Device info. */
    // ID of device.
    long int device_id;
    // Produce year, month and day.
    int produce_date[3];
    // Instantiation SENSOR_OPTIONS.
    enum SENSOR_OPTIONS OP_1;

    /* Terget info, Referenced to "Technical 
    specifications for livestock ear tags" from
    the offical website of Ministry of Rural
    Affairs of the PRC. */
    // Main number: 7 digits, 
    // and sub number: 8 digits.
    short int swine_id[2];
    // Instantiation PIG_TYPE.
    enum PIG_TYPE OP_2;
} SensorHead;


struct Config {
    // Configure about sensor.
    bool eda_enable;
    int eda_port[2];
    bool emg_enable;
    int emg_head[3];
    // Device identity.
    bool id_registeration;
    // Connection preference.
} SensorConfigure;


class Settings {
    public:
        // Methods:
        void loadConfigure(); // input
        void dumpConfigure(FinalHead &SensorHead); // display
        void updateSwine();   // e.g. piglet -> castrated.
        // add delete.
        // Values:
        struct SensorConfigure;
    private:
        // Methods:
        void initializeConfigure(const char *filepath, Config &SensorConfigure);
        // Values:
        struct SonsorHead;
};

#endif
