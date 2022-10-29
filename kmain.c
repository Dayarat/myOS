#include "drivers/serial_port.h"
#include "drivers/frame_buffer.h"



    
    int main(){

           char mssg[] = "Hi! welcome to my OS - R.K.S Dayarathna";
   
    
    serial_write(0x3F8, mssg, sizeof(mssg));
    fb_write(mssg, sizeof(mssg));
    
    }
