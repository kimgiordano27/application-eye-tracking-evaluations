/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosAtDepthTexCoord
ENTRY_POINT: 014643a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosAtDepthTexCoord(void)

{
  long unaff_x19;
  
  if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
    FUN_015fe250(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_033ec030,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


