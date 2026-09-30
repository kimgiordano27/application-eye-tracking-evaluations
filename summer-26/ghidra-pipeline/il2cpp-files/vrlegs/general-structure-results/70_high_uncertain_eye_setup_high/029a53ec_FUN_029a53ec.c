/*
FUNCTION_NAME: FUN_029a53ec
ENTRY_POINT: 029a53ec
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


/* WARNING: Removing unreachable block (ram,0x029a54bc) */

void FUN_029a53ec(long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  char local_24 [4];
  
  uVar4 = param_3 & 0xffffffff;
  if ((param_4 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb98c(param_2,0x69,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar3,local_24,0);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(char *)(lVar2 + 0x20) = (char)(uVar4 >> 0x18);
  if (uVar1 != 1) {
    *(char *)(lVar2 + 0x21) = (char)(uVar4 >> 0x10);
    if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(char *)(lVar2 + 0x22) = (char)(uVar4 >> 8);
    if (uVar1 != 3) {
      *(char *)(lVar2 + 0x23) = (char)param_3;
      if (param_2 != 0) {
        FUN_029b3ef8(param_2,lVar2,0,4,0);
        if (local_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


