/*
FUNCTION_NAME: FUN_02e18130
ENTRY_POINT: 02e18130
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


/* WARNING: Removing unreachable block (ram,0x02e18208) */

long FUN_02e18130(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  char local_24 [4];
  
  if ((DAT_0412a174 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1d928);
    DAT_0412a174 = 1;
  }
  plVar2 = param_1 + 5;
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x130);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar3,local_24,0);
    if (*plVar2 == 0) {
      lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1d928);
      FUN_02e0fcf8(lVar1,param_1,0);
      *plVar2 = lVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar1);
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    lVar1 = *plVar2;
  }
  return lVar1;
}


