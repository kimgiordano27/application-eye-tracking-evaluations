/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Path
ENTRY_POINT: 026a7110
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Path(void)

{
  long unaff_x19;
  
  FUN_01dde7f8();
  FUN_03f48160();
  if (*(long *)(unaff_x19 + 0x410) != 0) {
    FUN_03f4d8ac(*(long *)(unaff_x19 + 0x410),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


