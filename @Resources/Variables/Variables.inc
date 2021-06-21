[Variables]
; TODO docs: namespaces

Text.font = Segoe UI
Text.size = 9

Spacing.border.width = 1
; Adjust width of all skins here (content will scale to fit)
Spacing.content.width = 125
Spacing.content.x = (#Spacing.margin.horizontal# + #Spacing.padding.horizontal#)
Spacing.content.y = (#Spacing.margin.vertical# + #Spacing.padding.vertical#)
Spacing.graph.height = 30
Spacing.graph.bar.height = 3
Spacing.margin.horizontal = 6
Spacing.margin.vertical = 6
Spacing.padding.horizontal = 6
Spacing.padding.vertical = 6
Spacing.padding.post.bar = 3
Spacing.padding.post.histogram = 6
Spacing.padding.post.text = 12
; Override window height as needed in each skin (content will NOT scale to fit)
; This default works for title + graph + bar
Spacing.window.height = 72

Color.background = 0, 0, 0, 200
Color.brand.intel = 0, 113, 197, 150  ; #0071C5
Color.brand.nvidia = 118, 185, 0, 150 ; #76B900
Color.brand.amd = 221, 0, 49, 150     ; #DD0031
Color.graph.bar = 255, 140, 0, 200
Color.graph.border = 255, 255, 255, 200
Color.graph.histogram = 200, 200, 200, 128
Color.graph.background = 32, 32, 32, 96
Color.text = 255, 255, 255, 200
Color.transparent = 0, 0, 0, 0
