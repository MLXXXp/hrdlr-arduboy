#ifndef PLAYER_H
#define PLAYER_H

const uint8_t playerFrameCount = 13;
const uint8_t playerFrameWidth = 8;
const uint8_t playerFrameHeight = 16;
const uint8_t PROGMEM playerFrames[][16] = {
  /* Frame number 0
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
      ## ## # 
      ## ## ##
      ## ## ##
        ####  
        ## #  
        #   # 
       ##  ## 
       ### ###
  */
  {0x00,0xb0,0x7c,0xf2,0xdf,0x72,0x84,0x00,0x07,0xc7,0xf8,0x9f,0x0f,0xd8,0xe7,0x86},
  /* Frame number 1
              
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
      ## ## # 
      ## ## ##
      ## ## ##
        ## #  
        #   # 
       ##  ## 
       ### ###
  */
  {0x00,0x60,0xf8,0xe4,0xbe,0xe4,0x08,0x00,0x0e,0xcf,0xf0,0x9f,0x0f,0xd0,0xef,0x8c},
  /* Frame number 2
              
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ##### 
      ## ## # 
      ## ## ##
      ## ## ##
         ##   
        ## #  
        #   # 
       ##  ## 
       ### ###
  */
  {0x00,0x60,0xf8,0xe4,0xbe,0xe4,0x88,0x00,0x07,0xc7,0xf0,0x9f,0x0f,0xd0,0xe7,0x86},
  /* Frame number 3
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
      ## ## # 
      ## ## ##
      ## ## ##
        ####  
        ## #  
       ##  ## 
       ### ###
              
  */
  {0x00,0xb0,0x7c,0xf2,0xdf,0x72,0x84,0x00,0x07,0x67,0x78,0x5f,0x0f,0x78,0x67,0x46},
  /* Frame number 4
              
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
      ## ## ##
      ## ## ##
        ####  
        ## #  
       ##  ## 
       ### ###
              
  */
  {0x00,0x60,0xf8,0xe4,0xbe,0xe4,0x08,0x00,0x06,0x67,0x78,0x5f,0x0f,0x78,0x67,0x46},
  /* Frame number 5
              
              
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ##### 
      ## ## # 
      ## ## ##
        ## #  
       ##  ## 
       ### ###
              
              
  */
  {0x00,0xc0,0xf0,0xc8,0x7c,0xc8,0x10,0x00,0x06,0x36,0x39,0x2f,0x07,0x39,0x37,0x24},
  /* Frame number 6
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
       #### # 
       #### ##
       #### ##
        ####  
        ## #  
        #  #  
       ## ##  
       ###### 
  */
  {0x00,0xb0,0x7c,0xf2,0xdf,0x72,0x84,0x00,0x00,0xc7,0xff,0x9f,0xcf,0xf8,0x87,0x06},
  /* Frame number 7
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
       #### # 
       #### ##
       #### ##
         ###  
         # #  
         ##   
        ###   
        ####  
  */
  {0x00,0xb0,0x7c,0xf2,0xdf,0x72,0x84,0x00,0x00,0x07,0xc7,0xff,0xef,0x98,0x07,0x06},
  /* Frame number 8
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
      ## ## # 
      ## #### 
      ## #### 
        ####  
        ## #  
        # ##  
       ## ### 
       ###    
  */
  {0x00,0xb0,0x7c,0xf2,0xdf,0x72,0x84,0x00,0x07,0xc7,0xf8,0x9f,0x6f,0x7e,0x47,0x00},
  /* Frame number 9
          #   
         ###  
        # # # 
        # #   
       #####  
       ### #  
        ####  
       # ## # 
      ## ## # 
      ## #### 
      ## #### 
        ####  
       ### #  
      ##    # 
      ###  ## 
           ###
  */
  {0x00,0xb0,0x7c,0xf2,0xdf,0x72,0x84,0x00,0x67,0x77,0x58,0x1f,0x0f,0xde,0xe7,0x80},
  /* Frame number 10
       #   #  
        # #   
          # # 
        # #   
       #####  
       ### #  
        ##### 
         ##   
       # ## # 
         ## # 
         ## # 
        ####  
       ### #  
         #    
              
              
  */
  {0x00,0x31,0x7a,0xf0,0xde,0x71,0x44,0x00,0x00,0x11,0x18,0x3f,0x0f,0x18,0x07,0x00},
  /* Frame number 11
              
              
              
        ##    
              
       #   #  
        ####  
         ##   
       # ##   
         #  # 
         # #  
              
       #   #  
              
              
              
  */
  {0x00,0x20,0x48,0xc8,0xc0,0x60,0x00,0x00,0x00,0x11,0x00,0x07,0x01,0x14,0x02,0x00},
  /* Frame number 12
              
              
              
              
              
              
         #    
              
       # ##   
              
         # #  
              
              
              
              
              
  */
  {0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x01,0x04,0x00,0x00}
};

#endif