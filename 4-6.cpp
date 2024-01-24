/* A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies. 
Write a program that prompts the user to enter the total number of cookies, 
the number of cookies in a box, and the number of cookie boxes in a container. 
The program then outputs the number of boxes and the number of containers to ship the cookies. 
Note that each box must contain the specified number of cookies, and each container must contain the 
specified number of boxes. If the last box of cookies contains less than the number of specified cookies, 
you can discard it and output the number of leftover cookies. Similarly, if the last container contains less 
than the number of specified boxes, you can discard it and output the number of leftover boxes.*/
#include <iostream>

using namespace std;

int main()
{
    // Constants
    const int box_cookies = 24;
    const int container_cookie_box = 75;

    // Variables
    int total_cookies;
    int total_cookie_in_box;
    int num_cookie_box_in_container;

    // Prompts the user to enter the total number of cookies
    cout << "Enter total number of cookies: ";
    cin >> total_cookies;
    cout << endl;

    // Prompts the user the number of cookies in a box
    cout << "Enter the total number of cookies in a box: ";
    cin >> total_cookie_in_box;
    cout << endl;

    // Prompts the user the number of cookie boxes in a container.
    cout << "Enter the number of cookie boxes in a container: ";
    cin >> num_cookie_box_in_container;
    cout << endl;

    // Calculate the number of boxes
    int num_boxes = total_cookies / total_cookie_in_box;
    
    // Calculate the number of leftover cookies
    int leftover_cookies = total_cookies % total_cookie_in_box;

    // Calculate the number of containers
    int num_containers = num_boxes / num_cookie_box_in_container;

    // Calculate the number of leftover boxes
    int leftover_boxes = num_boxes % num_cookie_box_in_container;

    // Output the results
    cout << "Number of boxes: " << num_boxes << endl;
    cout << "Number of leftover cookies: " << leftover_cookies << endl;
    cout << "Number of containers: " << num_containers << endl;
    cout << "Number of leftover boxes: " << leftover_boxes << endl;

    return 0;
}
