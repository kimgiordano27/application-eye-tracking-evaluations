/*
FUNCTION_NAME: OVRVirtualKeyboardSampleControls$$UpdateButtonInteractable
ENTRY_POINT: 02c8a104
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long OVRVirtualKeyboardSampleControls__UpdateButtonInteractable(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    param_1 = *unaff_x20;
  }
  puVar1 = PTR_DAT_0380d8c0;
  pcVar3 = *(char **)(param_1 + 0xb8);
  if (*pcVar3 == '\0') {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      pcVar3 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar4 = *(undefined8 *)(pcVar3 + 8);
    if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_033bd548(uVar4,0);
    lVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (unaff_x19 != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_0380cca8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = OVRPlugin_<>c__<_cctor>b__810_117(uVar4);
    lVar2 = thunk_FUN_01861bbc(*(undefined8 *)puVar1);
    FUN_02c108e4(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
  }
  return lVar2;
}


