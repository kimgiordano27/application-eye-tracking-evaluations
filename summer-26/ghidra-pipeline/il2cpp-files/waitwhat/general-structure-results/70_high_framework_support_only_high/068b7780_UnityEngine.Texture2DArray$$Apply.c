/*
FUNCTION_NAME: UnityEngine.Texture2DArray$$Apply
ENTRY_POINT: 068b7780
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Texture2DArray__Apply(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  lVar8 = *unaff_x20;
  *(int *)(param_2 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    }
    else {
      FUN_042e4a64(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar8 = *(long *)(unaff_x19 + 0x168);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x10);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x348);
      lVar9 = *unaff_x20;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        }
        else {
          FUN_042e4a64(lVar8,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar8 = *(long *)(unaff_x19 + 0x160);
        if (lVar8 != 0) {
          lVar7 = *(long *)(lVar8 + 0x10);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x350);
          lVar9 = *unaff_x21;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            }
            else {
              FUN_042e4a64(lVar8,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar8 = *(long *)(unaff_x19 + 0x168);
            if (lVar8 != 0) {
              lVar7 = *(long *)(lVar8 + 0x10);
              uVar6 = *(undefined8 *)(unaff_x19 + 0x358);
              lVar9 = *unaff_x20;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                }
                else {
                  FUN_042e4a64(lVar8,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = *(long *)(unaff_x19 + 0x168);
                if (lVar8 != 0) {
                  lVar7 = *(long *)(lVar8 + 0x10);
                  uVar6 = *(undefined8 *)(unaff_x19 + 0x360);
                  lVar9 = *unaff_x20;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    }
                    else {
                      FUN_042e4a64(lVar8,uVar6,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar8 = FUN_069d3b50();
                    puVar3 = OVRPlugin_OVRP_1_123_0_TypeInfo;
                    puVar2 = PTR_DAT_070c2278;
                    if (lVar8 != 0) {
                      uVar4 = FUN_069d7c74(lVar8,0);
                      uVar4 = FUN_06a6331c(uVar4,0);
                      uVar6 = *(undefined8 *)puVar3;
                      *(undefined4 *)(unaff_x19 + 0x400) = uVar4;
                      uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (uVar6);
                      FUN_06881bcc();
                      *(undefined8 *)(unaff_x19 + 0x408) = uVar6;
                      FUN_068c1a90();
                      FUN_068c1bc4();
                      FUN_068c1d54();
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      uVar5 = FUN_069896a4(0);
                      if ((uVar5 & 1) == 0) {
                        *(undefined1 *)(unaff_x19 + 0x2d0) = 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


