# mnml

mnml is a minimalist skin package for [Rainmeter](https://www.rainmeter.net/), a desktop customization tool for Windows.  It's based on Illustro by poiru and Illustro Pulsar by Pul53dr1v3r.

![mnml skin package for Rainmeter](https://raw.githubusercontent.com/eamq/mnml/master/mnml.png)

## What's in this package?

True to the name, this skin package contains fewer skins than Illustro or Illustro Pulsar - it's a minimal set of skins that suits my needs, and (hopefully) provides a good starting point for others who wish to apply this design to other skins!

### Skins
- CPU and RAM - Intel
- Network
- GPU - NVIDIA
- C:\
- D:\
- E:\

## Installation

### Prerequisites

- [Rainmeter](https://www.rainmeter.net/)
  - Tested against v4.3.1.3321, but will probably work on newer versions.

### Install via .rmskin file (recommended)

1. Download the `mnml_<version>.rmskin` file in the `dist` directory of this repository.
1. Run the downloaded `.rmskin` file

### Install via git

1. Clone this repository into `C:\Users\<username>\Documents\Rainmeter\Skins`

### Install via .zip file

1. Go to the `Releases` tab in this repository
1. Expand `Assets` on the most recent release
1. Download `Source code (zip)`
1. Create a new directory called `mnml` in `C:\Users\<username>\Documents\Rainmeter\Skins`
1. Extract the downloaded `.zip` file in the new directory

## Modifying the skin

You will likely need to modify this skin in order to match your system.  Here are some things that you can/should change:

- Processor name/type
- GPU name/type
- Network name
- Amount of VRAM
- Drive labels
- Additional drives

Most variables are located in `@Resources/Variables/Variables.inc`, with the exception of storage drive labels (these are stored in their specific skins).

By default, all graphs will use a neutral color scheme, but Intel, AMD, and NVIDIA colors have been provided if you wish to use them.  Simply modify the `colorCPU` and `colorGPU` variables in `@Resources/Variables/Variables.inc` to point to the desired vendor color variable (`colorIntel`, `colorAmd`, or `colorNvidia`).

Example:
```toml
colorCPU = #colorIntel#
```

If the name of your CPU, GPU, or network causes the skin to expand horizontally, you can adjust the global width of all skins by modifying the `contentWidth` variable.

## Compatibility

The `.rmskin` package has been built for Windows 10, and tested on Windows 10 (64-bit only).  It _should_ work on other versions of Windows, but your mileage may vary.

## Contributing

Pull requests are welcome!  I only ask that you bump the version number and generate a new `.rmskin` file, ensuring that both the 32-bit and 64-bit versions of MSIAfterburner.dll are provided during build.

## Todo list

- Add per-thread CPU bar graphs (oriented vertically, like a graphic equalizer)
- Move from background.png to a native background, while maintaining the margins between skins
- Find ways to reduce CPU core duplication (iterate on lists, show # of procs based on a variable, etc.)

## Resources
- [Rainmeter skin documetation](https://docs.rainmeter.net/manual/skins/)
- [Building `.rmskin` files](https://docs.rainmeter.net/manual/distributing-skins/)
- [MSIAfterburner.dll](https://forums.guru3d.com/threads/rainmeter-plugin-for-msi-afterburner.319558/)
