/*
FUNCTION_NAME: FUN_020908cc
ENTRY_POINT: 020908cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020909c4) */

void FUN_020908cc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  char local_34 [4];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  thunk_FUN_01a4b338();
  local_34[0] = '\0';
  FUN_027e0bd8(uVar2,local_34,0);
  uVar3 = 0;
  do {
    lVar4 = *(long *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar4 + 0x18) <= (int)uVar3) {
LAB_0209098c:
      if (local_34[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
      }
      return;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20) == param_2) {
      lVar4 = *(long *)(param_1 + 0x10);
      thunk_FUN_01a4b338();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      thunk_FUN_01a4b338();
      puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
      *puVar1 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
      goto LAB_0209098c;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


