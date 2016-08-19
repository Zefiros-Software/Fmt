#Fmt
To use [Fmt](https://github.com/fmtlib/fmt) in [ZPM](http://zpm.zefiros.eu), just use:

# Status
OS          | Status
----------- | -------
Linux & OSX | [![Build Status](https://travis-ci.org/Zefiros-Software/Fmt.svg?branch=master)](https://travis-ci.org/Zefiros-Software/Fmt)
Windows     | [![Build status](https://ci.appveyor.com/api/projects/status/226uk1b767frmd5x?svg=true)](https://ci.appveyor.com/project/PaulVisscher/fmt)

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