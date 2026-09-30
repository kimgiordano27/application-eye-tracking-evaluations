/*
FUNCTION_NAME: UnityEngine.CubemapArray$$get_isReadable
ENTRY_POINT: 068b77e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 99
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_CubemapArray__get_isReadable(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    }
    else {
      FUN_042e4a64(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar5 = *(long *)(unaff_x19 + 0x160);
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x350);
      lVar9 = *unaff_x21;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        }
        else {
          FUN_042e4a64(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar5 = *(long *)(unaff_x19 + 0x168);
        if (lVar5 != 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          uVar7 = *(undefined8 *)(unaff_x19 + 0x358);
          lVar9 = *unaff_x20;
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
            lVar5 = *(long *)(unaff_x19 + 0x168);
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar5 + 0x10);
              uVar7 = *(undefined8 *)(unaff_x19 + 0x360);
              lVar9 = *unaff_x20;
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
                lVar5 = FUN_069d3b50();
                puVar3 = OVRPlugin_OVRP_1_123_0_TypeInfo;
                puVar2 = PTR_DAT_070c2278;
                if (lVar5 != 0) {
                  uVar4 = FUN_069d7c74(lVar5,0);
                  uVar4 = FUN_06a6331c(uVar4,0);
                  uVar7 = *(undefined8 *)puVar3;
                  *(undefined4 *)(unaff_x19 + 0x400) = uVar4;
                  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (uVar7);
                  FUN_06881bcc();
                  *(undefined8 *)(unaff_x19 + 0x408) = uVar7;
                  FUN_068c1a90();
                  FUN_068c1bc4();
                  FUN_068c1d54();
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  uVar6 = FUN_069896a4(0);
                  if ((uVar6 & 1) == 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


