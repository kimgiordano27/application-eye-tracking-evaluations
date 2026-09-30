/*
FUNCTION_NAME: OVRManager$$get_audioOutId
ENTRY_POINT: 01d677e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_audioOutId(long param_1,int param_2)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined *puVar5;
  
  if (in_ZR) {
    lVar1 = FUN_01dcc798(0x10,0);
    if (lVar1 == 0) {
LAB_01d67934:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01dcb1ac(lVar1,*(undefined4 *)(param_1 + 0x10),0);
    FUN_01dc37f8(lVar1,0x2e,0);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
LAB_01d67918:
    FUN_01dcb1ac(lVar1,uVar6,0);
    return lVar1;
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar2 = thunk_FUN_010303a8(PTR_DAT_023585e0);
    uVar3 = thunk_FUN_010303a8(PTR_DAT_02355e88);
    puVar5 = PTR_DAT_02355e28;
  }
  else {
    if (param_2 == 3) {
      lVar1 = FUN_01dcc798(0x10,0);
      if (lVar1 == 0) goto LAB_01d67934;
      FUN_01dcb1ac(lVar1,*(undefined4 *)(param_1 + 0x10),0);
      FUN_01dc37f8(lVar1,0x2e,0);
      FUN_01dcb1ac(lVar1,*(undefined4 *)(param_1 + 0x14),0);
      FUN_01dc37f8(lVar1,0x2e,0);
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      goto LAB_01d67918;
    }
    if (*(int *)(param_1 + 0x1c) == -1) {
      uVar2 = thunk_FUN_010303a8(PTR_DAT_023585e0);
      uVar3 = thunk_FUN_010303a8(PTR_DAT_02355e88);
      puVar5 = PTR_DAT_02355e20;
    }
    else {
      if (param_2 == 4) {
        lVar1 = FUN_01dcc798(0x10,0);
        if (lVar1 == 0) goto LAB_01d67934;
        FUN_01dcb1ac(lVar1,*(undefined4 *)(param_1 + 0x10),0);
        FUN_01dc37f8(lVar1,0x2e,0);
        FUN_01dcb1ac(lVar1,*(undefined4 *)(param_1 + 0x14),0);
        FUN_01dc37f8(lVar1,0x2e,0);
        FUN_01dcb1ac(lVar1,*(undefined4 *)(param_1 + 0x18),0);
        FUN_01dc37f8(lVar1,0x2e,0);
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        goto LAB_01d67918;
      }
      uVar2 = thunk_FUN_010303a8(PTR_DAT_023585e0);
      uVar3 = thunk_FUN_010303a8(PTR_DAT_02355e88);
      puVar5 = PTR_DAT_02355e60;
    }
  }
  uVar4 = thunk_FUN_010303a8(puVar5);
  uVar2 = FUN_01c433dc(uVar2,uVar3,uVar4,0);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar3 = thunk_FUN_010400dc();
  uVar4 = thunk_FUN_010303a8(PTR_DAT_023585e8);
  FUN_01c5e198(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_023585f0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar2);
}


