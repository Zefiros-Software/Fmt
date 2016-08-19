
workspace "Fmt"
   configurations { "Test" }

   startproject "Fmt"

    project "Fmt"
        kind "ConsoleApp"
        files "main.cpp"

        zpm.uses {
            "Zefiros-Software/GoogleTest",
            "Zefiros-Software/Fmt"
        }