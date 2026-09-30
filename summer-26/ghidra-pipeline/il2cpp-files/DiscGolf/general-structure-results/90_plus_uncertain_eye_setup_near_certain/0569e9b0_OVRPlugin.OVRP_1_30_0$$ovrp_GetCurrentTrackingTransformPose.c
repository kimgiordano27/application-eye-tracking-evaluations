/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 0569e9b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((DAT_06dbc894 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dbc894 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) goto LAB_0569eb60;
        FUN_0631ec50(*(undefined8 *)(lVar4 + 0x20 + uVar6 * 8),*(undefined8 *)(param_1 + 0x30),0);
        uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar6 = 0;
        uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar6) goto LAB_0569eb60;
          FUN_0631ec50(*(undefined8 *)(lVar4 + 0x20 + uVar6 * 8),*(undefined8 *)(param_1 + 0x48),0);
          uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 != 0) {
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar6 = 0;
          uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar6) {
LAB_0569eb60:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_0631ec50(*(undefined8 *)(lVar4 + 0x20 + uVar6 * 8),*(undefined8 *)(param_1 + 0x68),0
                        );
            uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        puVar1 = PTR_DAT_069fb990;
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          uVar2 = FUN_0632b414(*(long *)(param_1 + 0x48),0);
          FUN_0631ebb4(uVar5,uVar2,0);
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar6 = FUN_0634eb94(uVar5,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_0569eb64;
            FUN_0632237c(*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                         *(undefined8 *)(param_1 + 0x48),0);
          }
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
          LeanTween__value();
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
          LeanTween__value();
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
          LeanTween__value((undefined8 *)(param_1 + 0x70));
          return;
        }
      }
    }
  }
LAB_0569eb64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


