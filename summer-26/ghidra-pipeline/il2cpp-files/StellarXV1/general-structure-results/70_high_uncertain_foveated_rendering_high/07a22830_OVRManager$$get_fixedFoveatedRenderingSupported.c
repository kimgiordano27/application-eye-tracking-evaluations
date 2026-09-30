/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 07a22830
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_040ec700();
  uVar1 = thunk_FUN_040b4e00(*(undefined8 *)(unaff_x19 + 0x20),*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = thunk_FUN_040b4e00(*(undefined8 *)(unaff_x19 + 0x30),*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x38),uVar1);
  return;
}


