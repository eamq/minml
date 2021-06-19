; Template for a storage drive

[Rainmeter]
@IncludeRainmeter = #@#Variables\Rainmeter.inc

[Variables]
@IncludeVariables = #@#Variables\Variables.inc
Spacing.window.height = 90

; ======
; STYLES
; ======

@IncludeStyles = #@#Variables\Styles.inc

; ========
; MEASURES
; ========

[MeasureFree]
Measure = FreeDiskSpace
Drive = #drive#
UpdateDivider = 10

[MeasureUsed]
Measure = FreeDiskSpace
Drive = #drive#
InvertMeasure = 1
UpdateDivider = 10

[MeasureIO]
Measure = Plugin
Plugin = UsageMonitor
Category = LogicalDisk
Counter = Disk Bytes/sec
Name = #drive#

; ======
; METERS
; ======

@IncludeContainers = #@#Variables\Containers.inc

[MeterStorageTitle]
Meter = STRING
MeterStyle = StyleText | StyleTextTitle
Text = #storageTitle#
LeftMouseUpAction = !Execute ["#drive#\"]

[MeterBar]
Meter = Bar
MeasureName = MeasureUsed
MeterStyle = StyleBar | StylePostText
LeftMouseUpAction = !Execute ["#drive#\"]

[MeterValue]
Meter = String
MeterStyle = StyleText | StylePostBar
MeasureName = MeasureFree
Text = %1B free
NumOfDecimals = 1
Autoscale = 1
LeftMouseUpAction = !Execute ["#drive#\"]

[MeterIOGraph]
Meter = Histogram
MeterStyle = StyleGraph | StylePostText
MeasureName = MeasureIO
PrimaryColor = #Color.graph.histogram#
Autoscale = 1
LeftMouseUpAction = !Execute ["#drive#\"]
