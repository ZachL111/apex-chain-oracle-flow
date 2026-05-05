#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {75, 105, 12, 11, 13};
    assert(score_signal(signal_case_1) == 230);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {90, 83, 8, 12, 8};
    assert(score_signal(signal_case_2) == 215);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {76, 78, 25, 6, 13};
    assert(score_signal(signal_case_3) == 209);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
