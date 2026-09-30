/*
FUNCTION_NAME: FUN_070cc334
ENTRY_POINT: 070cc334
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_070cc334(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* try { // try from 070cc338 to 071cc33f has its CatchHandler @ 070cc47c */
                    /* try { // try from 070cc340 to 071cc347 has its CatchHandler @ 070cc474 */
                    /* try { // try from 070cc348 to 071cc34f has its CatchHandler @ 070cc470 */
                    /* try { // try from 070cc350 to 071cc357 has its CatchHandler @ 070cc46c */
                    /* try { // try from 070cc358 to 071cc35f has its CatchHandler @ 070cc468 */
                    /* try { // try from 070cc360 to 071cc367 has its CatchHandler @ 070cc460 */
  if ((DAT_07a5a976 & 1) == 0) {
                    /* try { // try from 070cc368 to 071cc36f has its CatchHandler @ 070cc45c */
    FUN_031f20f4(OVRPlugin_OVRP_1_111_0_TypeInfo);
                    /* try { // try from 070cc370 to 071cc377 has its CatchHandler @ 070cc458 */
    DAT_07a5a976 = 1;
  }
                    /* try { // try from 070cc378 to 071cc37f has its CatchHandler @ 070cc454 */
  local_90 = param_4[6];
  uStack_a8 = param_4[3];
  local_b0 = param_4[2];
  uStack_98 = param_4[5];
  uStack_a0 = param_4[4];
                    /* try { // try from 070cc380 to 071cc387 has its CatchHandler @ 070cc450 */
  uStack_b8 = param_4[1];
  local_c0 = *param_4;
                    /* try { // try from 070cc388 to 071cc38f has its CatchHandler @ 070cc44c */
                    /* try { // try from 070cc390 to 071cc397 has its CatchHandler @ 070cc448 */
                    /* try { // try from 070cc398 to 071cc39f has its CatchHandler @ 070cc444 */
                    /* try { // try from 070cc3a0 to 071cc3a7 has its CatchHandler @ 070cc440 */
  FUN_06fd0580(param_1,param_2,param_3,&local_c0,0);
                    /* try { // try from 070cc3a8 to 071cc3af has its CatchHandler @ 070cc43c */
                    /* try { // try from 070cc3b0 to 071cc3b7 has its CatchHandler @ 070cc438 */
  plVar5 = *(long **)(param_1 + 0x88);
                    /* try { // try from 070cc3b8 to 071cc3bf has its CatchHandler @ 070cc434 */
                    /* try { // try from 070cc3c0 to 071cc3c7 has its CatchHandler @ 070cc430 */
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 070cc3c8 to 071cc3cf has its CatchHandler @ 070cc42c */
                    /* try { // try from 070cc3d0 to 071cc3d7 has its CatchHandler @ 070cc428 */
                    /* try { // try from 070cc3d8 to 071cc3df has its CatchHandler @ 070cc424 */
                    /* try { // try from 070cc3e0 to 071cc3e7 has its CatchHandler @ 070cc420 */
                    /* try { // try from 070cc3e8 to 071cc3ef has its CatchHandler @ 070cc41c */
    local_80 = *param_4;
    uStack_78 = param_4[1];
    uStack_70 = param_4[2];
    uStack_68 = param_4[3];
    local_60 = param_4[4];
    uStack_58 = param_4[5];
    local_50 = param_4[6];
                    /* try { // try from 070cc3f0 to 071cc3f7 has its CatchHandler @ 070cc418 */
    uVar2 = (**(code **)(*plVar5 + 0x178))
                      (plVar5,param_3,&local_80,*(undefined8 *)(*plVar5 + 0x180));
                    /* try { // try from 070cc3f8 to 071cc3ff has its CatchHandler @ 070cc414 */
                    /* try { // try from 070cc400 to 071cc407 has its CatchHandler @ 070cc410 */
                    /* try { // try from 070cc408 to 071cc51f has its CatchHandler @ 070cb4a0 */
    plVar5 = *(long **)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 070cc2cc with catch @ 070cc40c */
                    /* catch() { ... } // from try @ 070cc400 with catch @ 070cc410 */
                    /* catch() { ... } // from try @ 070cc3f8 with catch @ 070cc414 */
                    /* catch() { ... } // from try @ 070cc3f0 with catch @ 070cc418 */
    if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 070cc3e8 with catch @ 070cc41c */
                    /* catch() { ... } // from try @ 070cc3e0 with catch @ 070cc420 */
                    /* catch() { ... } // from try @ 070cc3d8 with catch @ 070cc424 */
                    /* catch() { ... } // from try @ 070cc3d0 with catch @ 070cc428 */
                    /* catch() { ... } // from try @ 070cc3c8 with catch @ 070cc42c */
                    /* catch() { ... } // from try @ 070cc3c0 with catch @ 070cc430 */
                    /* catch() { ... } // from try @ 070cc3b8 with catch @ 070cc434 */
                    /* catch() { ... } // from try @ 070cc3b0 with catch @ 070cc438 */
                    /* catch() { ... } // from try @ 070cc3a8 with catch @ 070cc43c */
                    /* catch() { ... } // from try @ 070cc3a0 with catch @ 070cc440 */
      local_80 = *param_4;
      uStack_78 = param_4[1];
      uStack_70 = param_4[2];
      uStack_68 = param_4[3];
      local_60 = param_4[4];
      uStack_58 = param_4[5];
      local_50 = param_4[6];
                    /* catch() { ... } // from try @ 070cc398 with catch @ 070cc444 */
                    /* catch() { ... } // from try @ 070cc390 with catch @ 070cc448 */
      iVar3 = (**(code **)(*plVar5 + 0x178))
                        (plVar5,param_3,&local_80,*(undefined8 *)(*plVar5 + 0x180));
                    /* catch() { ... } // from try @ 070cc388 with catch @ 070cc44c */
                    /* catch() { ... } // from try @ 070cc380 with catch @ 070cc450 */
                    /* catch() { ... } // from try @ 070cc378 with catch @ 070cc454 */
                    /* catch() { ... } // from try @ 070cc370 with catch @ 070cc458 */
                    /* catch() { ... } // from try @ 070cc368 with catch @ 070cc45c */
      plVar5 = *(long **)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 070cc360 with catch @ 070cc460 */
                    /* catch() { ... } // from try @ 070cb8c4 with catch @ 070cc464
                       catch() { ... } // from try @ 070cc2c4 with catch @ 070cc464 */
                    /* catch() { ... } // from try @ 070cc358 with catch @ 070cc468 */
                    /* catch() { ... } // from try @ 070cc350 with catch @ 070cc46c */
      if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 070cc348 with catch @ 070cc470 */
                    /* catch() { ... } // from try @ 070cc340 with catch @ 070cc474 */
                    /* catch() { ... } // from try @ 070cbed8 with catch @ 070cc478 */
                    /* catch() { ... } // from try @ 070cc338 with catch @ 070cc47c */
                    /* catch() { ... } // from try @ 070cc330 with catch @ 070cc480 */
                    /* catch() { ... } // from try @ 070cb62c with catch @ 070cc484
                       catch() { ... } // from try @ 070cbed0 with catch @ 070cc484 */
                    /* catch() { ... } // from try @ 070cbda0 with catch @ 070cc488
                       catch() { ... } // from try @ 070cc240 with catch @ 070cc488 */
                    /* catch() { ... } // from try @ 070cb9e8 with catch @ 070cc48c
                       catch() { ... } // from try @ 070cbfac with catch @ 070cc48c */
                    /* catch() { ... } // from try @ 070cbaf8 with catch @ 070cc490
                       catch() { ... } // from try @ 070cc05c with catch @ 070cc490 */
                    /* catch() { ... } // from try @ 070cbd5c with catch @ 070cc494
                       catch() { ... } // from try @ 070cc214 with catch @ 070cc494 */
        local_80 = *param_4;
        uStack_78 = param_4[1];
        uStack_70 = param_4[2];
        uStack_68 = param_4[3];
        local_60 = param_4[4];
        uStack_58 = param_4[5];
        local_50 = param_4[6];
                    /* catch() { ... } // from try @ 070cbde4 with catch @ 070cc498
                       catch() { ... } // from try @ 070cc26c with catch @ 070cc498 */
                    /* catch() { ... } // from try @ 070cb68c with catch @ 070cc49c
                       catch() { ... } // from try @ 070cc10c with catch @ 070cc49c */
        uVar4 = (**(code **)(*plVar5 + 0x178))
                          (plVar5,param_3,&local_80,*(undefined8 *)(*plVar5 + 0x180));
                    /* catch() { ... } // from try @ 070cbd18 with catch @ 070cc4a0
                       catch() { ... } // from try @ 070cc1e8 with catch @ 070cc4a0 */
        if (param_2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 070cbc90 with catch @ 070cc4a4
                       catch() { ... } // from try @ 070cc190 with catch @ 070cc4a4 */
                    /* catch() { ... } // from try @ 070cbb80 with catch @ 070cc4a8
                       catch() { ... } // from try @ 070cc0b4 with catch @ 070cc4a8 */
                    /* catch() { ... } // from try @ 070cba2c with catch @ 070cc4ac
                       catch() { ... } // from try @ 070cbfd8 with catch @ 070cc4ac */
          lVar6 = *param_2;
                    /* catch() { ... } // from try @ 070cbcd4 with catch @ 070cc4b0
                       catch() { ... } // from try @ 070cc1bc with catch @ 070cc4b0 */
                    /* catch() { ... } // from try @ 070cbc08 with catch @ 070cc4b4
                       catch() { ... } // from try @ 070cc138 with catch @ 070cc4b4 */
                    /* catch() { ... } // from try @ 070cbab4 with catch @ 070cc4b8
                       catch() { ... } // from try @ 070cc030 with catch @ 070cc4b8 */
          bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_111_0_TypeInfo + 0x130);
                    /* catch() { ... } // from try @ 070cb960 with catch @ 070cc4bc
                       catch() { ... } // from try @ 070cbf54 with catch @ 070cc4bc */
                    /* catch() { ... } // from try @ 070cbbc4 with catch @ 070cc4c0
                       catch() { ... } // from try @ 070cc0e0 with catch @ 070cc4c0 */
                    /* catch() { ... } // from try @ 070cbe28 with catch @ 070cc4c4
                       catch() { ... } // from try @ 070cc298 with catch @ 070cc4c4 */
                    /* catch() { ... } // from try @ 070cba70 with catch @ 070cc4c8
                       catch() { ... } // from try @ 070cc004 with catch @ 070cc4c8 */
                    /* catch() { ... } // from try @ 070cbb3c with catch @ 070cc4cc
                       catch() { ... } // from try @ 070cc088 with catch @ 070cc4cc */
                    /* catch() { ... } // from try @ 070cbc4c with catch @ 070cc4d0
                       catch() { ... } // from try @ 070cc164 with catch @ 070cc4d0 */
                    /* catch() { ... } // from try @ 070cb9a4 with catch @ 070cc4d4
                       catch() { ... } // from try @ 070cbf80 with catch @ 070cc4d4 */
          if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)OVRPlugin_OVRP_1_111_0_TypeInfo)) {
                    /* catch() { ... } // from try @ 070cc328 with catch @ 070cc4d8 */
                    /* catch() { ... } // from try @ 070cb8f0 with catch @ 070cc4dc */
                    /* catch() { ... } // from try @ 070cb91c with catch @ 070cc4e0 */
                    /* catch() { ... } // from try @ 070cc320 with catch @ 070cc4e4 */
                    /* catch() { ... } // from try @ 070cb878 with catch @ 070cc4e8
                       catch() { ... } // from try @ 070cbf28 with catch @ 070cc4e8 */
                    /* catch() { ... } // from try @ 070cb7f0 with catch @ 070cc4ec
                       catch() { ... } // from try @ 070cbea4 with catch @ 070cc4ec */
                    /* catch() { ... } // from try @ 070cb768 with catch @ 070cc4f0
                       catch() { ... } // from try @ 070cbe4c with catch @ 070cc4f0 */
            (**(code **)(lVar6 + 0x9b8))
                      ((float)iVar3,param_2,uVar2,uVar4,*(undefined8 *)(lVar6 + 0x9c0));
                    /* catch() { ... } // from try @ 070cb834 with catch @ 070cc4f4
                       catch() { ... } // from try @ 070cbefc with catch @ 070cc4f4 */
                    /* catch() { ... } // from try @ 070cb7ac with catch @ 070cc4f8
                       catch() { ... } // from try @ 070cbe78 with catch @ 070cc4f8 */
                    /* catch() { ... } // from try @ 070cb724 with catch @ 070cc4fc
                       catch() { ... } // from try @ 070cb914 with catch @ 070cc4fc */
                    /* catch() { ... } // from try @ 070cb6e0 with catch @ 070cc500
                       catch() { ... } // from try @ 070cb8e8 with catch @ 070cc500 */
                    /* catch() { ... } // from try @ 070cb5bc with catch @ 070cc504 */
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(param_2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


