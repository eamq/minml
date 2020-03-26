; Template for a storage drive
[Variables]
containerHeight = 74

[measureFree]
Measure = FreeDiskSpace
Drive = #drive#
UpdateDivider = 10

[measureUsed]
Measure = FreeDiskSpace
Drive = #drive#
InvertMeasure = 1
UpdateDivider = 10

[measureIO]
Measure = Plugin
Plugin = UsageMonitor
Category = LogicalDisk
Counter = Disk Bytes/sec
Name = #drive#

; ======
; METERS
; ======

@IncludeMeters = #@#Variables/Meters.inc

[meterLabel]
Meter = STRING
MeterStyle = styleLeftText
X = #paddingX#
Y = #paddingY#
Text = "#driveLabel#"
LeftMouseUpAction = !Execute ["#drive#\"]

[meterBar]
Meter = Bar
MeasureName = measureUsed
MeterStyle = styleBar
Y = 19r
LeftMouseUpAction = !Execute ["#drive#\"]

[meterValue]
Meter = String
MeterStyle = styleLeftText
MeasureName = measureFree
X = r
Y = 4r
Text = "%1B free"
NumOfDecimals = 1
AutoScale = 1
LeftMouseUpAction = !Execute ["#drive#\"]

[meterIOGraph]
Meter = Histogram
MeterStyle = styleGraphSmall
MeasureName = measureIO
PrimaryColor = #colorNeutral#
Autoscale = 1
LeftMouseUpAction = !Execute ["#drive#\"]
Y = 20r
