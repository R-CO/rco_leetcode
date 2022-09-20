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

-- 36. Valid Sudoku
target("36")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/36_valid_sudoku_test.cpp")
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

-- 113. Path Sum II
target("113")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/113_path_sum_ii_test.cpp")
target_end()

-- 118. Pascal's Triangle
target("118")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/118_pascals_triangle_test.cpp")
target_end()

-- 134. Gas Station
target("134")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/134_gas_station_test.cpp")
target_end()

-- 136. Single Number
target("136")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/136_single_number_test.cpp")
target_end()

-- 143. Reorder List
target("143")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/143_reorder_list_test.cpp")
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

-- 202. Happy Number
target("202")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/202_happy_number_test.cpp")
target_end()

-- 213. House Robber II
target("213")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/213_house_robber_ii_test.cpp")
target_end()

-- 238. Product of Array Except Self
target("238")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/238_product_of_array_except_self_test.cpp")
target_end()

-- 303. Range Sum Query Immutable
target("322")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/303_range_sum_query_immutable_test.cpp")
target_end()

-- 322. Coin Change
target("322")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/322_coin_change_test.cpp")
target_end()

-- 347. Top K Frequent Elements
target("347")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/347_top_k_frequent_elements_test.cpp")
target_end()

-- 387. First Unique Character in a String
target("387")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/387_first_unique_character_in_a_string_test.cpp")
target_end()

-- 404. Sum of Left Leaves
target("404")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/404_sum_of_left_leaves_test.cpp")
target_end()

-- 429. N-ary Tree Level Order Traversal
target("429")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/429_n-ary_tree_level_order_traversal_test.cpp")
target_end()

-- 461. Hamming Distance
target("461")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/461_hamming_distance_test.cpp")
target_end()

-- 509. Finbonacci Number
target("509")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/509_fibonacci_number_test.cpp")
target_end()

-- 653. Two Sum IV - Input is a BST
target("653")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/653_two_sum_iv___input_is_a_bst_test.cpp")
target_end()

-- 677. Map Sum Pairs
target("677")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/677_map_sum_pairs_test.cpp")
target_end()

-- 709. To Lower Case
target("709")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/709_to_lower_case_test.cpp")
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

-- 1290. Convert Binary Number in a Linked List to Integer
target("1290")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/1290_convert_binary_number_in_a_linked_list_to_integer_test.cpp")
target_end()

-- 1365. How Many Numbers Are Smaller Than the Current Number
target("1365")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/1365_how_many_numbers_are_smaller_than_the_current_number_test.cpp")
target_end()

-- 1448. Count Good Nodes in Binary Tree
target("1448")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/1448_count_good_nodes_in_binary_tree_test.cpp")
target_end()

-- 1701. Average Waiting Time
target("1701")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/medium/1701_average_waiting_time_test.cpp")
target_end()

-- 1929. Concatenation of Array
target("1929")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/1929_concatenation_of_array_test.cpp")
target_end()

-- 2085. Count Common Words With One Occurrence
target("2085")
	set_kind("binary")

	add_files("unit_test/unit_test_main.cpp")
	add_files("src/easy/2085_count_common_words_with_one_occurrence_test.cpp")
target_end()
