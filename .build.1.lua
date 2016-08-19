

project( "Fmt" )

    kind "StaticLib"
    files {        
        "fmt/**.cc" 
    }

    warnings "Off"

    zpm.export [[
        includedirs "./"
        flags "C++11"
    ]]