## SeasonManager Plugin

`SeasonManager` is a plugin for Unreal Engine designed to manage seasonal cycles and dynamically activate components such as audio, materials, or visual effects. It is modular, extendable, and usable both in Blueprint and C++.

---

### Main Features

- Full seasonal cycle handling: Warmup, Begin, Cooldown, End
- Fully modular seasonal components
- Blueprint & C++ support
- Editor-only Debug Widget included
- InfoPack system for materials, audio, effects, and other seasonal customizations

---

### Getting Started

1. **Add the** `MotherNature` **actor** to the scene
2. **Create** `USeasonDefinition` **assets** for each season:
   - Season name (Spring, Summer, etc.)
   - Duration in seconds
   - Associated InfoPacks
3. **Add components derived from** `USeasonComponentBase` **to your desired actor**:
   - `UMaterialSeasonComponent`
   - `UAudioSeasonComponent`
   - `USeasonalParticleComponent`
4. **Press Play**: the seasons will activate automatically if `bAutoStart` is enabled.

---

### Extending the Seasons

1. **Create a new class derived from** `USeasonInfoPackBase` (e.g., `UAudioInfoPack` for audio)
2. **Add your custom data** in the pack, such as sounds, colors, FX parameters, or gameplay values
3. **Create a new component** derived from `USeasonComponentBase`, specific to your system (e.g., fog or gameplay component)
4. **Override the seasonal methods** (`OnSeasonBegin`, `OnSeasonEnd`, etc.) to respond to seasonal changes
5. **Access your seasonal data** from the `SeasonDefinition` and apply it during the seasonal phases (e.g., play a sound, update a material, activate VFX, etc.)

---

### Debug Widget (Editor Only)

`SSeasonDebugWidget` displays in real time:

- Active season name
- Current phase
- Duration
- Remaining time

Currently minimal; future updates will provide a tabbed interface to allow full seasonal control.

---

### Folder Structure

- `Core/` : Main logic and the `AMotherNature` actor
- `Components/` : All seasonal components (`UAudioSeasonComponent`, etc.)
- `InfoPacks/` : `DataAsset` classes for seasonal data
- `UI/` : Debug and editor tools
- `Switcher/` : Timing logic (`UTimerSeasonSwitcher`)
- `Definition/` : Season behavior definitions
- `Utility/` : Miscellaneous helpers

---

### Demo Video

(https://www.youtube.com/watch?v=ZrN2f__ouOs)

---

### Requirements

- Unreal Engine 5.4+

---

### Author

*Created by Roberto Capparelli* - Tool Programmer / Gameplay Developer  
Portfolio: [robertocapparelli.com](https://robertocapparelli.com)
