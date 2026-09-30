/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 01f5feb4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(ulong param_1)

{
  long unaff_x22;
  long *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba9b8);
    *(undefined1 *)(unaff_x22 + 0xcae) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f60010();
  return;
}


