/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_60
ENTRY_POINT: 0281f6c0
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


bool OVRPlugin_<>c__<_cctor>b__710_60(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  uint uVar6;
  long unaff_x21;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x788));
  *(undefined1 *)(unaff_x21 + 0x3ae) = 1;
  puVar2 = PTR_DAT_03cfe788;
  uVar6 = unaff_w20;
  if (*(int *)(unaff_x19 + 0x30) <= (int)unaff_w20) goto LAB_0281f880;
  lVar5 = *(long *)(unaff_x19 + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar1 = *(ushort *)(lVar5 + (long)(int)unaff_w20 * 2 + 0x20);
  if ((uVar1 | 0x20) == 0x7a) {
    *(undefined4 *)(unaff_x19 + 0x24) = 1;
    uVar6 = unaff_w20 + 1;
    goto LAB_0281f880;
  }
  if ((int)(unaff_w20 + 2) < *(int *)(unaff_x19 + 0x30)) {
    if (*(int *)(*(long *)PTR_DAT_03cfe788 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0281f324();
    if (((uVar3 & 1) != 0) && (*(int *)(unaff_x19 + 0x1c) < 100)) {
      if (uVar1 == 0x2b) {
        uVar4 = 3;
      }
      else {
        if (uVar1 != 0x2d) goto LAB_0281f7a8;
        uVar4 = 2;
      }
      *(undefined4 *)(unaff_x19 + 0x24) = uVar4;
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar2;
      }
      unaff_w20 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x38) + unaff_w20;
    }
  }
LAB_0281f7a8:
  puVar2 = PTR_DAT_03cfe788;
  uVar6 = unaff_w20;
  if ((int)unaff_w20 < *(int *)(unaff_x19 + 0x30)) {
    if (*(int *)(*(long *)PTR_DAT_03cfe788 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0281f14c();
    if ((uVar3 & 1) == 0) {
      if ((int)(unaff_w20 + 1) < *(int *)(unaff_x19 + 0x30)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0281f324();
        if (((uVar3 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
          uVar6 = unaff_w20 + 2;
        }
      }
    }
    else {
      uVar6 = unaff_w20 + 1;
      if ((int)(unaff_w20 + 2) < *(int *)(unaff_x19 + 0x30)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0281f324();
        if (((uVar3 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
          uVar6 = unaff_w20 + 3;
        }
      }
    }
  }
LAB_0281f880:
  return uVar6 == *(uint *)(unaff_x19 + 0x30);
}


