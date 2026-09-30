/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_IsCreated
ENTRY_POINT: 041a3fc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_IsCreated
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  long in_x10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
code_r0x041a3fc4:
  param_1 = param_1 + in_x10 * 0x10;
  *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
LAB_041a3ff0:
  do {
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) goto LAB_041a401c;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) goto LAB_041a4020;
    if (unaff_x20 == 0) goto LAB_041a401c;
    lVar2 = lVar2 + unaff_x23;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                       *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c),
                       *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(unaff_x21 + 0x10);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) {
LAB_041a4020:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x22 != 0) {
      lVar2 = lVar2 + unaff_x23;
      param_2 = *(undefined4 *)(lVar2 + 0x20);
      param_3 = *(undefined4 *)(lVar2 + 0x24);
      param_1 = *(long *)(unaff_x22 + 0x10);
      param_4 = *(undefined4 *)(lVar2 + 0x28);
      param_5 = *(undefined4 *)(lVar2 + 0x2c);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (param_1 != 0) {
        in_x10 = (long)(int)*(uint *)(unaff_x22 + 0x18);
        if (*(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x22 + 0x18)) {
          FUN_041a3780();
          goto LAB_041a3ff0;
        }
        goto code_r0x041a3fc4;
      }
    }
  }
LAB_041a401c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


