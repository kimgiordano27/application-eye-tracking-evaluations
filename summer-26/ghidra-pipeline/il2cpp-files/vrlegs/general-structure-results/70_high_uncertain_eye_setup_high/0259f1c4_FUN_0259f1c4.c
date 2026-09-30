/*
FUNCTION_NAME: FUN_0259f1c4
ENTRY_POINT: 0259f1c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0259f314) */

long FUN_0259f1c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char local_24 [4];
  
  puVar1 = PTR_DAT_03cef230;
  if ((DAT_04123b72 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cef230);
    DAT_04123b72 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    lVar5 = puVar3[1];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    lVar5 = puVar3[1];
  }
  if (lVar5 != 0) {
    return puVar3[1];
  }
  uVar6 = *puVar3;
  local_24[0] = '\0';
  FUN_027e0bd8(uVar6,local_24,0);
  lVar5 = *(long *)puVar1;
  iVar4 = *(int *)(lVar5 + 0xe0);
  if (iVar4 == 0) {
    thunk_FUN_01a58e78(lVar5);
    lVar5 = *(long *)puVar1;
    iVar4 = *(int *)(lVar5 + 0xe0);
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (iVar4 == 0) {
      thunk_FUN_01a58e78(lVar5);
    }
    uVar2 = FUN_0259f3cc();
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar7 == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cd8618);
      uVar6 = thunk_FUN_01a89e68();
      uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cef238);
      FUN_0277d5fc(uVar6,uVar2,0);
      uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cef240);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,uVar2);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) != 0) goto LAB_0259f2e4;
    thunk_FUN_01a58e78();
  }
  else {
    if (iVar4 != 0) goto LAB_0259f2e4;
    thunk_FUN_01a58e78(lVar5);
  }
  lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
LAB_0259f2e4:
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return lVar7;
}


