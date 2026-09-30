/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 041a3f48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length(long param_1)

{
  uint uVar1;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while (!(bool)in_CY) {
    if (unaff_x20 == 0) goto LAB_041a401c;
    param_1 = param_1 + unaff_x23;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_041a401c;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) break;
      if (unaff_x22 == 0) goto LAB_041a401c;
      lVar3 = lVar3 + unaff_x23;
      uVar5 = *(undefined4 *)(lVar3 + 0x20);
      uVar6 = *(undefined4 *)(lVar3 + 0x24);
      lVar4 = *(long *)(unaff_x22 + 0x10);
      uVar7 = *(undefined4 *)(lVar3 + 0x28);
      uVar8 = *(undefined4 *)(lVar3 + 0x2c);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_041a401c;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar5;
        *(undefined4 *)(lVar4 + 0x24) = uVar6;
        *(undefined4 *)(lVar4 + 0x28) = uVar7;
        *(undefined4 *)(lVar4 + 0x2c) = uVar8;
      }
      else {
        FUN_041a3780();
      }
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
LAB_041a401c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


