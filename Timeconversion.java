/* 
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

s: a string representing time in  hour format
Input Format

A single string  containing a time in -hour clock format (i.e.:  or ), where  and .

Constraints

All input times are valid
Output Format

Convert and print the given time in -hour format, where .

Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
  
  public static void main(String[] args) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    
    Scanner input = new Scanner(System.in);
    String inputTime = input.nextLine();
    String [] tempArray = inputTime.split(":");
    String hours = tempArray[0];
    String minutes = tempArray[1];
    String seconds = tempArray[2].substring(0, 2);
    
    int tempHours;
    
    if (tempArray[2].substring(2, 4).equalsIgnoreCase("PM")) {
      if (Integer.parseInt(hours) < 12) {
        tempHours = Integer.parseInt(hours);
        tempHours += 12;
        hours = Integer.toString(tempHours);
      }
    }
    if (tempArray[2].substring(2, 4).equalsIgnoreCase("AM")) {
      if (Integer.parseInt(hours) == 12) {
        hours = "00";
      }
    }
    System.out.println(hours + ":" + minutes + ":" + seconds);
    
    
  }
}
