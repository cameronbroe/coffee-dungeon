# Coffee Dungeon

Coffee Dungeon is a roguelike made for the GameBoy Advance meant to be played in the span of your coffee break.

It is built using the [Butano](https://github.com/GValiente/butano) game engine.

Assets being used during development/prototyping are from the following sources:
* [Kenney's Tiny Dungeon](https://kenney.nl/assets/tiny-dungeon)

## Building

1. Install the devkitARM toolchain for `gba-dev` from devkitPro: https://devkitpro.org/wiki/Getting_Started
2. Clone this repository with submodules
   ```bash
   git clone --recurse-submodules https://github.com/cameronbroe/coffee-dungeon.git
   ```
3. Build the ROM file with `make`:
   ```bash
   make -j 4
   ```
4. Run the file `coffee-dungeon.gba` in mGBA to verify the build works correct.

## Build with Docker

1. Ensure you have installed Docker Desktop.
2. Clone the repository with submodules
   ```bash
   git clone --recurse-submodules https://github.com/cameronbroe/coffee-dungeon.git
   ```
3. Build the ROM file in Docker with `make`:
   ```bash
   make docker-build
   ```
4. Run the file `coffee-dungeon.gba` in mGBA to verify the build works correct.

## License

This file is licensed under the MIT License and can be found in [LICENSE.md](LICENSE.md)

