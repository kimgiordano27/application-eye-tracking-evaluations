/*
FUNCTION_NAME: FUN_0299ea94
ENTRY_POINT: 0299ea94
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


/* WARNING: Removing unreachable block (ram,0x0299eb3c) */

void FUN_0299ea94(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  char local_24 [4];
  
  if ((*(long *)(param_1 + 200) == 0) ||
     (lVar2 = FUN_0298da70(*(long *)(param_1 + 200),0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = FUN_0298da78(lVar2,0);
  if ((uVar1 & 1) != (param_2 & 1)) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar3,local_24,0);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = FUN_0298da70(*(long *)(param_1 + 200),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0298da80(lVar2,param_2 & 1,0);
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
  }
  return;
}


