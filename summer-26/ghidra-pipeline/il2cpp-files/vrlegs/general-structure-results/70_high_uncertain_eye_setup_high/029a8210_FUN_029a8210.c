/*
FUNCTION_NAME: FUN_029a8210
ENTRY_POINT: 029a8210
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


/* WARNING: Removing unreachable block (ram,0x029a8310) */

ulong FUN_029a8210(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  long lVar11;
  char local_24 [4];
  
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar10,local_24,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar11 = *(long *)(param_1 + 0x50);
  FUN_029bb83c(param_2,lVar11,0,8,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar11 + 0x18);
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
  if (uVar1 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 7) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  bVar2 = *(byte *)(lVar11 + 0x20);
  bVar3 = *(byte *)(lVar11 + 0x21);
  bVar4 = *(byte *)(lVar11 + 0x22);
  bVar5 = *(byte *)(lVar11 + 0x23);
  bVar6 = *(byte *)(lVar11 + 0x24);
  bVar7 = *(byte *)(lVar11 + 0x25);
  bVar8 = *(byte *)(lVar11 + 0x26);
  bVar9 = *(byte *)(lVar11 + 0x27);
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return (ulong)bVar2 << 0x38 | (ulong)bVar3 << 0x30 | (ulong)bVar4 << 0x28 | (ulong)bVar5 << 0x20 |
         (ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 | (ulong)bVar9;
}


