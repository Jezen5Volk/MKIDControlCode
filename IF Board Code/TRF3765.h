#ifndef __TRF3765_h__
#define __TRF3765_h__

//Project includes
#include "IC.h"
#include "Housekeeping.h"


//inheriting from IC in case there are commonalities to be added at a later date(ie: never)
class TRF3765 : public IC
{
    public:        
        /*----------------------------
        Low Level Methods for TRF3765
        -----------------------------*/

        //Gets contents of register address
        void get_register (int address);
        
        //Sets contents of register address, no safety check performed, read datasheet?
        void set_register (int address);


        /*-----------------------------
        High Level Methods for TRF3765
        ------------------------------*/

       //Set Local Oscillator(LO) to run at value
       void set_lo (double value);

       //Gets Local Oscillator(LO) value
       void get_lo ();

       //clears EEPROM Settings
       void reset();

       //store defaults: Current settings will be stored. Hard coded defaults will be stored if current seetings haven't been set.
       void store_defaults();

       //load defaults: Stored settings will be applied else hard coded defaults will be applied
       void load_defaults();

       //enable defaults: If enabled, stored settings will be applied at power up. If disabled, stored settings will not be applied at power up.
       void toggle_defaults();
};












#endif