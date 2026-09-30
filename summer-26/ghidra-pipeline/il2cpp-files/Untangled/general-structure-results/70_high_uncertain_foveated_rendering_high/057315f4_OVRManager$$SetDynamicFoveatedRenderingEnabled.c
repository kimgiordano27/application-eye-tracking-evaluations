/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 057315f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__SetDynamicFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  
  uVar1 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d589b8);
  FUN_057463ac(uVar1,0);
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x20;
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  thunk_FUN_02f411dc(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x20;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


