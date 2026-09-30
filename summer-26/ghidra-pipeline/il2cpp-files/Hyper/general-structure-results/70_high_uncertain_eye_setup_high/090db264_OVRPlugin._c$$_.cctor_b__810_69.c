/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_69
ENTRY_POINT: 090db264
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_69(long param_1)

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
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x760));
  *(undefined1 *)(unaff_x20 + 0x5ca) = 1;
  puVar1 = PTR_DAT_0ac09760;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar2 = FUN_08d948e8();
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = FUN_08d94948();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar1);
      }
      iVar3 = FUN_08c7db7c(uVar5,0);
      iVar2 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_08d948e8();
    } while (iVar4 < iVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar5 = FUN_08c7cea0(iVar2,0);
  iVar2 = FUN_08d948e8();
  if (0 < iVar2) {
    iVar2 = 0;
    uVar8 = uVar5;
    do {
      uVar6 = FUN_08d94948();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar1);
      }
      thunk_FUN_0495290c(uVar6,uVar8,0,0);
      lVar7 = FUN_08dc8730(uVar8,0);
      uVar8 = FUN_08d94948();
      iVar4 = FUN_08c7db7c(uVar8,0);
      uVar8 = FUN_08dc8724(lVar7 + iVar4,0);
      iVar2 = iVar2 + 1;
      iVar4 = FUN_08d948e8();
    } while (iVar2 < iVar4);
  }
  return uVar5;
}


