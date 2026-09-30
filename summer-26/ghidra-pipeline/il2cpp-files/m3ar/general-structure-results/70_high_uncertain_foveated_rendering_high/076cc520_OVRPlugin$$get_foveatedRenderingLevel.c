/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 076cc520
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_foveatedRenderingLevel(long param_1)

{
  undefined4 uVar1;
  undefined8 unaff_x19;
  
  FUN_075273c0(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffe;
  uVar1 = FUN_0752ac38(0);
  *(undefined8 *)(param_1 + 0x30) = unaff_x19;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return param_1;
}


