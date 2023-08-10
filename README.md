# Wheel Height Calculator
Basic and simple C++ terminal program for calculating automotive wheel assembly height

# Usage
Compile and run the program.

The program will ask user input for tire width, sidewall aspect ratio, and rim diameter in inches, then it will calculate the wheel assembly height based on the user input. The program can also run with command line arguments.

# Insight
An automotive wheel assembly consists of the wheel, and the tire. The full wheel assembly height or diameter then can be used for further calculations e.g the speed at a certain RPM in a certain gear.

A common way of representing modern tire sizes is XXX / YY R ZZ. One widely used example is the 205 / 55 R16 tire where:

205 is the tire width in millimeters,

55 is the ratio of the tire sidewall to the tire width,

16 is the wheel diameter in inches,

and R denoting that this is a [radial tire](https://en.wikipedia.org/wiki/Radial_tire).


The height of the wheel assembly consists of the diameter of the wheel and the sidewall surrounding the wheel. In the example:

The sidewall's height is 55% of the tire width: 205 * 55 / 100 = 112.75 mm

The wheel diameter is 16 inches: 16 * 25.4 = 406.4 mm

Since the sidewall is passed twice in the diameter measurement, it's multiplied by 2 in the calculation:

406.4 + 112.75 * 2 = 631.9 mm
