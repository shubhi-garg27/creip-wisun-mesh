#include <stdio.h>
#include "self_healing.h"

void reroute_if_needed(int score)
{
    if(score < 60)
    {
        printf("ALERT: Route degradation predicted\n");
        printf("Initiating self-healing...\n");
        printf("Alternative path selected\n");
    }
}
