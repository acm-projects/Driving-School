/******************************************************************************
 * DATE:       9/26/2020
 * 
 * DESCRIPTION:
 * The purpose is to simply access the contents of the OSM file.
 ****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>



int main() {

   //Create newFile object and open file
   std::ifstream newFile("map.osm");

   //Verify that the file successfully opened. If successful, outputs the whole OSM file
   if (!newFile) {
      std::cout << "Error: failed to open the file" << std::endl;
   }
   else {
      std::string str;

      while (newFile) {
         std::getline(newFile, str);
         std::cout << str << std::endl;
      }
   }

   
   std::cout << std::endl;
   return 0;
}