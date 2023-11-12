# 03DE-First Person Interaction Toolkit
![alt text](https://i.imgur.com/WSS5PYV.png)
The 03DE-FirstPersonInteractionToolkit is a template project for first person adventure games built atop of Porcupine-Factory's FirstPersonController gem (https://github.com/Porcupine-Factory/FirstPersonController) and using the Open 3D Engine (https://github.com/o3de/o3de/). 

# Toolkit overview:

In this sample project, there's a variety of simple documented script canvas scripts for various interactions as well as some template art assets for level design prototyping.

# Mechanics included:

* Modular interaction system with dynamic UI crosshair / popup text anims / object highlight
* Pickup, inspect (rotate), throw object, and return to original position
* Physics based doors that can be open, closed, and locked
* Ladder (half life 2 style based on look direction)
* Elevator with buttons to call the lift up/down
* Valve + Scifi Door (turnable wheel that controls 0<->1 value that can smoothly open doors or control other things)
* Read note (UI popup)
* Light switch (toggleable)
* Teleport triggers (walk in trigger area or place item, teleport to position without error / clipping through floor - height adjusted)
* Trampoline (based on incoming velocity, applies opposite upward force to objects / characters)
* Slide (no script, just weeeeeee!)

# License:

The 03DE-FirstPersonInteractionToolkit is licensed under the MPL 2.0. (https://www.mozilla.org/en-US/MPL/2.0/FAQ/)

# Special Thanks:

This project would not be possible without the generous help and advising from Eric Kuzmenko, creator of the 03DE first person controller gem, and the 03DE Discord Community.
