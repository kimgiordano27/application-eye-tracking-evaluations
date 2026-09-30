/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 07c5ba08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(undefined8 param_1)

{
  if (DAT_0a5266e1 == '\0') {
    FUN_04447ba8(PTR_DAT_09f24d38);
    DAT_0a5266e1 = '\x01';
  }
  FUN_07c5ba58(param_1,*(undefined8 *)(*(long *)(*(long *)PTR_DAT_09f24d38 + 0xb8) + 0x20));
  return;
}


