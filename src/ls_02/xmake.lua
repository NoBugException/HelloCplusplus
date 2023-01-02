add_defines("ls_02")

target("test")
    set_kind("binary")
    set_basename("test_$(mode)_$(arch)")
    add_includedirs("head")
    add_files("main.cpp", "cpp/**.cpp")
target_end()