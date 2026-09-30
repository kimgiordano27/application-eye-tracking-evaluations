/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$InvalidateDepthTexture
ENTRY_POINT: 04dc3018
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__InvalidateDepthTexture(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong in_x9;
  code *pcVar2;
  long unaff_x23;
  long in_stack_00000028;
  
  pcVar2 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x90);
  if ((in_x9 & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  (*pcVar2)();
  iVar1 = FUN_0609d588();
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


