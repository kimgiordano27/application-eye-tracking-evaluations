/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 027d78e0
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


void OVRManager__get_useDynamicFixedFoveatedRendering
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_DAT_03cc9e10;
  if ((DAT_0412502b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    DAT_0412502b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d77a8(&stack0x00000008,param_2,param_3,param_4,0,1);
  param_1[2] = in_stack_00000018;
  param_1[1] = in_stack_00000010;
  *param_1 = in_stack_00000008;
  return;
}


