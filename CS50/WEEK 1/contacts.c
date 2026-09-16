#include<cs50.h>
#include<studio.h>

int main (void)
{
    //name, age, phone number, location
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    int phone  = get_int("Phone number: ");
    string location = get_string("Location: ");

    printf("New Contact: %s, %i, lives int %i, and you can call at %s\n", name, age, phone, location);
}
