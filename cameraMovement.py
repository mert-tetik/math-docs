import math

pitch = 0.0
yaw = -90.0
sensitivity = 0.2
radius = 10.0

# Current mouse position - last mouse position 
mouseXoffset = 0.0
mouseYoffset = 0.0

#One of these values has to 10 since the default value for radius is 10
cameraPos_x = 0.0
cameraPos_y = 0.0
cameraPos_z = 10.0

#Center
originPos_x = 0.0
originPos_y = 0.0
originPos_z = 0.0

def move(): #Run every frame or once the mouse position changed
    # X axis
	cameraPos_x -= math.sin(math.radians(yaw)) * mouseXoffset * (sensitivity / 2) + math.cos(math.radians(yaw)) * (math.sin(math.radians(pitch)) * mouseYoffset) / 4;
	originPos_x -= math.sin(math.radians(yaw)) * mouseXoffset * (sensitivity / 2) + math.cos(math.radians(yaw)) * (math.sin(math.radians(pitch)) * mouseYoffset) / 4;

    # Y axis
	cameraPos_z += math.cos(math.radians(yaw)) * mouseXoffset * (sensitivity / 2) - math.sin(math.radians(yaw)) * (math.sin(math.radians(pitch)) * mouseYoffset) / 4;
	originPos_z += math.cos(math.radians(yaw)) * mouseXoffset * (sensitivity / 2) - math.sin(math.radians(yaw)) * (math.sin(math.radians(pitch)) * mouseYoffset) / 4;

    # Z axis
	cameraPos_y -= math.cos(math.radians(pitch)) * mouseYoffset * (sensitivity / 2);
	originPos_y -= math.cos(math.radians(pitch)) * mouseYoffset * (sensitivity / 2);


def helicalRotation(): #Run every frame or once the mouse position changed
    #Reduce the radius to zoom in
	cameraPos_x = math.cos(math.radians(yaw)) * math.cos(math.radians(pitch)) * radius + originPos_x;
	cameraPos_y = math.sin(math.radians(pitch)) * -radius + originPos_y;
	cameraPos_z = math.sin(math.radians(yaw)) * math.cos(math.radians(pitch)) * radius + originPos_z;