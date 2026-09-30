/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 056540bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  if (DAT_06dbc420 == (code *)0x0) {
    DAT_06dbc420 = (code *)thunk_FUN_02dd33e4();
  }
  (*DAT_06dbc420)(param_1,param_2,param_3);
  return;
}


