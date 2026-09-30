/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 057315a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__set_useDynamicFoveatedRendering(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06d37b78;
  if ((DAT_071c3941 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d589b8);
    FUN_02f07e70(PTR_DAT_06d37b78);
    DAT_071c3941 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
    uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d589b8);
    FUN_057463ac(uVar3,0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar3;
    thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


