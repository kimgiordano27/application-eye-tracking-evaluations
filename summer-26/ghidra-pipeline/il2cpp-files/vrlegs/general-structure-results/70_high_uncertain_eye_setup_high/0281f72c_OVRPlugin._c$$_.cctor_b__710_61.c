/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_61
ENTRY_POINT: 0281f72c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__710_61(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long unaff_x19;
  int unaff_w20;
  int iVar5;
  long *unaff_x22;
  int unaff_w23;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_0281f324();
  if (((uVar2 & 1) != 0) && (*(int *)(unaff_x19 + 0x1c) < 100)) {
    if (unaff_w23 == 0x2b) {
      uVar4 = 3;
    }
    else {
      if (unaff_w23 != 0x2d) goto LAB_0281f7a8;
      uVar4 = 2;
    }
    *(undefined4 *)(unaff_x19 + 0x24) = uVar4;
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x22;
    }
    unaff_w20 = *(int *)(*(long *)(lVar3 + 0xb8) + 0x38) + unaff_w20;
  }
LAB_0281f7a8:
  puVar1 = PTR_DAT_03cfe788;
  iVar5 = unaff_w20;
  if (unaff_w20 < *(int *)(unaff_x19 + 0x30)) {
    if (*(int *)(*(long *)PTR_DAT_03cfe788 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_0281f14c();
    if ((uVar2 & 1) == 0) {
      if (unaff_w20 + 1 < *(int *)(unaff_x19 + 0x30)) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar2 = FUN_0281f324();
        if (((uVar2 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
          iVar5 = unaff_w20 + 2;
        }
      }
    }
    else {
      iVar5 = unaff_w20 + 1;
      if (unaff_w20 + 2 < *(int *)(unaff_x19 + 0x30)) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar2 = FUN_0281f324();
        if (((uVar2 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
          iVar5 = unaff_w20 + 3;
        }
      }
    }
  }
  return iVar5 == *(int *)(unaff_x19 + 0x30);
}


