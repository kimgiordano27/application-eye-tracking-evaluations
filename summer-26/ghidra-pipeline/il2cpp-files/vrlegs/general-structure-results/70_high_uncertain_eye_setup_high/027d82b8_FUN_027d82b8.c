/*
FUNCTION_NAME: FUN_027d82b8
ENTRY_POINT: 027d82b8
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


/* WARNING: Removing unreachable block (ram,0x027d83d8) */

undefined8 FUN_027d82b8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char local_24 [4];
  
  puVar1 = PTR_DAT_03cc6f48;
  if ((DAT_0412503d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc6f48);
    DAT_0412503d = 1;
  }
  uVar2 = FUN_027d8448(param_1);
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027de48c(lVar4,uVar2 & 1,1,0);
  thunk_FUN_01a4b338();
  lVar5 = FUN_01aa50f0((long *)(param_1 + 0x18),lVar4,0);
  if (lVar5 == 0) {
    uVar3 = FUN_027d8448(param_1);
    if ((uVar2 & 1) != (uVar3 & 1)) {
      local_24[0] = '\0';
      FUN_027e0bd8(lVar4,local_24,0);
      lVar5 = *(long *)(param_1 + 0x18);
      thunk_FUN_01a4b338();
      if (lVar5 == lVar4) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_027de940(lVar4,0);
      }
      if (local_24[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
      }
    }
    uVar6 = 1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e6f1c(lVar4,0);
    uVar6 = 0;
  }
  return uVar6;
}


