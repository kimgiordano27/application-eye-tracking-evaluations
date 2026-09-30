/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 044f0190
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(void)

{
  undefined8 *puVar1;
  bool in_CY;
  ulong uVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (!in_CY) {
    FUN_05951134(0);
  }
  if ((unaff_w22 < 0) || (*(int *)(unaff_x21 + 0x18) - unaff_w22 < (int)unaff_w19)) {
    FUN_05951160(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8,0);
  }
  if ((int)unaff_w19 < (int)(unaff_w22 + unaff_w19)) {
    lVar4 = (long)(int)(unaff_w22 + unaff_w19) - (long)(int)unaff_w19;
    lVar5 = (long)(int)unaff_w19 * 0x18 + 0x20;
    do {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
LAB_044f0260:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (unaff_x20 == 0) goto LAB_044f0260;
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      in_stack_00000028 = puVar1[1];
      in_stack_00000020 = *puVar1;
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        return unaff_w19;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 0x18;
      unaff_w19 = unaff_w19 + 1;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}


