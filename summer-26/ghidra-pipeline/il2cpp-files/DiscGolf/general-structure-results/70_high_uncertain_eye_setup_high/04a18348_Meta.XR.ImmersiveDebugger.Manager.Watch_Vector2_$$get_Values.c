/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 04a18348
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values
               (long param_1,undefined8 param_2,long param_3)

{
  uint in_w9;
  undefined4 in_register_0000404c;
  
  if ((in_w9 <= *(byte *)(param_1 + 0x130)) &&
     (*(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000404c,in_w9) * 8 + -8) == param_3
     )) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96be0();
}


