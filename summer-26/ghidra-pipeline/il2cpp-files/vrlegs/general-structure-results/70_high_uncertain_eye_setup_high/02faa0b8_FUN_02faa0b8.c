/*
FUNCTION_NAME: FUN_02faa0b8
ENTRY_POINT: 02faa0b8
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


/* WARNING: Removing unreachable block (ram,0x02faa188) */

void FUN_02faa0b8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char local_34 [4];
  
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  plVar1 = (long *)(param_1 + 0x20);
  if (*plVar1 != 0) {
    FUN_026cdde4(*plVar1,0);
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  plVar1 = (long *)(param_1 + 0x30);
  if (*plVar1 != 0) {
    thunk_FUN_02bc8880(*plVar1,0);
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  plVar2 = (long *)(param_1 + 0x28);
  if (*plVar2 != 0) {
    FUN_02ec27a0(*plVar2,0);
    *plVar2 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
  }
  *plVar1 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return;
}


