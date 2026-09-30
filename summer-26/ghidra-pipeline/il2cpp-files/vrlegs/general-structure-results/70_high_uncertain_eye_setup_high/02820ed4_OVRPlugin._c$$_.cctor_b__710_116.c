/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_116
ENTRY_POINT: 02820ed4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__710_116(void)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar4;
  long unaff_x23;
  long unaff_x24;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cfe820);
  FUN_01ab69ac(PTR_DAT_03cfe818);
  *(undefined1 *)(unaff_x24 + 0x3bf) = 1;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(unaff_x23 + 0x10)) {
    sVar1 = FUN_025b8a2c();
    if (sVar1 == 0x2f) {
      if (((8 < *(int *)(unaff_x23 + 0x10)) && (uVar3 = FUN_025bd5ec(), (uVar3 & 1) != 0)) &&
         (uVar3 = FUN_025bca1c(), (uVar3 & 1) != 0)) {
        FUN_025c5208();
        FUN_0282f654();
        if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_02820c18(0,0,unaff_w20);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
    else if (*(int *)(unaff_x23 + 0x10) - 0x13U < 0x16) {
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
        if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
        }
        uVar3 = FUN_02747ce0();
        if ((uVar3 & 1) != 0) {
          uVar4 = *unaff_x19;
          if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = FUN_0281fa84(uVar4,unaff_w20);
          *unaff_x19 = uVar4;
          return 1;
        }
      }
    }
    uVar3 = FUN_0282f8a8();
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02820d84();
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  *unaff_x19 = 0;
  return 0;
}


