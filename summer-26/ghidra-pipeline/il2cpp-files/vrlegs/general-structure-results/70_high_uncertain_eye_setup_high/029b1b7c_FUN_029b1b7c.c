/*
FUNCTION_NAME: FUN_029b1b7c
ENTRY_POINT: 029b1b7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b1c88) */

void FUN_029b1b7c(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char local_24 [4];
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar7,local_24,0);
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar4 = param_3 >> 7;
  *(byte *)(lVar5 + 0x20) = (byte)param_3 & 0x7f;
  if (uVar4 == 0) {
    iVar3 = 1;
  }
  else {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(byte *)(lVar5 + uVar6 + 0x20) = *(byte *)(lVar5 + uVar6 + 0x20) | 0x80;
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = uVar6 + 1;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      bVar2 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *(byte *)(lVar5 + uVar6 + 0x21) = bVar2 & 0x7f;
      uVar6 = uVar1;
    } while (uVar4 != 0);
    iVar3 = (int)uVar1 + 1;
  }
  if (param_2 != 0) {
    FUN_029b3ef8(param_2,*(undefined8 *)(param_1 + 0x40),0,iVar3,0);
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


