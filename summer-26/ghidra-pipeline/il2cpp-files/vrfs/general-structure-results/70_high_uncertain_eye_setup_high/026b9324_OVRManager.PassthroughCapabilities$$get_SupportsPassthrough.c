/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_SupportsPassthrough
ENTRY_POINT: 026b9324
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager_PassthroughCapabilities__get_SupportsPassthrough(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_026b93c0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)(lVar2 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          memmove(param_1 + 2,(void *)(lVar2 + (long)(int)uVar1 * 0x1a8 + 0x20),0x1a8);
          thunk_FUN_01656ef8(param_1 + 4,0);
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      goto LAB_026b93c0;
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  FUN_026b93c8(param_1);
  return 0;
}


