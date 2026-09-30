/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 03390f44
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(void)

{
  undefined8 uVar1;
  undefined4 unaff_w19;
  undefined4 uVar2;
  long unaff_x20;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_03277aec();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0338f120(unaff_w19,uVar1,uVar2,0);
  return;
}


