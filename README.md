#Fmt
To use [Fmt](https://github.com/fmtlib/fmt) in [ZPM](http://zpm.zefiros.eu), just use:

# Status
OS          | Status
----------- | -------
Linux & OSX | [![Build Status](https://travis-ci.org/Zefiros-Software/Boost.svg?branch=master)](https://travis-ci.org/Zefiros-Software/Boost)
Windows     | [![Build status](https://ci.appveyor.com/api/projects/status/jry48qkgq4opd8ux?svg=true)](https://ci.appveyor.com/project/PaulVisscher/boost)

# [ZPM](http://zpm.zefiros.eu) Installation
In `.package.json`
```json
"requires": [
    {
        "name": "Zefiros-Software/Fmt",
        "version": "^3.0.0"
    }
]
```

In `premake5.lua`
```lua
zpm.uses "Zefiros-Software/Fmt"
```