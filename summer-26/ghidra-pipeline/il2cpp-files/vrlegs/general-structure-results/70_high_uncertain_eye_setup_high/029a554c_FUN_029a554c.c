/*
FUNCTION_NAME: FUN_029a554c
ENTRY_POINT: 029a554c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a5674) */

void FUN_029a554c(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  char local_24 [4];
  
  if ((param_4 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb98c(param_2,0x6c,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar7,local_24,0);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(lVar6 + 0x20) = param_3;
  FUN_0279cdc8(lVar6,0,*(undefined8 *)(param_1 + 0x30),0,8,0);
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = *(undefined1 *)(lVar6 + 0x20);
  uVar3 = *(undefined1 *)(lVar6 + 0x21);
  uVar4 = *(undefined1 *)(lVar6 + 0x23);
  *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(lVar6 + 0x27);
  *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)(lVar6 + 0x26);
  uVar5 = *(undefined1 *)(lVar6 + 0x22);
  *(undefined1 *)(lVar6 + 0x22) = *(undefined1 *)(lVar6 + 0x25);
  *(undefined1 *)(lVar6 + 0x23) = *(undefined1 *)(lVar6 + 0x24);
  *(undefined1 *)(lVar6 + 0x24) = uVar4;
  *(undefined1 *)(lVar6 + 0x25) = uVar5;
  *(undefined1 *)(lVar6 + 0x26) = uVar3;
  *(undefined1 *)(lVar6 + 0x27) = uVar2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_029b3ef8(param_2,lVar6,0,8,0);
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


