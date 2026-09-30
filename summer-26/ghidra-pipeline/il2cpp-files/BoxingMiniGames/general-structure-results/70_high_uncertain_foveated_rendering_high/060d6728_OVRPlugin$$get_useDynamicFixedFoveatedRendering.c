/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 060d6728
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


void OVRPlugin__get_useDynamicFixedFoveatedRendering(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  puVar2 = PTR_DAT_07a24650;
  puVar1 = PTR_DAT_079f5050;
  if ((*(byte *)(unaff_x21 + 0xac2) & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5050);
    FUN_03642964(PTR_DAT_07a24650);
    *(undefined1 *)(unaff_x21 + 0xac2) = 1;
  }
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05d84434(uVar3,param_1,*(undefined8 *)puVar2,0);
  FUN_05ffd170(param_1,param_1 + 0x21,uVar3,0);
  FUN_05ffd214(param_1,param_1 + 0x21,0);
  return;
}


