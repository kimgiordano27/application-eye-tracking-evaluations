/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 0745d220
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x19 + 0x7f1) = 1;
  uVar1 = thunk_FUN_03d2ef40(*unaff_x20);
  FUN_071bc31c(uVar1,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
                    /* try { // try from 0745d254 to 0755d25b has its CatchHandler @ 0745d330 */
  thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


