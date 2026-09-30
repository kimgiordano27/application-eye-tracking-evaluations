/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 01d83c14
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFoveatedRendering(long param_1)

{
  bool in_CY;
  ulong unaff_x20;
  
  if (!in_CY) {
    return *(undefined8 *)(param_1 + (unaff_x20 & 0xffffffff) * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


