#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {52, 48, 32, 81};
    assert(domain_review_score(item) == 137);
    assert(strcmp(domain_review_lane(item), "watch") == 0);
    return 0;
}
