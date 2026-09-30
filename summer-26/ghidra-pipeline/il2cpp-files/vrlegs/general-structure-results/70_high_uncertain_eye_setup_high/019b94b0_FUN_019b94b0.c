/*
FUNCTION_NAME: FUN_019b94b0
ENTRY_POINT: 019b94b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x019b9648) */

void FUN_019b94b0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if (*(int *)param_1[1] < 0) {
    if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)param_1[3] = *(undefined8 *)(*(long *)param_1[2] + 0x70);
    pcVar3 = (char *)param_1[4];
    *pcVar3 = '\0';
    puVar4 = (undefined8 *)param_1[3];
    piVar5 = (int *)param_1[1];
    FUN_027e0bd8(*puVar4,pcVar3,0);
    if (*(int *)(*(long *)param_1[5] + 0x28) == 0) {
      if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*(long *)param_1[2] + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02bc0d7c();
      if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      puVar1 = (undefined8 *)(*(long *)param_1[2] + 0x50);
      *puVar1 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
    }
    else {
      lVar2 = *(long *)param_1[2];
      if (*(int *)(*(long *)param_1[5] + 0x28) == 2) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar2 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02bc0d7c();
        if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*(long *)param_1[2] + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02bc0d7c();
        if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        puVar1 = (undefined8 *)(*(long *)param_1[2] + 0x48);
        *puVar1 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
        if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        puVar1 = (undefined8 *)(*(long *)param_1[2] + 0x50);
        *puVar1 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
        if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        puVar1 = (undefined8 *)(*(long *)param_1[2] + 0x58);
        *puVar1 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
      }
      else {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar2 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02bc0d7c();
        if (*(long *)param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        puVar1 = (undefined8 *)(*(long *)param_1[2] + 0x58);
        *puVar1 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
      }
    }
    if ((*piVar5 < 0) && (*pcVar3 != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(*puVar4,0);
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


