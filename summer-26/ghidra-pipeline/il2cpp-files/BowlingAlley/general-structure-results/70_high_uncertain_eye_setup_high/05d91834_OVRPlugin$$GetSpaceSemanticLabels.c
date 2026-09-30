/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabels
ENTRY_POINT: 05d91834
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceSemanticLabels(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x92a) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727e478);
    *(undefined1 *)(unaff_x20 + 0x92a) = 1;
  }
  puVar1 = PTR_DAT_0727e478;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar2 = FUN_0593be7c(param_1,0);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = FUN_0593bedc(param_1,iVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar1);
      }
      iVar3 = FUN_0584b630(uVar5,0);
      iVar2 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_0593be7c(param_1,0);
    } while (iVar4 < iVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_0584aa90(iVar2,0);
  iVar2 = FUN_0593be7c(param_1,0);
  if (0 < iVar2) {
    iVar2 = 0;
    uVar8 = uVar5;
    do {
      uVar6 = FUN_0593bedc(param_1,iVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar1);
      }
      FUN_0584bcb0(uVar6,uVar8,0,0);
      lVar7 = FUN_0596f540(uVar8,0);
      uVar8 = FUN_0593bedc(param_1,iVar2,0);
      iVar4 = FUN_0584b630(uVar8,0);
      uVar8 = FUN_0596f534(lVar7 + iVar4,0);
      iVar2 = iVar2 + 1;
      iVar4 = FUN_0593be7c(param_1,0);
    } while (iVar2 < iVar4);
  }
  return uVar5;
}


