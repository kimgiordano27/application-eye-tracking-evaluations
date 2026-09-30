/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 027f1580
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = FUN_027d7ed8();
  if ((uVar2 & 1) != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x38);
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    *(uint *)(unaff_x20 + 0x38) = uVar1 | 0x100000;
  }
  FUN_027eff1c();
  return;
}


