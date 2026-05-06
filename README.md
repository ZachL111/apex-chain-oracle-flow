# apex-chain-oracle-flow

`apex-chain-oracle-flow` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for oracle visual model generation, using layout fixtures and stable geometry snapshots.

## Why I Keep It Small

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Apex Chain Oracle Flow Review Notes

The first comparison I would make is `proof depth` against `nonce pressure` because it shows where the rule is most opinionated.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/apex-chain-oracle-walkthrough.md` walks through the case spread.
- The C code includes a review path for `proof depth` and `nonce pressure`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C addition stays small enough to inspect in one sitting.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Scope

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
