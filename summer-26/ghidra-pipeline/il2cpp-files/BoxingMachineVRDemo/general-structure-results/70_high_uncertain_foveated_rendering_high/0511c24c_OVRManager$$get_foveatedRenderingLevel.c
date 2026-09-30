/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 0511c24c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(ulong param_1,undefined8 param_2)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780a70);
    *(undefined1 *)(unaff_x21 + 0xbd0) = 1;
  }
  thunk_FUN_02d9d534(*unaff_x22);
  FUN_0511bc84();
  FUN_0511c294(param_2);
  return;
}


