#include <iostream>

#include "boost/filesystem.hpp"
using namespace std;

int main(int argc, char* argv[])
{
	boost::filesystem::path p(".");
	boost::filesystem::recursive_directory_iterator end_itr;

	for (boost::filesystem::recursive_directory_iterator itr(p); itr != end_itr; ++itr)
	{
		if (boost::filesystem::is_regular_file(itr->path()))
		{
			string current_file = itr->path().string();
			string four_extension = current_file.substr(current_file.length() - 4);
			string three_extension = current_file.substr(current_file.length() - 3);
			string two_extension = current_file.substr(current_file.length() - 2);
			if (four_extension == ".cpp" || three_extension == ".cc" || two_extension == ".c")
			cout << current_file << endl;
		}

	}

}
