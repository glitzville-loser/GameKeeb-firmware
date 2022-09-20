# GameKeeb firmware

Firmware for [GameKeeb](https://github.com/JonnyHaystack/GameKeeb) - keyboard to
GameCube adapter. Hardware information is in the main repo.

This is a fork of Arte's
[pico-rectangle](https://github.com/JulienBernard3383279/pico-rectangle)
firmware.

### Safety information

You probably shouldn't have this adapter plugged into PC via USB and via its
Gamecube port at the same time in case the different grounds cause electrical
issues (I dunno I'm not an electrician).

### How to program your board:

- Download the latest release (on the right of the Github page)
- Plug in your Raspberry Pico to your computer via USB while holding the "BOOTSEL" white button on the board.
- The board should appear as an external drive. Put the .uf2 of your choice in there. The board should disconnect and be ready for use.

### How to remap the controls

Plug your keyboard into the GameKeeb and then plug the GameKeeb into a GameCube/Wii console or a GameCube controller adapter. Next, without having pressing any other keys, press Escape (don't hold it down) and wait 3 seconds. You should see the LED inside the adapter turn off (if your GameKeeb revision has an LED) and the controller will disconnect from the console. Next, press keys one at a time in the following order to map your desired controls:

1. Left
2. Right
3. Down
4. Up
5. Mod X
6. Mod Y
7. Start
8. C-Left
9. C-Right
10. C-Down
11. C-Up
12. A
13. B
14. X
15. Y
16. Z
17. L
18. R
19. Light shield - light analog R press (for SSBM)
20. Mid shield - mid analog R press (for SSBM)
21. D-Pad Left
22. D-Pad Right
23. D-Pad Down
24. D-Pad Up

Any unwanted inputs can be mapped to a single out-of-the-way key. After completing the sequence, the LED (if present) should blink on and off continuously on its own. At this point, you can unplug the GameKeeb and plug it back in, and it should have your new layout on it.

### Troubleshooting

#### Not working on PC with Mayflash adapter

You need to have both of the Mayflash adapter's USB ports plugged in, otherwise
it doesn't supply the 5V needed to power the keyboard.

### Contact

Discord: Haystack#1872
