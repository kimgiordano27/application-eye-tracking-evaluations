/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_50
ENTRY_POINT: 04f9aff4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_50(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c(PTR_DAT_0631e258);
  *(undefined1 *)(unaff_x20 + 0xe3a) = 1;
  puVar1 = PTR_DAT_0631e258;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar2 = FUN_04d941cc();
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = FUN_04d9422c();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      iVar3 = FUN_04ca6fd4(uVar5,0);
      iVar2 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_04d941cc();
    } while (iVar4 < iVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_04ca6188(iVar2,0);
  iVar2 = FUN_04d941cc();
  if (0 < iVar2) {
    iVar2 = 0;
    uVar8 = uVar5;
    do {
      uVar6 = FUN_04d9422c();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      thunk_FUN_02b48d1c(uVar6,uVar8,0,0);
      lVar7 = FUN_04dc684c(uVar8,0);
      uVar8 = FUN_04d9422c();
      iVar4 = FUN_04ca6fd4(uVar8,0);
      uVar8 = FUN_04dc6840(lVar7 + iVar4,0);
      iVar2 = iVar2 + 1;
      iVar4 = FUN_04d941cc();
    } while (iVar2 < iVar4);
  }
  return uVar5;
}


