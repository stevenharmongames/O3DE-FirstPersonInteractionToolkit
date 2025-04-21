<u>Supported o3de versions</u> : **23.10**

# O3DE-First Person Interaction Toolkit

![overview gif](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExOWxxcGo4Y3gyODZoZTA2emZiNTZ1N215NjVycmhnbXQzeWJocjA0MyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/IpsPFuHom0A16yceuz/source.gif)

The O3DE-FirstPersonInteractionToolkit is a template project for first person adventure games built atop of Porcupine-Factory's [FirstPersonController gem](https://github.com/Porcupine-Factory/FirstPersonController). The project contains a variety of simple documented script canvas scripts for various interactions as well as some template art assets for level design prototyping.

For a comprehensive setup guide please see [Projects/SetupGuide.pdf](https://github.com/stevenharmongames/03DE-FirstPersonInteractionToolkit/blob/5b745fe87137040d9203c669841bc4c1e3ceee0f/Projects/SetupGuide.pdf)

## Prerequisites

You need to build or [install O3DE engine](https://o3de.org/download/).

## How to run

1. Download (green "Code" button, then "Download ZIP") or clone the github repository (`git clone https://github.com/stevenharmongames/O3DE-FirstPersonInteractionToolkit.git`)
2. Launch O3DE. It will open the Project manager. Click on the **New Project** button then **Open Existing Project** option.
3. Navigate to your download (and make sure it is unzipped). Open the **Projects/FirstPersonProject** folder. The project should now be registered.

![project](doc/project.png?raw=true)

4. Click on the **Build Project** button, located on the **FirstPersonProject** image.
5. Once the project has been built successfully, use the **Open Editor** button.
6. The asset pre-processor will run for a bit. Once it is over you will be welcomed with the **Open a Level** window, simply pick the first one.

## Controls

Move the character with WASD on the keyboard.
Use the mouse to rotate the camera.
All of the interactions are done via mouse left or right click.

## Project Highlights

[![Play Overview Video](https://img.youtube.com/vi/kQ5ckXGn9xE/0.jpg)](https://www.youtube.com/watch?v=kQ5ckXGn9xE)

* **Modular interaction system** with dynamic UI crosshair / popup text anims / object highlight
* **Pickup**, inspect (rotate), throw object, and return to original position
* **Physics based doors** that can be open, closed, and locked
* **Ladder** (half life 2 style based on look direction)
* **Elevator** with buttons to call the lift up/down
* **Valve** + Scifi Door (turnable wheel that controls 0<->1 value that can smoothly open doors or control other things)
* **Read note** (UI popup)
* **Light switch** (toggleable)
* **Teleport** triggers (walk in trigger area or place item, teleport to position without error / clipping through floor - height adjusted)
* **Trampoline** (based on incoming velocity, applies opposite upward force to objects / characters)
* **Slide** (no script, just weeeeeee!)

### Screenshot

![screenshot](doc/screenshot-1.png?raw=true)

### Cool Projects Using Toolkit Showcase

Maksym Kokoiev's Wwise Integration

[![Play Maksym's Video](https://img.youtube.com/vi/rtb-BUbvnEQ/0.jpg)](https://www.youtube.com/watch?v=rtb-BUbvnEQ)

# Special Thanks

This project would not be possible without the generous help and advising from Eric Kuzmenko & NanaYellen, creators of the O3DE first person controller gem, and the O3DE Discord Community. Shoutout to Kepler - keplercodes & AJ - theoneabis for the debugging help.

# License

The O3DE-FirstPersonInteractionToolkit is licensed under the [MPL 2.0](https://www.mozilla.org/en-US/MPL/2.0/FAQ/).

