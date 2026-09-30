/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 02343114
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(param_1 + unaff_x22);
    if (unaff_x20 == 0) break;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    in_stack_00000058 = puVar1[3];
    in_stack_00000060 = puVar1[4];
    in_stack_00000068 = puVar1[5];
    in_stack_00000070 = puVar1[6];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x38;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


