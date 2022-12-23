#include <stdio.h>

int main(){

    //Usen orthographic projection :
    //xmin -1.0 , xmax 1.0 , ymin -1.0 , ymax 1.0


    float position_x = 0.5;
    float position_y = 0.5;
    float position_z = 0.5;

    float coords[] = {
        //----------------Minimal Positions------------  --Depth--   --------------Cover the screen----------  -Colors-

		//Red to pink
		 -0.01 + position_x,  0.03 + position_y + 0.15,  position_z  ,1, ( 0.03 + 0.15) * 2.77777777778 + 0.5  ,1,0,0,  // top right
		 -0.01 + position_x, -0.03 + position_y + 0.15,  position_z  ,1, (-0.03 + 0.15) * 2.77777777778 + 0.5  ,1,0,1,  // bottom right
		  0.01 + position_x,  0.03 + position_y + 0.15,  position_z  ,0, ( 0.03 + 0.15) * 2.77777777778 + 0.5  ,1,0,0,  // top let 
		 -0.01 + position_x, -0.03 + position_y + 0.15,  position_z  ,1, (-0.03 + 0.15) * 2.77777777778 + 0.5  ,1,0,1,  // bottom right
	 	  0.01 + position_x, -0.03 + position_y + 0.15,  position_z  ,0, (-0.03 + 0.15) * 2.77777777778 + 0.5  ,1,0,1,  // bottom let
		  0.01 + position_x,  0.03 + position_y + 0.15,  position_z  ,0, ( 0.03 + 0.15) * 2.77777777778 + 0.5  ,1,0,0,  // top let
		 
		//Pink to blue 
		 -0.01 + position_x,  0.03 + position_y + 0.09,  position_z  ,1, ( 0.03 + 0.09) * 2.77777777778 + 0.5  ,1,0,1,  // top right
		 -0.01 + position_x, -0.03 + position_y + 0.09,  position_z  ,1, (-0.03 + 0.09) * 2.77777777778 + 0.5  ,0,0,1,  // bottom right
		  0.01 + position_x,  0.03 + position_y + 0.09,  position_z  ,0, ( 0.03 + 0.09) * 2.77777777778 + 0.5  ,1,0,1,  // top let 
		 -0.01 + position_x, -0.03 + position_y + 0.09,  position_z  ,1, (-0.03 + 0.09) * 2.77777777778 + 0.5  ,0,0,1,  // bottom right
		  0.01 + position_x, -0.03 + position_y + 0.09,  position_z  ,0, (-0.03 + 0.09) * 2.77777777778 + 0.5  ,0,0,1,  // bottom let
		  0.01 + position_x,  0.03 + position_y + 0.09,  position_z  ,0, ( 0.03 + 0.09) * 2.77777777778 + 0.5  ,1,0,1,  // top let
     
		//blue to cyan							 			     		   	     
		 -0.01 + position_x,  0.03 + position_y + 0.03,  position_z  ,1, ( 0.03 + 0.03) * 2.77777777778 + 0.5  ,0,0,1,  // top right
		 -0.01 + position_x, -0.03 + position_y + 0.03,  position_z  ,1, (-0.03 + 0.03) * 2.77777777778 + 0.5  ,0,1,1,  // bottom right
		  0.01 + position_x,  0.03 + position_y + 0.03,  position_z  ,0, ( 0.03 + 0.03) * 2.77777777778 + 0.5  ,0,0,1,  // top let 
		 -0.01 + position_x, -0.03 + position_y + 0.03,  position_z  ,1, (-0.03 + 0.03) * 2.77777777778 + 0.5  ,0,1,1,  // bottom right
		  0.01 + position_x, -0.03 + position_y + 0.03,  position_z  ,0, (-0.03 + 0.03) * 2.77777777778 + 0.5  ,0,1,1,  // bottom let
		  0.01 + position_x,  0.03 + position_y + 0.03,  position_z  ,0, ( 0.03 + 0.03) * 2.77777777778 + 0.5  ,0,0,1,  // top let
     
		//cyan to green										      					   	     
		 -0.01 + position_x,  0.03 + position_y - 0.03,  position_z  ,1, ( 0.03 - 0.03) * 2.77777777778 + 0.5  ,0,1,1,  // top right
		 -0.01 + position_x, -0.03 + position_y - 0.03,  position_z  ,1, (-0.03 - 0.03) * 2.77777777778 + 0.5  ,0,1,0,  // bottom right
		  0.01 + position_x,  0.03 + position_y - 0.03,  position_z  ,0, ( 0.03 - 0.03) * 2.77777777778 + 0.5  ,0,1,1,  // top let 
		 -0.01 + position_x, -0.03 + position_y - 0.03,  position_z  ,1, (-0.03 - 0.03) * 2.77777777778 + 0.5  ,0,1,0,  // bottom right
		  0.01 + position_x, -0.03 + position_y - 0.03,  position_z  ,0, (-0.03 - 0.03) * 2.77777777778 + 0.5  ,0,1,0,  // bottom let
		  0.01 + position_x,  0.03 + position_y - 0.03,  position_z  ,0, ( 0.03 - 0.03) * 2.77777777778 + 0.5  ,0,1,1,  // top let
     
		//Green to yellow						  			     		 					   	     
		 -0.01 + position_x,  0.03 + position_y - 0.09,  position_z  ,1, ( 0.03 - 0.09) * 2.77777777778 + 0.5  ,0,1,0,  // top right
		 -0.01 + position_x, -0.03 + position_y - 0.09,  position_z  ,1, (-0.03 - 0.09) * 2.77777777778 + 0.5  ,1,1,0,  // bottom right
		  0.01 + position_x,  0.03 + position_y - 0.09,  position_z  ,0, ( 0.03 - 0.09) * 2.77777777778 + 0.5  ,0,1,0,  // top let 
		 -0.01 + position_x, -0.03 + position_y - 0.09,  position_z  ,1, (-0.03 - 0.09) * 2.77777777778 + 0.5  ,1,1,0,  // bottom right
		  0.01 + position_x, -0.03 + position_y - 0.09,  position_z  ,0, (-0.03 - 0.09) * 2.77777777778 + 0.5  ,1,1,0,  // bottom let
		  0.01 + position_x,  0.03 + position_y - 0.09,  position_z  ,0, ( 0.03 - 0.09) * 2.77777777778 + 0.5  ,0,1,0,  // top let
     
		//Yellow to red										     	 					   	     
		 -0.01 + position_x,  0.03 + position_y - 0.15,  position_z  ,1, ( 0.03 - 0.15) * 2.77777777778 + 0.5  ,1,1,0,  // top right
		 -0.01 + position_x, -0.03 + position_y - 0.15,  position_z  ,1, (-0.03 - 0.15) * 2.77777777778 + 0.5  ,1,0,0,  // bottom right
		  0.01 + position_x,  0.03 + position_y - 0.15,  position_z  ,0, ( 0.03 - 0.15) * 2.77777777778 + 0.5  ,1,1,0,  // top let 
		 -0.01 + position_x, -0.03 + position_y - 0.15,  position_z  ,1, (-0.03 - 0.15) * 2.77777777778 + 0.5  ,1,0,0,  // bottom right
		  0.01 + position_x, -0.03 + position_y - 0.15,  position_z  ,0, (-0.03 - 0.15) * 2.77777777778 + 0.5  ,1,0,0,  // bottom let
		  0.01 + position_x,  0.03 + position_y - 0.15,  position_z  ,0, ( 0.03 - 0.15) * 2.77777777778 + 0.5  ,1,1,0,  // top let
	};

    return 0;
}