/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 060d6644
PROGRAM: BoxingMiniGames-libil2cpp.so
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
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_03c36938();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_036b7ad0();
  uVar1 = FUN_03c36938();
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x50),uVar1);
  return;
}


