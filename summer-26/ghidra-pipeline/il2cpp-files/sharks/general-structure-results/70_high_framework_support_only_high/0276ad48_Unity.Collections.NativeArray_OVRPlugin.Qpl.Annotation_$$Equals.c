/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 0276ad48
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals(undefined8 *param_1)

{
  bool in_ZR;
  bool in_CY;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if (in_CY && !in_ZR) {
    uVar2 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x26 + 0x20);
    param_1[2] = *(undefined8 *)(unaff_x26 + 0x30);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    thunk_FUN_0188fd20(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x26 + 0x30) = in_stack_000000d0;
      *(undefined8 *)(unaff_x26 + 0x28) = in_stack_000000c8;
      *(undefined8 *)(unaff_x26 + 0x20) = in_stack_000000c0;
      thunk_FUN_0188fd20(unaff_x19 + unaff_x23 * 0x18 + 0x20,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


