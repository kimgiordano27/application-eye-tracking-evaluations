/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 076b4584
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_04b24f08();
  puVar2 = PTR_DAT_08f8b308;
  if ((unaff_x21 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f8b308 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c2 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c2 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b24f08(uVar5);
    uVar5 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
    puVar1 = PTR_DAT_08f65598;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
    }
    uVar3 = FUN_08589e5c(uVar6,uVar5,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x138) != '\0')) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c3 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c3 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b24f08(uVar5);
    }
    uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0858816c(uVar5,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x185) != '\0')) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c4 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c4 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b257fc();
    }
    *(undefined1 *)(unaff_x19 + 0x138) = 0;
    FUN_0889841c();
    lVar4 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0858816c(uVar5,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x185) != '\0')) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c5 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c5 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b24f08(uVar5);
    }
    lVar4 = *(long *)puVar2;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined1 *)(unaff_x19 + 0x185) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c6 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c6 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b257fc(uVar5);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  return;
}


