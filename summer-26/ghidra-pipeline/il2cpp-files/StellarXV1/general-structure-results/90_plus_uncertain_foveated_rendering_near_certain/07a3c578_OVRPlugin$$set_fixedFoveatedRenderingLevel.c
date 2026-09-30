/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 07a3c578
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel(code *param_1)

{
  undefined1 uVar1;
  long *unaff_x19;
  int unaff_w21;
  
  (*param_1)();
  (**(code **)(*unaff_x19 + 0x1a8))();
  if (unaff_w21 == 0) {
    uVar1 = (undefined1)unaff_x19[8];
  }
  else {
    if (unaff_w21 != 1) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)unaff_x19 + 0x59) = uVar1;
  return;
}


