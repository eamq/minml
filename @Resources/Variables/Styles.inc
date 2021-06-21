[StyleText]
FontColor = #Text.color#
FontFace = #Text.font#
FontSize = #Text.size#
AntiAlias = 1
X = (#Spacing.content.x# + 1)
Container = MeterContainer

[StyleTextTitle]
Y = #Spacing.content.y#r

[StyleBar]
BarOrientation = Horizontal
BarColor = #Color.graph.bar#
SolidColor = #Color.graph.background#
X = #Spacing.content.x#
W = #Spacing.content.width#
H = #Spacing.graph.bar.height#
Container = MeterContainer

[StyleGraph]
BarOrientation = Horizontal
GraphStart = Right
SolidColor = #Color.graph.background#
Antialias = 1
X = #Spacing.content.x#
W = #Spacing.content.width#
H = #Spacing.graph.height#
Container = MeterContainer

[StyleGraphBorder]
Shape = Rectangle #Spacing.content.x#, r, #Spacing.content.width#, #Spacing.graph.height#, | StrokeWidth #Spacing.border.width# | StrokeColor #Color.graph.border# | FillColor #Color.transparent#

[StylePostBar]
Y = (#Spacing.graph.bar.height# + #Spacing.padding.post.bar#)r

[StylePostGraph]
Y = (#Spacing.graph.height# + #Spacing.padding.post.histogram#)r

[StylePostText]
Y = (#Text.size# + #Spacing.padding.post.text#)r

[StylePostTextTitle]
Y = (#Text.title.size# + #Spacing.padding.post.text#)r
