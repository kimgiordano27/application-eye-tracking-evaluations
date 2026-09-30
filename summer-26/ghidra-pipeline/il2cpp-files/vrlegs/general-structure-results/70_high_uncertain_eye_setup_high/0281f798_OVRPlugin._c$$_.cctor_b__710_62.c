/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_62
ENTRY_POINT: 0281f798
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__710_62(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  int iVar4;
  long *unaff_x22;
  
  puVar2 = PTR_DAT_03cfe788;
  iVar1 = *(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x38) + unaff_w20;
  iVar4 = iVar1;
  if (iVar1 < *(int *)(unaff_x19 + 0x30)) {
    if (*(int *)(*(long *)PTR_DAT_03cfe788 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0281f14c();
    if ((uVar3 & 1) == 0) {
      if (iVar1 + 1 < *(int *)(unaff_x19 + 0x30)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0281f324();
        if (((uVar3 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
          iVar4 = iVar1 + 2;
        }
      }
    }
    else {
      iVar4 = iVar1 + 1;
      if (iVar1 + 2 < *(int *)(unaff_x19 + 0x30)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0281f324();
        if (((uVar3 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
          iVar4 = iVar1 + 3;
        }
      }
    }
  }
  return iVar4 == *(int *)(unaff_x19 + 0x30);
}


