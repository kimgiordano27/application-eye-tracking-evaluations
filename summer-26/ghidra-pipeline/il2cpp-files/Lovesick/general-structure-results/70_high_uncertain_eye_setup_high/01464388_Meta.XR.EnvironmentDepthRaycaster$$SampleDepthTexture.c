/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$SampleDepthTexture
ENTRY_POINT: 01464388
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


void Meta_XR_EnvironmentDepthRaycaster__SampleDepthTexture(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xab3) & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    *(undefined1 *)(unaff_x20 + 0xab3) = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    FUN_015fe250(*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_033ec030,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


