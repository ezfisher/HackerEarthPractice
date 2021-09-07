/* Program to determine the seat across from anyother seat on a train */

#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
int SeatAcross(int passenger_seat, int period)
{
    /*Determine seat number across from passenger*/
    int reference_seat, cross_ref_seat, across;
    reference_seat = passenger_seat % period;

    if (reference_seat==0)
    {
        reference_seat += 12;
    }

    cross_ref_seat = period + 1 - reference_seat;
    if (reference_seat > 6)
    {
        return passenger_seat - abs(reference_seat - cross_ref_seat);
    }
    else
    {
        return passenger_seat + abs(reference_seat - cross_ref_seat);
    }
}

string SeatType(int mod)
{
    // Look up the seat type based on the seat number
    // This map is specific to seating arrangement of 3 seats on either side of an aisle.
    map<int, string> seat_type{{0, "WS"}, {1, "WS"},
        {2, "MS"}, {3, "AS"}, {4, "AS"}, {5, "MS"}};
    return seat_type[mod];
}

int main()
{
    int across, test_cases, n_test = 0;
    vector<int> passenger_seat;
    int period = 12;
    int seat;
    int seat_key;

    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        cin >> seat;
        passenger_seat.push_back(seat);
    }
    
    while (n_test < test_cases)
    {
        across = SeatAcross(passenger_seat[n_test], period);
        seat_key = passenger_seat[n_test] % (period/2);
        cout << across << " " << SeatType(seat_key) << "\n";
        n_test++;
    }
    return 0;
}