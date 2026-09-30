/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05cfc8e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering(undefined8 param_1)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 *unaff_x21;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  FUN_06902890(param_1,0);
  *unaff_x21 = unaff_w20;
  unaff_x21[8] = unaff_w19;
  unaff_x21[9] = 0;
  *(ulong *)(unaff_x21 + 6) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
  *(ulong *)(unaff_x21 + 4) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  *(ulong *)(unaff_x21 + 3) = CONCAT44(uStack000000000000000c,uStack0000000000000008);
  *(undefined8 *)(unaff_x21 + 1) = uStack0000000000000000;
  return;
}


