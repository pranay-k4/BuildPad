# BuildPad
BuildPad is customizable macro pad with OLED display, layers, media controls and more.

## CAD Render

<img width="722" height="508" alt="Opera Snapshot_2026-07-02_221631_cad onshape com" src="https://github.com/user-attachments/assets/1738ffb8-bb89-46ea-955f-cf1055aacfe7" />

<img width="606" height="420" alt="Opera Snapshot_2026-07-02_222105_cad onshape com" src="https://github.com/user-attachments/assets/f5d77506-7f1f-44f0-8f96-652ffa5cb741" />

## PCB

![image](https://cdn.hackclub.com/019ef59a-6f5c-710c-83ca-89a48ec1d11d/image.png)

![image](https://cdn.hackclub.com/019ef59a-bcc8-749e-8118-97423e1eb3ba/image.png)


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

## Hardware

| Component | Part                |
| --------- | ------------------- |
| MCU       | Seeed XIAO RP2040   |
| Display   | SSD1306 128x32 OLED |
| RGB       | 8x SK6812 Mini-E    |
| Switches  | MX Compatible       |
| Firmware  | QMK                 |


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
If you build one, modify it, or improve it, feel free to share your version.
