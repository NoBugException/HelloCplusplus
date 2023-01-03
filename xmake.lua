-- 添加规则
add_rules("mode.debug", "mode.release")

-- 如果当前编译模式是debug
if is_mode("debug") then
    -- 添加DEBUG编译宏（相当于add_cxxflags("-DDEBUG")）
    add_defines("DEBUG")
    -- 启用调试符号
    set_symbols("debug")
    -- 禁用优化（相当于add_cxxflags("-Od")）
    set_optimize("none")
end

-- 如果是release
if is_mode("release") then
    -- 如果是release模式
    if is_mode("release") then
        -- 隐藏符号
        set_symbols("hidden")
        -- strip所有符号
        set_strip("all")
        -- 忽略帧指针
        add_cxflags("-fomit-frame-pointer")
        add_mxflags("-fomit-frame-pointer")
    end
    -- 添加扩展指令集
    add_vectorexts("sse2", "sse3", "ssse3", "mmx")
    set_optimize("fastest")
end

-- includes("src/ls_02")
-- includes("src/ls_03")
-- includes("src/ls_04")
-- includes("src/ls_05")
-- includes("src/ls_06")
-- includes("src/ls_07")
-- includes("src/ls_08")
includes("src/ls_10")