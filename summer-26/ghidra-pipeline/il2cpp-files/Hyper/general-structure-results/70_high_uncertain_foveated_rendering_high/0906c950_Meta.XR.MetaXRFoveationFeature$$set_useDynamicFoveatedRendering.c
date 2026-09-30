/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0906c950
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering
               (undefined1 param_1 [16],long param_2)

{
  long in_x9;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(in_x9 + 0x288);
  uVar1 = *(undefined8 *)(in_x9 + 0x280);
  *(long *)(param_2 + 0x48) = param_1._8_8_;
  *(long *)(param_2 + 0x40) = param_1._0_8_;
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  thunk_FUN_0a177cbc();
  return;
}


