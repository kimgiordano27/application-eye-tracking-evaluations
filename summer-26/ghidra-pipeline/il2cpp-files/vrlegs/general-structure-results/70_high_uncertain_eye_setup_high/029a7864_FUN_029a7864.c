/*
FUNCTION_NAME: FUN_029a7864
ENTRY_POINT: 029a7864
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a7924) */

uint FUN_029a7864(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  char local_24 [4];
  
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar6,local_24,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar7 = *(long *)(param_1 + 0x48);
  FUN_029bb83c(param_2,lVar7,0,4,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar7 + 0x18);
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
  bVar2 = *(byte *)(lVar7 + 0x20);
  bVar3 = *(byte *)(lVar7 + 0x21);
  bVar4 = *(byte *)(lVar7 + 0x22);
  bVar5 = *(byte *)(lVar7 + 0x23);
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return (uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
}


