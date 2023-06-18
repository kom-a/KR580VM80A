workspace "kr580"
   configurations { "Debug", "Release" }
   architecture "x86"
   startproject "UMPK-80"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "KR580"
    location "KR580"
    kind "StaticLib"
    language "C++"

    targetdir ("Bin/" .. outputdir .. "/%{prj.name}")
    objdir ("Bin-int/" .. outputdir .. "/%{prj.name}")

    files 
    { 
        "%{prj.name}/src/**.*",
        "%{prj.name}/*.h",
        "%{prj.name}/*.cpp"
    }

    includedirs
    {
        "Compiler/",
        "%{prj.name}/src/",
        "Vendor/spdlog/include/"
    }

    libdirs 
    {
        "Bin/" .. outputdir .. "/Compiler"
    }

    links
    {
        "Compiler"
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

project "Compiler"
    location "Compiler"
    kind "StaticLib"
    language "C++"

    targetdir ("Bin/" .. outputdir .. "/%{prj.name}")
    objdir ("Bin-int/" .. outputdir .. "/%{prj.name}")

    files 
    { 
        "%{prj.name}/src/**.*",
        "%{prj.name}/%{prj.name}.h"
    }

    includedirs
    {
        "%{prj.name}/src",
        "KR580/",
        "Vendor/spdlog/include/"
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

project "GLFW"
    location "UMPK-80/vendor/GLFW"
    kind "StaticLib"
    language "C++"

    targetdir ("Bin/" .. outputdir .. "/%{prj.name}")
    objdir ("Bin-int/" .. outputdir .. "/%{prj.name}")

    files 
    { 
        "%{prj.location}/src/null*.*",
        "%{prj.location}/src/context.*",
        "%{prj.location}/src/egl_context.*",
        "%{prj.location}/src/init.*",
        "%{prj.location}/src/input.*",
        "%{prj.location}/src/monitor.*",
        "%{prj.location}/src/osmesa_context.*",
        "%{prj.location}/src/vulkan.*",
        "%{prj.location}/src/wgl_context.*",
        "%{prj.location}/src/window.*",
        "%{prj.location}/src/platform.*",
    }

    includedirs
    {
        "%{prj.location}/include",
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

    filter "system:Windows"
        defines { "_GLFW_WIN32 " }
        files "%{prj.location}/src/win32*.c"

    filter "system:Unix"
        defines { "_GLFW_X11 " }
        files "%{prj.location}/src/x11*.c"

    filter "system:Mac"
        defines { "_GLFW_COCOA " }
        files "%{prj.location}/src/cocoa*.c"

project "UMPK-80"
    location "UMPK-80"
    kind "ConsoleApp"
    language "C++"

    targetdir ("Bin/" .. outputdir .. "/%{prj.name}")
    objdir ("Bin-int/" .. outputdir .. "/%{prj.name}")

    files 
    { 
        "%{prj.name}/src/**.*",
        "%{prj.name}/vendor/imgui/imgui/*.*",
        "%{prj.name}/vendor/imgui/imgui/backends/imgui_impl_glfw.*",
        "%{prj.name}/vendor/imgui/imgui/backends/imgui_impl_opengl3.*",
        "%{prj.name}/vendor/glad/**.*",
        "%{prj.name}/vendor/imgui/imgui_club/imgui_memory_editor/*.*",
        "%{prj.name}/vendor/imgui/ImGuiColorTextEdit/*.cpp",
        "%{prj.name}/vendor/imgui/ImGuiColorTextEdit/*.h",
        "%{prj.name}/vendor/imgui/ImGui-Addons/FileBrowser/*.cpp",
        "%{prj.name}/vendor/IconsFontAwesome/*.h",
        "%{prj.name}/vendor/stb/**.*",
    }

    includedirs
    {
        "Compiler",
        "KR580",
        "%{prj.name}/src",
        "%{prj.name}/vendor/imgui",
        "%{prj.name}/vendor/imgui/imgui",
        "%{prj.name}/vendor/imgui/imgui/backends",
        "%{prj.name}/vendor/imgui/ImGui-Addons/FileBrowser",
        "%{prj.name}/vendor/glad/include",
        "%{prj.name}/vendor/GLFW/include",
        "%{prj.name}/vendor/stb/",
        "%{prj.name}/vendor/IconsFontAwesome/",
        "%{prj.name}/vendor/imgui-notify/src",
        "Vendor/spdlog/include/"
    }

    links
    {
        "GLFW",
        "KR580"
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"
