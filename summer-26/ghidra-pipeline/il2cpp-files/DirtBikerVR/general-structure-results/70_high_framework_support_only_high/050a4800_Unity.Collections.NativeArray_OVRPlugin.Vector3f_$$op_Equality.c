/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Equality
ENTRY_POINT: 050a4800
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Equality(undefined1 param_1 [16])

{
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  *(long *)(unaff_x26 + 0x28) = param_1._8_8_;
  *(long *)(unaff_x26 + 0x20) = param_1._0_8_;
  thunk_FUN_03afed3c(in_x9 + 8);
  if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000048;
    *(undefined8 *)(unaff_x24 + 0x20) = in_stack_00000040;
    *(undefined8 *)(unaff_x24 + 0x30) = in_stack_00000050;
    thunk_FUN_03afed3c(unaff_x21 + (long)unaff_w23 * 0x18 + 8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


