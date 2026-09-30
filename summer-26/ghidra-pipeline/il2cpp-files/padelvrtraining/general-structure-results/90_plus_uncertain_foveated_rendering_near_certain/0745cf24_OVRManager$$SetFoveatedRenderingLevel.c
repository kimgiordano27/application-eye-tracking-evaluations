/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 0745cf24
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel(undefined8 param_1)

{
  undefined8 uVar1;
  int in_w9;
  long unaff_x19;
  
  if (in_w9 == 0) {
    thunk_FUN_03db619c(param_1);
  }
  uVar1 = FUN_073c8660();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x30));
  return;
}


