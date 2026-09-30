/*
FUNCTION_NAME: FUN_02bafcc8
ENTRY_POINT: 02bafcc8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bafd64) */

void FUN_02bafcc8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  char local_24 [4];
  
  FUN_027b3d9c(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar3,local_24,0);
  *(long *)(param_1 + 0x10) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((long *)(param_1 + 0x10),param_2);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(param_1 + 0x20));
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return;
}


