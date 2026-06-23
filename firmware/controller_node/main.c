#include <stdio.h>

#include "route_manager.h"
#include "self_healing.h"

int main(void)
{
    int score;

    score = calculate_link_score(
                -85,
                15,
                12,
                60,
                75);

    printf("Link Score = %d\n", score);

    reroute_if_needed(score);

    return 0;
}
