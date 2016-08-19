

project( "Fmt" )

    kind "StaticLib"
    files {        
        "fmt/**.cc" 
    }

    warnings "Off"

    zpm.export [[
        includedirs "fmt/"
        flags "C++11"
    ]]