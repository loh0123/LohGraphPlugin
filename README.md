# LohGraphPlugin
A Plugin For Graph System Also Support High Performance Navigation

* Warning : if you want to package with this plugin, you project must has c++ in it

# Problem
- Path Add / Remove will not tell navigator

# GameCoreSystem
This launch automatic with the game so any blueprint or code can access it without it return null
- Handle thread pool and thread deployment
- Register with all readers and writers create in the game
- Auto stop reader thread if writer need to work and continual the work after all writer is done

# GraphComponentBase
Core and component bridge
- Handle thread event like Stop, Start, OnWork, End
- Register with core
- Handle thread launch to core

# GraphReader
- Get node in the world
- Return node weight

# GraphNavigator
Child of GraphReader
- Calculate ( Group Navigation ) with A*
- Handle navigation event
- Handle moving to node

# GraphWriter
- Register all nodes in the actor
- Cache ( Group Data ) for calculation for reuse
- Generate ( Group ) with ( Strong Component Link )
- Generate ( Heatmap ) for local navigation and cache it ot ( Group Data )

# BaseNode
- Handle ( Path Data ) like add, remove, clear

# CacheNode
- Cache Pass Reader 
- Cache group identifycation
- Register to Writer
- Handle Writer update call

# Node
- Handle Collsion
- Handle Debug View