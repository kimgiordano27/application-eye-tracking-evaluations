/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0565406c
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


undefined1  [16] OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  
  thunk_FUN_02df485c();
  uVar1 = FUN_056540b8(unaff_w20,unaff_w19);
  uVar2 = FUN_055efebc(uVar1,*unaff_x21,0,0);
  uVar3 = (ulong)in_stack_00000008;
  if ((uVar2 & 1) == 0) {
    in_stack_00000000 = 0;
    uVar3 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = in_stack_00000000;
  return auVar4;
}


