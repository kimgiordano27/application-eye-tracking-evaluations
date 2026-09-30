/*
FUNCTION_NAME: FUN_025cabf0
ENTRY_POINT: 025cabf0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_025cabf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((DAT_04123cf1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cda288);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    FUN_01ab69ac(PTR_DAT_03cefe88);
    DAT_04123cf1 = 1;
  }
  uVar8 = FUN_025bb184(0);
  puVar1 = PTR_DAT_03cc0330;
  if ((uVar8 & 1) == 0) {
    if (param_2 == 0) goto LAB_025cadd0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_04123d83 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cc0330);
      DAT_04123d83 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar1;
    }
    plVar10 = (long *)FUN_01ab69c8(lVar9);
    if (param_2 == 0) goto LAB_025cadd0;
    lVar9 = *plVar10;
    lVar12 = *(long *)(param_2 + 0x30);
    uVar2 = FUN_025ca734(param_1);
    uVar3 = 0;
    if (lVar9 != 0) {
      uVar3 = OVRPlugin__SetControllerLocalizedVibration(lVar9,0);
    }
    uVar4 = OVRPlugin__SetControllerLocalizedVibration(param_2,0);
    uVar5 = 0;
    if (lVar12 != 0) {
      uVar5 = OVRPlugin__SetControllerLocalizedVibration(lVar12,0);
    }
    uVar6 = FUN_027edf4c(param_2,0);
    FUN_025bb370(uVar2,uVar3,uVar4,uVar5,uVar6,0);
  }
  uVar7 = FUN_027edf4c(param_2,0);
  puVar1 = PTR_DAT_03cefe88;
  if ((uVar7 >> 1 & 1) == 0) {
    uVar7 = FUN_027edf4c(param_2,0);
    FUN_027e5eb0(param_2,uVar7 & 1,0);
    return;
  }
  lVar9 = *(long *)PTR_DAT_03cefe88;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)puVar1;
  }
  uVar11 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_03cda288 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cda288);
  }
  lVar9 = FUN_025bb590(uVar11,0,0);
  if (lVar9 != 0) {
    FUN_025bb634(lVar9,1,0);
    FUN_025bb654(lVar9,param_2,0);
    return;
  }
LAB_025cadd0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


