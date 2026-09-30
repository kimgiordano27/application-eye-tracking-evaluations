/*
FUNCTION_NAME: FUN_065f2cd4
ENTRY_POINT: 065f2cd4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_065f2cd4(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  float local_6c;
  long local_68;
  long local_58;
  
  puVar2 = PTR_DAT_070f1d98;
  if ((DAT_075578e1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1980);
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundPositionKeyword_TypeInfo);
    FUN_03188a78(Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot___TypeInfo);
    FUN_03188a78(PTR_DAT_070f1d98);
    FUN_03188a78(PTR_DAT_070f1868);
    FUN_03188a78(Oculus_Platform_Models_AchievementProgress_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundRepeat_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundSize_TypeInfo);
                    /* try { // try from 065f2d74 to 066f2d77 has its CatchHandler @ 065f2dd4 */
                    /* try { // try from 065f2d78 to 066f2d7b has its CatchHandler @ 065f2dd0 */
                    /* try { // try from 065f2d7c to 066f2d83 has its CatchHandler @ 065f29ac */
    FUN_03188a78(PTR_DAT_070f2938);
                    /* try { // try from 065f2d84 to 066f2d87 has its CatchHandler @ 065f2dbc */
                    /* try { // try from 065f2d88 to 066f2d8b has its CatchHandler @ 065f2db4 */
    FUN_03188a78(UnityEngine_UIElements_BackgroundSizeType_TypeInfo);
                    /* try { // try from 065f2d8c to 066f2d8f has its CatchHandler @ 065f2d9c */
                    /* catch() { ... } // from try @ 065f2cb0 with catch @ 065f2d90
                       try { // try from 065f2d90 to 066f2df7 has its CatchHandler @ 065f29ac */
    DAT_075578e1 = 1;
  }
  puVar3 = UnityEngine_UIElements_BackgroundPositionKeyword_TypeInfo;
                    /* catch() { ... } // from try @ 065f2cb4 with catch @ 065f2d94 */
                    /* catch() { ... } // from try @ 065f2c88 with catch @ 065f2d98 */
                    /* catch() { ... } // from try @ 065f2d8c with catch @ 065f2d9c */
  local_58 = 0;
                    /* catch() { ... } // from try @ 065f2c40 with catch @ 065f2da8 */
  local_68 = 0;
                    /* catch() { ... } // from try @ 065f2be0 with catch @ 065f2dac */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 065f2c08 with catch @ 065f2db0 */
    thunk_FUN_031e5338();
  }
                    /* catch() { ... } // from try @ 065f2d88 with catch @ 065f2db4 */
                    /* catch() { ... } // from try @ 065f2bc8 with catch @ 065f2db8 */
                    /* catch() { ... } // from try @ 065f2d84 with catch @ 065f2dbc */
  uVar5 = FUN_03ac5b54(&local_58,*(undefined8 *)puVar3);
  puVar3 = Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot___TypeInfo;
                    /* catch() { ... } // from try @ 065f2c5c with catch @ 065f2dc0 */
  if ((uVar5 & 1) == 0) {
    return 0;
  }
                    /* catch() { ... } // from try @ 065f2be4 with catch @ 065f2dc4 */
                    /* catch() { ... } // from try @ 065f2c44 with catch @ 065f2dc8 */
                    /* catch() { ... } // from try @ 065f2c24 with catch @ 065f2dcc */
                    /* catch() { ... } // from try @ 065f2d78 with catch @ 065f2dd0 */
                    /* catch() { ... } // from try @ 065f2d74 with catch @ 065f2dd4 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 065f2b88 with catch @ 065f2dd8 */
    thunk_FUN_031e5338();
  }
                    /* catch() { ... } // from try @ 065f2b24 with catch @ 065f2ddc */
  uVar5 = FUN_03ac5b54(&local_68,*(undefined8 *)puVar3);
  if ((uVar5 & 1) != 0) {
    if (local_68 == 0) goto LAB_065f3258;
                    /* try { // try from 065f2df8 to 066f2dfb has its CatchHandler @ 065f2e04 */
    if (*(char *)(local_68 + 0x1c) != '\0') {
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 065f2df8 with catch @ 065f2e04 */
                    /* try { // try from 065f2e08 to 066f2e0f has its CatchHandler @ 065f2e18 */
  if (local_58 != 0) {
                    /* try { // try from 065f2e10 to 066f2e1b has its CatchHandler @ 065f29ac */
    uVar7 = *(undefined8 *)(local_58 + 0x18);
                    /* catch() { ... } // from try @ 065f2e08 with catch @ 065f2e18 */
    if (*(int *)(*(long *)PTR_DAT_070f1980 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar6 = FUN_0662b7b8(uVar7,0);
    *(long *)(param_1 + 0x1a0) = lVar6;
    if ((lVar6 != 0) && (FUN_069a4cb0(lVar6,1,0), cVar4 = DAT_075457d6, local_58 != 0)) {
      lVar6 = *(long *)(local_58 + 0x38);
      *(long *)(param_1 + 0x1a8) = lVar6;
      if (cVar4 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      puVar2 = PTR_DAT_070c1a80;
      uVar7 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      uVar10 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
      if (DAT_075457b6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457b6 = '\x01';
      }
      fVar1 = DAT_012e39c8;
      if (lVar6 != 0) {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
        local_74 = CONCAT44((float)((ulong)uVar9 >> 0x20) * 1e+07 * 0.5,(float)uVar9 * 1e+07 * 0.5);
        local_6c = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) * DAT_012e39c8 * 0.5;
        local_80 = uVar7;
        local_78 = uVar10;
        FUN_069acd48(lVar6,&local_80,0);
        if (local_58 != 0) {
          uVar7 = FUN_0662b7b8(*(undefined8 *)(local_58 + 0x28),0);
          *(undefined8 *)(param_1 + 0x1b0) = uVar7;
          if (local_58 != 0) {
            lVar6 = FUN_0662b7b8(*(undefined8 *)(local_58 + 0x18),0);
            *(long *)(param_1 + 0x1b8) = lVar6;
            if (lVar6 != 0) {
              FUN_069a4cb0(lVar6,1,0);
              puVar3 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
              lVar6 = *(long *)Oculus_Platform_Models_AchievementProgress_TypeInfo;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar6 = *(long *)puVar3;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
              uVar7 = *(undefined8 *)PTR_DAT_070f2938;
              if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
              }
              uVar7 = FUN_0593e698(uVar7,0);
              if (*(int *)(*(long *)PTR_DAT_070f1868 + 0xe4) == 0) {
                thunk_FUN_031e5338(*(long *)PTR_DAT_070f1868);
              }
              uVar10 = thunk_FUN_0319313c(uVar7,0);
              uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
              FUN_069a776c(uVar7,0x10,2,uVar10,0);
              if ((lVar6 != 0) && (*(undefined8 *)(lVar6 + 0x30) = uVar7, local_58 != 0)) {
                uVar7 = *(undefined8 *)UnityEngine_UIElements_BackgroundSizeType_TypeInfo;
                uVar9 = *(undefined8 *)UnityEngine_UIElements_BackgroundSize_TypeInfo;
                *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(local_58 + 0x40);
                lVar6 = FUN_03c08564(uVar7,uVar9);
                cVar4 = DAT_075457d6;
                *(long *)(param_1 + 0x1c8) = lVar6;
                if (cVar4 == '\0') {
                  FUN_03188a78(PTR_DAT_070c1a80);
                  DAT_075457d6 = '\x01';
                }
                uVar7 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                uVar10 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
                if (DAT_075457b6 == '\0') {
                  FUN_03188a78(PTR_DAT_070c1a80);
                  DAT_075457b6 = '\x01';
                }
                if (lVar6 != 0) {
                  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
                  local_8c = CONCAT44((float)((ulong)uVar9 >> 0x20) * 1e+07 * 0.5,
                                      (float)uVar9 * 1e+07 * 0.5);
                  local_84 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) * fVar1 * 0.5;
                  local_98 = uVar7;
                  local_90 = uVar10;
                  FUN_069acd48(lVar6,&local_98,0);
                  if (local_58 != 0) {
                    lVar6 = FUN_0662b7b8(*(undefined8 *)(local_58 + 0x30),0);
                    *(long *)(param_1 + 0x1d0) = lVar6;
                    if ((lVar6 != 0) && (FUN_069a4cb0(lVar6,1,0), local_58 != 0)) {
                      uVar7 = FUN_0662b7b8(*(undefined8 *)(local_58 + 0x20),0);
                      puVar2 = UnityEngine_UIElements_BackgroundRepeat_TypeInfo;
                      lVar8 = *(long *)(param_1 + 0x188);
                      *(undefined8 *)(param_1 + 0x1d8) = uVar7;
                      lVar6 = *(long *)puVar2;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar6 = *(long *)puVar2;
                      }
                      if (lVar8 != 0) {
                        if (*(int *)(lVar8 + 0x18) != 0) {
                          uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30);
                          *(undefined8 *)(lVar8 + 0x28) =
                               *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38);
                          *(undefined8 *)(lVar8 + 0x20) = uVar7;
                          lVar6 = *(long *)(param_1 + 0x188);
                          if (lVar6 == 0) goto LAB_065f3258;
                          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                            uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
                            *(undefined8 *)(lVar6 + 0x38) =
                                 *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                            *(undefined8 *)(lVar6 + 0x30) = uVar7;
                            lVar6 = *(long *)(param_1 + 0x188);
                            if (lVar6 == 0) goto LAB_065f3258;
                            if (2 < *(uint *)(lVar6 + 0x18)) {
                              uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                              *(undefined8 *)(lVar6 + 0x48) =
                                   *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
                              *(undefined8 *)(lVar6 + 0x40) = uVar7;
                              lVar6 = *(long *)(param_1 + 0x188);
                              if (lVar6 == 0) goto LAB_065f3258;
                              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                                uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
                                *(undefined8 *)(lVar6 + 0x58) =
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
                                *(undefined8 *)(lVar6 + 0x50) = uVar7;
                                lVar6 = *(long *)(param_1 + 0x188);
                                if (lVar6 == 0) goto LAB_065f3258;
                                if (4 < *(uint *)(lVar6 + 0x18)) {
                                  uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
                                  *(undefined8 *)(lVar6 + 0x68) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
                                  *(undefined8 *)(lVar6 + 0x60) = uVar7;
                                  lVar6 = *(long *)(param_1 + 0x188);
                                  if (lVar6 == 0) goto LAB_065f3258;
                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                    uVar7 = *(undefined8 *)
                                             (*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
                                    *(undefined8 *)(lVar6 + 0x78) =
                                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
                                    *(undefined8 *)(lVar6 + 0x70) = uVar7;
                                    lVar6 = *(long *)(param_1 + 0x188);
                                    if (lVar6 == 0) goto LAB_065f3258;
                                    if (6 < *(uint *)(lVar6 + 0x18)) {
                                      uVar7 = *(undefined8 *)
                                               (*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                                      *(undefined8 *)(lVar6 + 0x88) =
                                           *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38)
                                      ;
                                      *(undefined8 *)(lVar6 + 0x80) = uVar7;
                                      return 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_03188ce0();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_065f3258:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


