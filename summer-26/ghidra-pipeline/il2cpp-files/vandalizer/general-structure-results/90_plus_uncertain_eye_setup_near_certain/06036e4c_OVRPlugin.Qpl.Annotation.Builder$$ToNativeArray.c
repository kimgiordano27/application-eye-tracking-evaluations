/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 06036e4c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(long param_1,undefined8 param_2)

{
  long in_x9;
  uint in_w10;
  uint unaff_w19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  if (unaff_w19 < in_w10) {
    param_1 = param_1 + in_x9 * 0x1c;
    *(undefined8 *)(param_1 + 0x34) = uStack0000000000000014;
    *(ulong *)(param_1 + 0x2c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000008;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000000;
    FUN_0603704c(param_2,unaff_w19,*(undefined8 *)(unaff_x20 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


