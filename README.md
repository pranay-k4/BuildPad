# BuildPad
BuildPad is customizable macro pad with OLED display, layers, media controls and more.

## Why BuildPad?
BuildPad is customizable open-source macropad for makers, coders, designers, and electronics builders and why I made this because building something yourself is way more fun than buying it and I love hardware.

## Features
- 6 programmable mechanical keys
- Rotary encoder
- OLED display
- RGB lighting
- Custom firmware
- Open-source hardware
- Bongo Cat animation

## CAD Render
<img width="807" height="414" alt="Opera Snapshot_2026-07-03_222907_cad onshape com" src="https://github.com/user-attachments/assets/362d20aa-5a3d-4742-9e9f-a83dae572393" />
<img width="636" height="480" alt="Opera Snapshot_2026-07-03_222953_cad onshape com" src="https://github.com/user-attachments/assets/7bcae890-fcce-4e9d-a9f8-81b9c20f87a9" />


## PCB Screenshots
![image](https://cdn.hackclub.com/019ef59a-6f5c-710c-83ca-89a48ec1d11d/image.png)
![image](https://cdn.hackclub.com/019ef59a-bcc8-749e-8118-97423e1eb3ba/image.png)

## Hardware
- XIAO RP2040
- SSD1306 128×32 OLED
- MX Cherry Switches
- SK6812 MINI E Leds
- EC11 Rotary Encoder

## Build Your Own BuildPad

### 1. Order the PCB
Export the Gerber files from the PCB folder and order the board from your preferred PCB manufacturer.

### 2. Print the Case
Print the top and bottom case parts using the files in the case directory.

### 3. Gather Components
Use the BOM to source all required components.

### 4. Assemble the PCB
Solder:
1. Diodes
2. RGB LEDs
3. XIAO RP2040
4. OLED Display
5. Rotary Encoder
6. Mechanical Switches

### 5. Install Heat Set Inserts
Install M2 heat-set inserts into the top case.

### 6. Flash Firmware
Install QMK and compile:
```bash
qmk compile -kb buildpad -km default
```
Flash the generated firmware onto the XIAO RP2040.

### 7. Assemble the Case
Mount the PCB inside the case and secure everything using M2 screws.


## License
This project is licensed under the MIT License.

## Author
Pranay Kamle

BuildPad v1 • 2026
