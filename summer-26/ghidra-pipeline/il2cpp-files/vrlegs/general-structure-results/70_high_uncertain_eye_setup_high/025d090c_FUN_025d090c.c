/*
FUNCTION_NAME: FUN_025d090c
ENTRY_POINT: 025d090c
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


/* WARNING: Removing unreachable block (ram,0x025d09d4) */

void FUN_025d090c(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char local_24 [4];
  
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  FUN_027b3d9c(param_1,0);
  plVar4 = (long *)(param_1 + 0x38);
  *plVar4 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,param_2);
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(*plVar4 + 0x18) == 0) {
    uVar1 = FUN_025d0b40();
    local_24[0] = '\0';
    FUN_027e0bd8(uVar1,local_24,0);
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar4 = (long *)(*plVar4 + 0x18);
    if (*plVar4 == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar2 = *(long **)(param_2 + 0x10);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
      *plVar4 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
    }
  }
  return;
}


