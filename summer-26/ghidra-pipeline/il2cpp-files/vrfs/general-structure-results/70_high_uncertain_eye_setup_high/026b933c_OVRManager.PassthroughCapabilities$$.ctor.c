/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 026b933c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager_PassthroughCapabilities___ctor(undefined8 param_1,long param_2)

{
  uint uVar1;
  bool in_ZR;
  long in_x9;
  long lVar2;
  long unaff_x19;
  
  if (in_ZR) {
    uVar1 = *(uint *)(unaff_x19 + 8);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      lVar2 = *(long *)(in_x9 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        memmove((void *)(unaff_x19 + 0x10),(void *)(lVar2 + (long)(int)uVar1 * 0x1a8 + 0x20),0x1a8);
        thunk_FUN_01656ef8(unaff_x19 + 0x20,0);
        *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  FUN_026b93c8();
  return 0;
}


