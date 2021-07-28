--[[
/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
]]
set_languages("c11", "cxx17")
if is_mode("debug") then
	set_symbols("debug")
	add_cxxflags("-O0")
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

-- 1. Two Sum
target("1")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/1_two_sum_test.cpp")
target_end()

-- 70. Climbing Stairs
target("70")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/70_climbing_stairs_test.cpp")
target_end()

-- 110. Balanced Binary Tree
target("110")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/110_balanced_binary_tree_test.cpp")
target_end()

-- 162. Find Peak Element
target("162")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/162_find_peak_element_test.cpp")
target_end()

-- 198. House Robber
target("198")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/198_house_robber_test.cpp")
target_end()

-- 213. House Robber II
target("213")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/213_house_robber_ii_test.cpp")
target_end()

-- 509. Finbonacci Number
target("509")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/509_fibonacci_number_test.cpp")
target_end()

-- 746. Min Cost Climbing Stairs
target("746")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/746_min_cost_climbing_stairs_test.cpp")
target_end()

-- 838. Push Dominoes
target("838")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/838_push_dominoes_test.cpp")
target_end()

-- 852. Peak Index in a Mountain Array
target("852")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/852_peak_index_in_a_mountain_array_test.cpp")
target_end()

-- 915. Partition Array into Disjoint Intervals
target("915")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/915_partition_array_into_disjoint_intervals_test.cpp")
target_end()

-- 1170. N-th Tribonacci Number
target("1170")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/1170_n_th_tribonacci_number_test.cpp")
target_end()
