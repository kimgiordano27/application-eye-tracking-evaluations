/*
FUNCTION_NAME: FUN_0227a898
ENTRY_POINT: 0227a898
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


void FUN_0227a898(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_38;
  
  if ((DAT_0412236a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdc970);
    FUN_01ab69ac(PTR_DAT_03cdc978);
    DAT_0412236a = 1;
  }
  plVar2 = (long *)(param_1 + 0x40);
  *plVar2 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  thunk_FUN_01a4ad9c(uVar3,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x20)) {
      FUN_022661a4(lVar1,&local_38,*(undefined8 *)PTR_DAT_03cdc970);
      *plVar2 = local_38;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2);
    }
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    if (*plVar2 == 0) {
      plVar2 = *(long **)(param_1 + 0x48);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


