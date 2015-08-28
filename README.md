# Hikaru Skirt

A Hikaru Skirt repository for controlling LED strip with Arduino. Read full tutorial [here]().



## Getting started

The folder that contains this project must be called with the same name as the main .ino file, in this case **Hikaru**. This is a strange quirk of the Arduino IDE.

Clone the project. Then change these lines:

```cpp
Red.create(8);
Green.create(9);
Blue.create(7);
```

You have to assign here the pins that you soldered for the different colors. Then just compile and upload.


## Author & Thanks

Francisco Presencia

Special thanks to:

- The original Hikaru Skirt
- SexyCyborg for her tutorial that got me started
- Adafruit for their LED strip tutorial
