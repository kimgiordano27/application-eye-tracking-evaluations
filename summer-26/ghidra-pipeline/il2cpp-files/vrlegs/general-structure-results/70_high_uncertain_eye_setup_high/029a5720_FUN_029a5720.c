/*
FUNCTION_NAME: FUN_029a5720
ENTRY_POINT: 029a5720
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a58f8) */

void FUN_029a5720(undefined4 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  char local_24 [4];
  
  if ((DAT_04127d56 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07d88);
    DAT_04127d56 = 1;
  }
  if ((param_4 & 1) != 0) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb98c(param_3,0x66,0);
  }
  puVar4 = PTR_DAT_03d07d88;
  lVar5 = *(long *)PTR_DAT_03d07d88;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar4;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar7,local_24,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar4;
  }
  plVar6 = *(long **)(lVar5 + 0xb8);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined4 *)(lVar5 + 0x20) = param_1;
  FUN_0279cdc8(lVar5,0,plVar6[1],0,4,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar4;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = *(undefined1 *)(lVar5 + 0x20);
  *(undefined1 *)(lVar5 + 0x20) = *(undefined1 *)(lVar5 + 0x23);
  uVar3 = *(undefined1 *)(lVar5 + 0x21);
  lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined1 *)(lVar5 + 0x21) = *(undefined1 *)(lVar5 + 0x22);
  lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined1 *)(lVar5 + 0x22) = uVar3;
  lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined1 *)(lVar5 + 0x23) = uVar2;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_029b3ef8(param_3,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0,4,0);
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


