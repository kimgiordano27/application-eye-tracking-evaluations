/*
FUNCTION_NAME: UnityEngine.Texture2DArray$$.ctor
ENTRY_POINT: 068b7604
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_Texture2DArray___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_075591d8 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f3178);
    FUN_03188a78(OVRPlugin_OVRP_1_123_0_TypeInfo);
    DAT_075591d8 = 1;
  }
  FUN_068ae850(param_1);
  puVar2 = OVRPlugin_OVRP_1_124_0_TypeInfo;
  lVar5 = *(long *)(param_1 + 0x160);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x328);
    lVar9 = *(long *)OVRPlugin_OVRP_1_124_0_TypeInfo;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_042e4a64(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      puVar3 = PTR_DAT_070f3178;
      lVar5 = *(long *)(param_1 + 0x168);
      if (lVar5 != 0) {
        lVar8 = *(long *)(lVar5 + 0x10);
        uVar7 = *(undefined8 *)(param_1 + 0x330);
        lVar9 = *(long *)PTR_DAT_070f3178;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_042e4a64(lVar5,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar5 = *(long *)(param_1 + 0x168);
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            uVar7 = *(undefined8 *)(param_1 + 0x338);
            lVar9 = *(long *)puVar3;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
              }
              else {
                FUN_042e4a64(lVar5,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = *(long *)(param_1 + 0x168);
              if (lVar5 != 0) {
                lVar8 = *(long *)(lVar5 + 0x10);
                uVar7 = *(undefined8 *)(param_1 + 0x340);
                lVar9 = *(long *)puVar3;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  }
                  else {
                    FUN_042e4a64(lVar5,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = *(long *)(param_1 + 0x168);
                  if (lVar5 != 0) {
                    lVar8 = *(long *)(lVar5 + 0x10);
                    uVar7 = *(undefined8 *)(param_1 + 0x348);
                    lVar9 = *(long *)puVar3;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                      }
                      else {
                        FUN_042e4a64(lVar5,uVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar5 = *(long *)(param_1 + 0x160);
                      if (lVar5 != 0) {
                        lVar8 = *(long *)(lVar5 + 0x10);
                        uVar7 = *(undefined8 *)(param_1 + 0x350);
                        lVar9 = *(long *)puVar2;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                          }
                          else {
                            FUN_042e4a64(lVar5,uVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar5 = *(long *)(param_1 + 0x168);
                          if (lVar5 != 0) {
                            lVar8 = *(long *)(lVar5 + 0x10);
                            uVar7 = *(undefined8 *)(param_1 + 0x358);
                            lVar9 = *(long *)puVar3;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                              }
                              else {
                                FUN_042e4a64(lVar5,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar5 = *(long *)(param_1 + 0x168);
                              if (lVar5 != 0) {
                                lVar8 = *(long *)(lVar5 + 0x10);
                                uVar7 = *(undefined8 *)(param_1 + 0x360);
                                lVar9 = *(long *)puVar3;
                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                  }
                                  else {
                                    FUN_042e4a64(lVar5,uVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  lVar5 = FUN_069d3b50(param_1,0);
                                  puVar3 = OVRPlugin_OVRP_1_123_0_TypeInfo;
                                  puVar2 = PTR_DAT_070c2278;
                                  if (lVar5 != 0) {
                                    uVar4 = FUN_069d7c74(lVar5,0);
                                    uVar4 = FUN_06a6331c(uVar4,0);
                                    uVar7 = *(undefined8 *)puVar3;
                                    *(undefined4 *)(param_1 + 0x400) = uVar4;
                                    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (uVar7);
                                    FUN_06881bcc(uVar7,param_1,0);
                                    *(undefined8 *)(param_1 + 0x408) = uVar7;
                                    FUN_068c1a90(param_1);
                                    FUN_068c1bc4(param_1);
                                    FUN_068c1d54(param_1);
                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                      thunk_FUN_031e5338();
                                    }
                                    uVar6 = FUN_069896a4(0);
                                    if ((uVar6 & 1) == 0) {
                                      *(undefined1 *)(param_1 + 0x2d0) = 0;
                                    }
                                    return;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


