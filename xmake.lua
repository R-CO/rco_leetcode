set_languages("c11", "cxx17")
if is_mode("debug") then
	set_symbols("debug")
else
	add_cxxflags("-O2")
end

add_cxxflags("-Wall", "-Wextra", "-Werror")

add_requires("gtest")
add_packages("gtest")

if is_plat("linux") then
	add_syslinks("pthread")
end

target("all_unit_test")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/**.cpp")
	del_files("src/test_template.cpp")
target_end()

target("test_template")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/test_template.cpp")
target_end()

target("1")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/1_two_sum_test.cpp")
target_end()

target("110")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/110_balanced_binary_tree_test.cpp")
target_end()
