# mnml

mnml is a minimalist skin package for [Rainmeter](https://www.rainmeter.net/), a desktop customization tool for Windows.  It's based on Illustro by poiru and Illustro Pulsar by Pul53dr1v3r.

![mnml skin package for Rainmeter](https://raw.githubusercontent.com/eamq/mnml/master/mnml.png)

## What's in this package?

True to the name, this skin package contains far fewer skins than Illustro or Illustro Pulsar - it's a basic set of skins that suits my needs, and (hopefully) provides a good starting point for others who wish to apply this design to other skins!

### Skins
- CPU and RAM - Intel
- Network
- GPU - NVIDIA
- C:\
- D:\
- E:\

### Plugins
- MSIAfterburner.dll (32-bit and 64-bit)

## Installation

### Prerequisites

- [Rainmeter](https://www.rainmeter.net/)
  - Tested against v4.3.1.3321, but will probably work on newer versions.
- [MSI Afterburner](https://www.msi.com/page/afterburner)
  - This is only used for GPU and VRAM usage.  You don't need to install it if you don't plan on using this functionality.

### via `.rmskin` (recommended)

- Download the `mnml_<version>.rmskin` file in the `dist` directory of this repository.
- Run the downloaded `.rmskin` file

### via `git clone`

- `git clone` this repository into the `C:\Users\<username>\Documents\Rainmeter\Skins` directory
- Run `git clone git@github.com:eamq/mnml.git`

### via `.zip` file

- Go to the `Releases` tab in this repository
- Expand `Assets` on the most recent release
- Download `Source code (zip)`
- Extract the downloaded `.zip` file in the `C:\Users\<username>\Documents\Rainmeter\Skins` directory

## Modifying the skin

You will likely need to modify this skin in order to match your system.  Here are some things that you can/should change:

- Processor name/type
- Number of processor cores/threads (not used currently, will probably add in the future)
- GPU name/type
- Amount of VRAM
- Additional drives

You may also wish to change the colors of the CPU and GPU usage graphs to match the AMD red color scheme.  Just note that the colors of the network/storage graphs are complimentary with the Intel blue and NVIDIA green.  I am considering changing these colors to fit well with both color schemes.

## Compatibility

The `.rmskin` package has been built for Windows 10, and tested on Windows 10 (64-bit only).  It _should_ work on other versions of Windows, but your mileage may vary.

## Contributing

Pull requests are welcome!  I only ask that you bump the version number and generate a new `.rmskin` file, ensuring that both the 32-bit and 64-bit versions of MSIAfterburner.dll are provided during build.

## Todo list

- Add per-thread CPU bar graphs (oriented vertically, like a graphic equalizer)
- Write AMD-themed CPU and GPU skins (or come up with a vendor-agnostic color scheme)
- Come up with a color scheme for network/storage that works with Intel, AMD, and NVIDIA (not needed if going vendor-agnostic)
- Move from background.png to a native background, while maintaining the margins between skins
- Find ways to reduce duplication (abstract common values, iterate on lists, show # of procs based on a variable, etc.)

## Resources
- [Rainmeter skin documetation](https://docs.rainmeter.net/manual/skins/)
- [Building `.rmskin` files](https://docs.rainmeter.net/manual/distributing-skins/)
- [MSIAfterburner.dll](https://forums.guru3d.com/threads/rainmeter-plugin-for-msi-afterburner.319558/)
