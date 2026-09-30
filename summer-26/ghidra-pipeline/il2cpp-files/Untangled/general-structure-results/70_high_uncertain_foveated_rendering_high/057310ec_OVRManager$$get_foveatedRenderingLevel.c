/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 057310ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


int OVRManager__get_foveatedRenderingLevel(void)

{
  int iVar1;
  long *unaff_x19;
  
  FUN_05731028();
  (**(code **)(*unaff_x19 + 0x6e8))();
  iVar1 = FUN_0572fd34();
  return iVar1 + -1;
}


