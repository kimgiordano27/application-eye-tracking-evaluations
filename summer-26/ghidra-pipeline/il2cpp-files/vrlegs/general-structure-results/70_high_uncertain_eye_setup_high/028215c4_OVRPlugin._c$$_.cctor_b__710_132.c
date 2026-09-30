/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_132
ENTRY_POINT: 028215c4
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


undefined8 OVRPlugin_<>c__<_cctor>b__710_132(void)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  
  FUN_01ab69ac(PTR_DAT_03cfe810);
  FUN_01ab69ac(PTR_DAT_03cfe820);
  FUN_01ab69ac(PTR_DAT_03cfe818);
  *(undefined1 *)(unaff_x23 + 0x3c1) = 1;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(unaff_x22 + 0x10) < 1) goto LAB_02821824;
  sVar1 = FUN_025b8a2c();
  if (sVar1 == 0x2f) {
    if (((8 < *(int *)(unaff_x22 + 0x10)) && (uVar3 = FUN_025bd5ec(), (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_025bca1c(), (uVar3 & 1) != 0)) {
      FUN_025c5208();
      FUN_0282f654();
      if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02821358(0,0);
joined_r0x028216b4:
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  else if (*(int *)(unaff_x22 + 0x10) - 0x13U < 0x16) {
    uVar2 = FUN_025b8a2c();
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc02b0);
    }
    uVar3 = FUN_026b1a64(uVar2,0);
    if (((uVar3 & 1) != 0) && (sVar1 = FUN_025b8a2c(), sVar1 == 0x54)) {
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0271c480(0);
      if (*(int *)(*(long *)PTR_DAT_03cbf088 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbf088);
      }
      uVar3 = FUN_0274eb38();
      if ((uVar3 & 1) != 0) {
        FUN_025c5208();
        FUN_0282f654();
        if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0282075c(0,0);
        goto joined_r0x028216b4;
      }
    }
  }
  uVar3 = FUN_0282f8a8();
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_028214bc();
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
LAB_02821824:
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return 0;
}


