int main (void)
{
    int n;
    while (true)
    {
        n = get_int("What's n? ");
        if (!(n < 0 ))
        {
            break;
        }
    }
}