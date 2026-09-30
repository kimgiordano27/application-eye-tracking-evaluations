/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0368626c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  long in_stack_00000018;
  
  puVar1 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  auVar2 = (*(code *)*puVar1)();
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar2;
  thunk_FUN_01f51358(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return;
}


