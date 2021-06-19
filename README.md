# minml

minml is a minimalist skin package for [Rainmeter](https://www.rainMeter.net/), a desktop customization tool for Windows.  It's based on Illustro by poiru and Illustro Pulsar by Pul53dr1v3r.

![minml skin package for Rainmeter](https://raw.githubusercontent.com/eamq/minml/master/minml.png)

## Requirements

- [Windows 10, version 1709 or higher](https://docs.microsoft.com/en-us/windows/release-information/status-windows-10-1709)
- [Rainmeter](https://www.rainMeter.net/)
  - Tested against v4.3.1.3321, but will probably work on newer versions.

## What's in this package?

True to the name, this skin package contains fewer skins than Illustro or Illustro Pulsar - it's a minimal set of skins that suits my needs, and (hopefully) provides a good starting point for others who wish to apply this design to other skins!

### Skins
- CPU and RAM
- Network
- GPU
- C:\
- D:\
- E:\
- F:\
- G:\
- H:\

## Installation

### Install via .rmskin file (recommended)

1. Download the `minml_<version>.rmskin` file in the `dist` directory of this repository.
1. Run the downloaded `.rmskin` file

### Install via git

1. Clone this repository into `C:\Users\<username>\Documents\Rainmeter\Skins`

### Install via .zip file

1. Go to the `Releases` tab in this repository
1. Expand `Assets` on the most recent release
1. Download `Source code (zip)`
1. Create a new directory called `minml` in `C:\Users\<username>\Documents\Rainmeter\Skins`
1. Extract the downloaded `.zip` file in the new directory

## Modifying the skin

You will likely need to modify this skin in order to match your system.  Here are some things that you can/should change:

- Processor name/type
- Number of cores/threads
- GPU name/type
- Amount of VRAM
- Network name
- Drive labels

Most variables are located in `@Resources/Variables/Variables.inc`, with the exception of drive labels (these are stored in their specific skins).

### Color schemes

By default, all graphs will use a neutral color scheme, but Intel, AMD, and NVIDIA colors have been provided if you wish to use them.  Simply modify the `colorCPU` and `GPU.color.graph` variables in `@Resources/Variables/Variables.inc` to point to the desired vendor color variable.  For example:

Example:
```
colorCPU = #Color.brand.intel#
```

### Sizing

If the name of your CPU, GPU, or network causes the skin to expand horizontally, you can adjust the global width of all skins by modifying the `Spacing.content.width` variable.

If you need to adjust the height of a skin, set or change the `Spacing.window.height` variable in that skin.

## Compatibility

The `.rmskin` package has been built for and tested on Windows 10. The GPU skin requires Windows 10 v1709 in order to fetch GPU and VRAM usage.

## Contributing

Pull requests are welcome! Please make sure to bump the version number and generate a new `.rmskin` file.

## Todo list

- Find way to include CPU temp while looking awesome

## Resources
- [Rainmeter skin documetation](https://docs.rainMeter.net/manual/skins/)
- [Building `.rmskin` files](https://docs.rainMeter.net/manual/distributing-skins/)
