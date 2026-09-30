/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 03b688ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ToArray(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
    uStack0000000000000010 = in_x9;
    if (unaff_x20 == 0) break;
    in_stack_00000020 = uStack0000000000000000;
    in_stack_00000028 = uStack0000000000000008;
    in_stack_00000030 = in_x9;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x18;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    param_1 = (undefined8 *)(lVar2 + unaff_x22);
    in_x9 = param_1[2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


