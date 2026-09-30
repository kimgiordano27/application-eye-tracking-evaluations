/*
FUNCTION_NAME: FUN_027b3da0
ENTRY_POINT: 027b3da0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027b3ea8) */
/* WARNING: Removing unreachable block (ram,0x027b3ee0) */

long FUN_027b3da0(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char local_24 [4];
  
  puVar1 = PTR_DAT_03cf09e8;
  if ((DAT_04124e9f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf09e8);
    FUN_01ab69ac(PTR_DAT_03cfc020);
    DAT_04124e9f = 1;
  }
  local_24[0] = '\0';
  FUN_0267b3a8(0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  FUN_027e0bd8(**(undefined8 **)(lVar2 + 0xb8),local_24,0);
  lVar4 = *(long *)puVar1;
  lVar2 = **(long **)(lVar4 + 0xb8);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      lVar2 = 0;
    }
    else {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar4);
        lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      plVar3 = (long *)(lVar2 + 0x10);
      lVar2 = *plVar3;
      *plVar3 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,0);
    }
    if (local_24[0] != '\0') {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      OVRManager_<>c__<InitOVRManager>b__424_0(**(undefined8 **)(lVar4 + 0xb8),0);
    }
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfc020);
      FUN_025f326c(lVar2,0);
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


