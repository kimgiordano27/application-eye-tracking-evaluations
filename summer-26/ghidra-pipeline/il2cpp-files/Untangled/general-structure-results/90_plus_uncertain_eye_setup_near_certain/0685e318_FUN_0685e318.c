/*
FUNCTION_NAME: FUN_0685e318
ENTRY_POINT: 0685e318
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0685e318(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = OVRPlugin_OVRP_1_89_0_TypeInfo;
                    /* try { // try from 0685e32c to 0695e333 has its CatchHandler @ 0685e4c0 */
  if ((DAT_071d6b79 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d39e48);
    FUN_02f07e70(PTR_DAT_06d39e50);
    FUN_02f07e70(OVRPlugin_OVRP_1_91_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_89_0_TypeInfo);
                    /* try { // try from 0685e38c to 0695e393 has its CatchHandler @ 0685e4d8 */
    DAT_071d6b79 = 1;
  }
  *(undefined4 *)(param_2 + 0x410) = param_4;
  *(undefined4 *)(param_2 + 0x414) = param_3;
  *(undefined4 *)(param_2 + 0x418) = param_1;
  lVar7 = *(long *)(param_2 + 0x408);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (lVar7 != 0) {
    FUN_068cbc54(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),0);
    if (*(long *)(param_2 + 0x408) != 0) {
      FUN_068cbc54(*(long *)(param_2 + 0x408),
                   *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40),0);
      lVar7 = *(long *)puVar1;
                    /* try { // try from 0685e3ec to 0695e3f3 has its CatchHandler @ 0685e4d4 */
      iVar4 = *(int *)(param_2 + 0x410);
      lVar8 = *(long *)(param_2 + 0x408);
                    /* try { // try from 0685e3f4 to 0695e3ff has its CatchHandler @ 0685dc14 */
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
                    /* try { // try from 0685e400 to 0695e403 has its CatchHandler @ 0685e57c */
        lVar7 = *(long *)puVar1;
      }
                    /* try { // try from 0685e404 to 0695e407 has its CatchHandler @ 0685e56c */
                    /* try { // try from 0685e408 to 0695e40b has its CatchHandler @ 0685e554 */
      if (iVar4 == 0) {
                    /* try { // try from 0685e418 to 0695e41b has its CatchHandler @ 0685e564 */
        if (lVar8 == 0) goto LAB_0685e63c;
                    /* try { // try from 0685e41c to 0695e423 has its CatchHandler @ 0685e54c */
        lVar6 = 0x48;
      }
      else {
                    /* try { // try from 0685e40c to 0695e413 has its CatchHandler @ 0685e568 */
        if (lVar8 == 0) goto LAB_0685e63c;
        lVar6 = 0x40;
                    /* try { // try from 0685e414 to 0695e417 has its CatchHandler @ 0685e524 */
      }
                    /* try { // try from 0685e424 to 0695e427 has its CatchHandler @ 0685e564 */
                    /* try { // try from 0685e428 to 0695e42b has its CatchHandler @ 0685e560 */
                    /* try { // try from 0685e42c to 0695e42f has its CatchHandler @ 0685e548 */
      FUN_068cbd7c(lVar8,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + lVar6),0);
                    /* try { // try from 0685e430 to 0695e433 has its CatchHandler @ 0685e518 */
                    /* try { // try from 0685e434 to 0695e43b has its CatchHandler @ 0685e544 */
      lVar7 = *(long *)(param_2 + 0x3f8);
                    /* try { // try from 0685e43c to 0695e43f has its CatchHandler @ 0685e514 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0685e440 to 0695e443 has its CatchHandler @ 0685e55c */
        thunk_FUN_02f12b58();
      }
                    /* try { // try from 0685e444 to 0695e447 has its CatchHandler @ 0685e510 */
      if (lVar7 != 0) {
                    /* try { // try from 0685e448 to 0695e44b has its CatchHandler @ 0685e540 */
                    /* try { // try from 0685e44c to 0695e44f has its CatchHandler @ 0685e500 */
                    /* try { // try from 0685e450 to 0695e453 has its CatchHandler @ 0685e558 */
                    /* try { // try from 0685e454 to 0695e457 has its CatchHandler @ 0685e4f8 */
                    /* try { // try from 0685e458 to 0695e45b has its CatchHandler @ 0685e4f4 */
                    /* try { // try from 0685e45c to 0695e45f has its CatchHandler @ 0685e4f0 */
        FUN_068cbc54(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38),0);
                    /* try { // try from 0685e460 to 0695e463 has its CatchHandler @ 0685e4e8 */
                    /* try { // try from 0685e464 to 0695e467 has its CatchHandler @ 0685e53c */
        if (*(long *)(param_2 + 0x3f8) != 0) {
                    /* try { // try from 0685e468 to 0695e46b has its CatchHandler @ 0685e4e4 */
                    /* try { // try from 0685e46c to 0695e473 has its CatchHandler @ 0685e51c */
                    /* try { // try from 0685e474 to 0695e477 has its CatchHandler @ 0685e508 */
                    /* try { // try from 0685e478 to 0695e47f has its CatchHandler @ 0685e534 */
          FUN_068cbc54(*(long *)(param_2 + 0x3f8),
                       *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),0);
          lVar7 = *(long *)puVar1;
                    /* try { // try from 0685e480 to 0695e483 has its CatchHandler @ 0685e4fc */
          iVar4 = *(int *)(param_2 + 0x410);
                    /* try { // try from 0685e484 to 0695e48b has its CatchHandler @ 0685e530 */
          lVar8 = *(long *)(param_2 + 0x3f8);
                    /* try { // try from 0685e48c to 0695e493 has its CatchHandler @ 0685e52c */
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
                    /* try { // try from 0685e494 to 0695e497 has its CatchHandler @ 0685e4d0 */
            lVar7 = *(long *)puVar1;
          }
                    /* try { // try from 0685e498 to 0695e49b has its CatchHandler @ 0685e4cc */
                    /* try { // try from 0685e49c to 0695e49f has its CatchHandler @ 0685e4c4 */
          if (iVar4 == 0) {
                    /* try { // try from 0685e4ac to 0695e4b3 has its CatchHandler @ 0685e4d8 */
            if (lVar8 == 0) goto LAB_0685e63c;
            lVar6 = 0x38;
          }
          else {
                    /* try { // try from 0685e4a0 to 0695e4a7 has its CatchHandler @ 0685e4dc */
            if (lVar8 == 0) goto LAB_0685e63c;
            lVar6 = 0x30;
                    /* try { // try from 0685e4a8 to 0695e4ab has its CatchHandler @ 0685e4c0 */
          }
                    /* try { // try from 0685e4b4 to 0695e4bb has its CatchHandler @ 0685e4d4 */
                    /* catch() { ... } // from try @ 0685e180 with catch @ 0685e4bc
                       try { // try from 0685e4bc to 0695e597 has its CatchHandler @ 0685dc14 */
                    /* catch() { ... } // from try @ 0685e32c with catch @ 0685e4c0
                       catch() { ... } // from try @ 0685e4a8 with catch @ 0685e4c0 */
          FUN_068cbd7c(lVar8,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + lVar6),0);
                    /* catch() { ... } // from try @ 0685e1bc with catch @ 0685e4c4
                       catch() { ... } // from try @ 0685e49c with catch @ 0685e4c4 */
                    /* catch() { ... } // from try @ 0685e184 with catch @ 0685e4c8 */
          lVar7 = *(long *)(param_2 + 0x3f0);
                    /* catch() { ... } // from try @ 0685e498 with catch @ 0685e4cc */
                    /* catch() { ... } // from try @ 0685e494 with catch @ 0685e4d0 */
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0685e3ec with catch @ 0685e4d4
                       catch() { ... } // from try @ 0685e4b4 with catch @ 0685e4d4 */
            thunk_FUN_02f12b58();
          }
                    /* catch() { ... } // from try @ 0685e38c with catch @ 0685e4d8
                       catch() { ... } // from try @ 0685e4ac with catch @ 0685e4d8 */
          if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 0685e210 with catch @ 0685e4dc
                       catch() { ... } // from try @ 0685e310 with catch @ 0685e4dc
                       catch() { ... } // from try @ 0685e4a0 with catch @ 0685e4dc */
                    /* catch() { ... } // from try @ 0685de30 with catch @ 0685e4e0 */
                    /* catch() { ... } // from try @ 0685e468 with catch @ 0685e4e4 */
                    /* catch() { ... } // from try @ 0685e460 with catch @ 0685e4e8 */
                    /* catch() { ... } // from try @ 0685de6c with catch @ 0685e4ec */
                    /* catch() { ... } // from try @ 0685e45c with catch @ 0685e4f0 */
            FUN_068cbc54(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20),0);
                    /* catch() { ... } // from try @ 0685e458 with catch @ 0685e4f4 */
                    /* catch() { ... } // from try @ 0685e454 with catch @ 0685e4f8 */
            if (*(long *)(param_2 + 0x3f0) != 0) {
                    /* catch() { ... } // from try @ 0685e254 with catch @ 0685e4fc
                       catch() { ... } // from try @ 0685e480 with catch @ 0685e4fc */
                    /* catch() { ... } // from try @ 0685e44c with catch @ 0685e500 */
                    /* catch() { ... } // from try @ 0685e080 with catch @ 0685e504 */
                    /* catch() { ... } // from try @ 0685df2c with catch @ 0685e508
                       catch() { ... } // from try @ 0685e474 with catch @ 0685e508 */
                    /* catch() { ... } // from try @ 0685df08 with catch @ 0685e50c */
              FUN_068cbc54(*(long *)(param_2 + 0x3f0),
                           *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
                    /* catch() { ... } // from try @ 0685e444 with catch @ 0685e510 */
              lVar7 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 0685e43c with catch @ 0685e514 */
              iVar4 = *(int *)(param_2 + 0x410);
                    /* catch() { ... } // from try @ 0685e430 with catch @ 0685e518 */
              lVar8 = *(long *)(param_2 + 0x3f0);
                    /* catch() { ... } // from try @ 0685e46c with catch @ 0685e51c */
                    /* catch() { ... } // from try @ 0685ddf4 with catch @ 0685e520 */
              if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0685e414 with catch @ 0685e524 */
                thunk_FUN_02f12b58();
                    /* catch() { ... } // from try @ 0685df98 with catch @ 0685e528 */
                lVar7 = *(long *)puVar1;
              }
                    /* catch() { ... } // from try @ 0685e2f8 with catch @ 0685e52c
                       catch() { ... } // from try @ 0685e48c with catch @ 0685e52c */
                    /* catch() { ... } // from try @ 0685e2b4 with catch @ 0685e530
                       catch() { ... } // from try @ 0685e484 with catch @ 0685e530 */
              if (iVar4 == 0) {
                    /* catch() { ... } // from try @ 0685e07c with catch @ 0685e540
                       catch() { ... } // from try @ 0685e448 with catch @ 0685e540 */
                if (lVar8 == 0) goto LAB_0685e63c;
                    /* catch() { ... } // from try @ 0685e434 with catch @ 0685e544 */
                lVar6 = 0x20;
              }
              else {
                    /* catch() { ... } // from try @ 0685df80 with catch @ 0685e534
                       catch() { ... } // from try @ 0685e238 with catch @ 0685e534
                       catch() { ... } // from try @ 0685e478 with catch @ 0685e534 */
                if (lVar8 == 0) goto LAB_0685e63c;
                    /* catch() { ... } // from try @ 0685decc with catch @ 0685e538
                       catch() { ... } // from try @ 0685e140 with catch @ 0685e538 */
                lVar6 = 0x18;
                    /* catch() { ... } // from try @ 0685dea8 with catch @ 0685e53c
                       catch() { ... } // from try @ 0685e464 with catch @ 0685e53c */
              }
                    /* catch() { ... } // from try @ 0685e010 with catch @ 0685e548
                       catch() { ... } // from try @ 0685e42c with catch @ 0685e548 */
                    /* catch() { ... } // from try @ 0685e41c with catch @ 0685e54c */
                    /* catch() { ... } // from try @ 0685ddc0 with catch @ 0685e550 */
                    /* catch() { ... } // from try @ 0685e408 with catch @ 0685e554 */
              FUN_068cbd7c(lVar8,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + lVar6),0);
                    /* catch() { ... } // from try @ 0685e0c4 with catch @ 0685e558
                       catch() { ... } // from try @ 0685e450 with catch @ 0685e558 */
                    /* catch() { ... } // from try @ 0685e038 with catch @ 0685e55c
                       catch() { ... } // from try @ 0685e440 with catch @ 0685e55c */
              if (*(long *)(param_2 + 0x420) != 0) {
                    /* catch() { ... } // from try @ 0685dfc8 with catch @ 0685e560
                       catch() { ... } // from try @ 0685e428 with catch @ 0685e560 */
                    /* catch() { ... } // from try @ 0685dfc4 with catch @ 0685e564
                       catch() { ... } // from try @ 0685e418 with catch @ 0685e564
                       catch() { ... } // from try @ 0685e424 with catch @ 0685e564 */
                    /* catch() { ... } // from try @ 0685e40c with catch @ 0685e568 */
                    /* catch() { ... } // from try @ 0685e404 with catch @ 0685e56c */
                FUN_067e7a14(*(undefined8 *)(param_2 + 0x3f8),*(long *)(param_2 + 0x420),0);
                    /* catch() { ... } // from try @ 0685dd88 with catch @ 0685e570 */
                    /* catch() { ... } // from try @ 0685dd64 with catch @ 0685e574 */
                    /* catch() { ... } // from try @ 0685dd44 with catch @ 0685e578 */
                *(undefined8 *)(param_2 + 0x420) = 0;
                    /* catch() { ... } // from try @ 0685e400 with catch @ 0685e57c */
                thunk_FUN_02f411dc(param_2 + 0x420,0);
              }
              puVar3 = OVRPlugin_OVRP_1_91_0_TypeInfo;
              puVar2 = PTR_DAT_06d39e50;
              puVar1 = PTR_DAT_06d39e48;
                    /* catch() { ... } // from try @ 0685dd24 with catch @ 0685e580 */
              if (*(long *)(param_2 + 0x408) != 0) {
                    /* try { // try from 0685e598 to 0695e59b has its CatchHandler @ 0685e5b0 */
                iVar4 = FUN_068d0c94(*(long *)(param_2 + 0x408),0);
                if (iVar4 == 2) {
                    /* catch() { ... } // from try @ 0685e598 with catch @ 0685e5b0 */
                    /* try { // try from 0685e5b4 to 0695e5d3 has its CatchHandler @ 0685e5e8 */
                  FUN_0685e640(param_2);
                }
                else {
                  uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                    /* try { // try from 0685e5d4 to 0695e5df has its CatchHandler @ 0685dc14 */
                  FUN_05025f00(uVar5,param_2,*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo,0);
                    /* try { // try from 0685e5e0 to 0695e5e7 has its CatchHandler @ 0685e5e8 */
                    /* catch() { ... } // from try @ 0685e5b4 with catch @ 0685e5e8
                       catch() { ... } // from try @ 0685e5e0 with catch @ 0685e5e8 */
                  FUN_037e93c4(param_2,uVar5,0,*(undefined8 *)puVar1);
                }
                lVar7 = *(long *)(param_2 + 0x3f8);
                uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                FUN_05025f00(uVar5,param_2,*(undefined8 *)puVar3,0);
                if (lVar7 != 0) {
                  FUN_037e93c4(lVar7,uVar5,0,*(undefined8 *)puVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0685e63c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


