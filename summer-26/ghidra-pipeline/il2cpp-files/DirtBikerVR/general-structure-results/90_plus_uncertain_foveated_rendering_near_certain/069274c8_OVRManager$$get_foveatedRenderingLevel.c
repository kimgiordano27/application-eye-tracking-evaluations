/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 069274c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined4 OVRManager__get_foveatedRenderingLevel(void)

{
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    FUN_03a8a718(PTR_DAT_084868a0);
    *(undefined1 *)(unaff_x19 + 0xd8f) = 1;
  }
  return **(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
}


