/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 0603705c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(undefined8 param_1,ulong param_2,long param_3)

{
  int in_w8;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((uint)(in_w8 >> 6) < *(uint *)(param_3 + 0x18)) {
    param_3 = param_3 + (long)(in_w8 >> 6) * 8;
    *(ulong *)(param_3 + 0x20) =
         *(ulong *)(param_3 + 0x20) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


