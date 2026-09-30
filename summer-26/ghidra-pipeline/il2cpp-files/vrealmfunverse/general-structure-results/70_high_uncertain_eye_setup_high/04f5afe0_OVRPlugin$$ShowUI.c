/*
FUNCTION_NAME: OVRPlugin$$ShowUI
ENTRY_POINT: 04f5afe0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__ShowUI(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x520));
  *(undefined1 *)(unaff_x23 + 0xaab) = 1;
  if (unaff_x22 != 0) {
    if (*(int *)(unaff_x22 + 0x18) == 1) {
      *unaff_x19 = 0.0;
      lVar2 = FUN_037a6268();
      *unaff_x21 = lVar2;
      thunk_FUN_02bb0e9c();
      *unaff_x20 = lVar2;
      thunk_FUN_02bb0e9c();
    }
    else {
      if (*(int *)(unaff_x22 + 0x18) == 0) {
        *unaff_x21 = 0;
        thunk_FUN_02bb0e9c();
        *unaff_x20 = 0;
        thunk_FUN_02bb0e9c();
LAB_04f5b024:
        *unaff_x19 = 0.0;
        return 0;
      }
      lVar2 = FUN_04f5b5ac();
      *unaff_x20 = lVar2;
      thunk_FUN_02bb0e9c();
      lVar2 = FUN_04f5b72c();
      *unaff_x21 = lVar2;
      thunk_FUN_02bb0e9c();
      puVar1 = PTR_DAT_06312520;
      lVar2 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar3 = FUN_05c8e378(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *unaff_x21;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar3 = FUN_05c8e378(lVar2,0,0);
        if ((uVar3 & 1) != 0) goto LAB_04f5b024;
      }
      lVar2 = *unaff_x21;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar3 = FUN_05c8e378(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        *unaff_x21 = *unaff_x20;
        thunk_FUN_02bb0e9c();
        if (*unaff_x20 == 0) goto LAB_04f5b22c;
        FUN_04f5b8ac();
        lVar2 = FUN_04f5b5ac();
        *unaff_x20 = lVar2;
        thunk_FUN_02bb0e9c();
      }
      lVar2 = *unaff_x20;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar3 = FUN_05c8e378(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        *unaff_x20 = *unaff_x21;
        thunk_FUN_02bb0e9c();
        if (*unaff_x21 == 0) goto LAB_04f5b22c;
        FUN_04f5b8ac();
        lVar2 = FUN_04f5b72c();
        *unaff_x21 = lVar2;
        thunk_FUN_02bb0e9c();
      }
      if ((*unaff_x21 == 0) || (fVar4 = (float)FUN_04f5b8ac(), *unaff_x20 == 0)) goto LAB_04f5b22c;
      fVar5 = (float)FUN_04f5b8ac();
      fVar6 = 0.0;
      if (fVar4 - fVar5 != 0.0) {
        if (*unaff_x20 == 0) goto LAB_04f5b22c;
        fVar6 = (float)FUN_04f5b8ac();
        fVar6 = (unaff_s8 - fVar6) / (fVar4 - fVar5);
      }
      *unaff_x19 = fVar6;
    }
    return 1;
  }
LAB_04f5b22c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


