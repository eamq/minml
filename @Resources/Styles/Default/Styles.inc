[Rainmeter]
Background=#@#Background.png
BackgroundMode=3
BackgroundMargins=0,34,0,15
SolidColor=0,0,0,1
MouseOverAction=[!ShowMeterGroup Controls][!Redraw]
MouseLeaveAction=[!HideMeterGroup Controls][!Redraw]

;===== Meter Styles=====
;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=Trebuchet MS
FontColor=255,255,255,150
SolidColor=0,0,0,100
FontSize=8
stringAlign=CenterCenter
AntiAlias=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/1.2)
Y=(#Bumper.top#+#C.h#*2.7+#Space.y#)

[LblCurrSty]
StringStyle=Bold

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=255,255,255,205
FontFace=Trebuchet MS
FontSize=10
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/1.2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/1.2)
[WeekendStyle]
FontColor=200,34,34,205

;[CurrentDay]
StringStyle=Bold

[LastWeek]
FontColor=255,255,0,0

[PreviousMonth]
FontColor=255,255,255,50

[NextMonth]
FontColor=255,255,255,50

[HolidayStyle]
FontColor=255,0,0,205

[WeekendStyle]
FontColor=200,34,34,205





;========== METERS ==========
;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*7)/2+#Bumper.x#)
Y=(#Bumper.top#+9)
H=#C.h#
FontColor=255,255,255,160
FontFace=Trebuchet MS
FontSize=10
stringAlign=Center
AntiAlias=1
DynamicVariables=1

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=(#Bumper.top#+14)
X=((#C.w#*6.5+#Space.x#*6)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]

;Date Indicator
[TodayHL]
Meter=image
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#+0)
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)+#C.h#+2)
H=19
W=(#C.w#+9)
SolidColor=#Clr.Hrl#
Hidden=#NotCurrentMonth#
DynamicVariables=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)

[Grid]
Meter=Image
ImageName=#@#calendar_grid1.png
X=7
Y=38